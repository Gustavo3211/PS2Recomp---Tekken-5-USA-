#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E9ED8
// Address: 0x4e9ed8 - 0x4ea0e8
void sub_004E9ED8_0x4e9ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9ED8_0x4e9ed8");
#endif

    switch (ctx->pc) {
        case 0x4e9efcu: goto label_4e9efc;
        case 0x4e9f14u: goto label_4e9f14;
        default: break;
    }

    ctx->pc = 0x4e9ed8u;

    // 0x4e9ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e9ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e9edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e9edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e9ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e9ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9ee4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e9ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e9ee8: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4e9ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4e9eec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e9eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e9ef0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4e9ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4e9ef4: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4E9EF4u;
    SET_GPR_U32(ctx, 31, 0x4E9EFCu);
    ctx->pc = 0x4E9EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9EF4u;
    // 0x4e9ef8: 0x3c12007f  lui         $s2, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E9EF4u, 0x4E9EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9EFCu;
label_4e9efc:
    // 0x4e9efc: 0xae42120c  sw          $v0, 0x120C($s2)
    ctx->pc = 0x4e9efcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4620), GPR_U32(ctx, 2));
    // 0x4e9f00: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e9f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e9f04: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E9F04u;
    {
        const bool branch_taken_0x4e9f04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F04u;
        // 0x4e9f08: 0x2606015e  addiu       $a2, $s0, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9f04) {
            ctx->pc = 0x4E9F38u;
            goto label_4e9f38;
        }
    }
    ctx->pc = 0x4E9F0Cu;
    // 0x4e9f0c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E9F0Cu;
    SET_GPR_U32(ctx, 31, 0x4E9F14u);
    ctx->pc = 0x4E9F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9F0Cu;
    // 0x4e9f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E9F0Cu, 0x4E9F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9F14u;
label_4e9f14:
    // 0x4e9f14: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4e9f14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e9f18: 0x2606015e  addiu       $a2, $s0, 0x15E
    ctx->pc = 0x4e9f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4e9f1c: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4e9f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e9f20: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4e9f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e9f24: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x4e9f24u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e9f28: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4e9f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e9f2c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e9f2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e9f30: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e9f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e9f34: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e9f34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e9f38:
    // 0x4e9f38: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e9f38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e9f3c: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4e9f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4e9f40: 0x24e411e8  addiu       $a0, $a3, 0x11E8
    ctx->pc = 0x4e9f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4584));
    // 0x4e9f44: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e9f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e9f48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4e9f4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e9f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4e9f50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e9f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e9f54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e9f58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e9f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e9f5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e9f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e9f60: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e9f60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e9f64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4e9f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4e9f68: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e9f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4e9f6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e9f70: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e9f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e9f74: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4e9f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e9f78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E9F78u;
    {
        const bool branch_taken_0x4e9f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F78u;
        // 0x4e9f7c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9f78) {
            ctx->pc = 0x4E9F90u;
            goto label_4e9f90;
        }
    }
    ctx->pc = 0x4E9F80u;
    // 0x4e9f80: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4e9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4e9f84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4E9F84u;
    {
        const bool branch_taken_0x4e9f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9F84u;
        // 0x4e9f88: 0x24448078  addiu       $a0, $v0, -0x7F88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9f84) {
            ctx->pc = 0x4E9F94u;
            goto label_4e9f94;
        }
    }
    ctx->pc = 0x4E9F8Cu;
    // 0x4e9f8c: 0x0  nop
    ctx->pc = 0x4e9f8cu;
    // NOP
label_4e9f90:
    // 0x4e9f90: 0x24448088  addiu       $a0, $v0, -0x7F78
    ctx->pc = 0x4e9f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934664));
label_4e9f94:
    // 0x4e9f94: 0x24e711e8  addiu       $a3, $a3, 0x11E8
    ctx->pc = 0x4e9f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4584));
    // 0x4e9f98: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4e9f98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e9f9c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e9f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e9fa0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4e9fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4e9fa4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4e9fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4e9fa8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e9fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e9fac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e9fb0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e9fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e9fb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e9fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e9fb8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4e9fb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e9fbc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4e9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4e9fc0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4e9fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4e9fc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e9fc8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e9fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e9fcc: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e9fccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e9fd0: 0x2c620600  sltiu       $v0, $v1, 0x600
    ctx->pc = 0x4e9fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1536) ? 1 : 0);
    // 0x4e9fd4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E9FD4u;
    {
        const bool branch_taken_0x4e9fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9fd4) {
            ctx->pc = 0x4E9FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9FD4u;
            // 0x4e9fd8: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9FF8u;
            goto label_4e9ff8;
        }
    }
    ctx->pc = 0x4E9FDCu;
    // 0x4e9fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e9fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e9fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e9fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e9fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e9fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e9fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e9fec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4e9fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e9ff0: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4E9FF0u;
    ctx->pc = 0x4E9FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9FF0u;
    // 0x4e9ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4E9FF8u;
label_4e9ff8:
    // 0x4e9ff8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4e9ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e9ffc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e9ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea000: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4ea000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4ea004: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ea004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ea008: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea00c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ea00cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ea010: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ea010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ea014: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ea014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ea018: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4ea018u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4ea01c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea020: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4ea020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea024: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ea024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ea028: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x4ea028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4ea02c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ea02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ea030: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ea030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ea034: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4ea034u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4ea038: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea03c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4ea03cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea040: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4ea040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4ea044: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ea044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ea048: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ea048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ea04c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4ea04cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4ea050: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4ea050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea054: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x4ea054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4ea058: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ea058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ea05c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ea05cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ea060: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4ea060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4ea064: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ea064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ea068: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4ea068u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4ea06c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ea06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ea070: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4ea070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4ea074: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4ea074u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ea078: 0xa604000c  sh          $a0, 0xC($s0)
    ctx->pc = 0x4ea078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ea07c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4ea07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea080: 0x8e46120c  lw          $a2, 0x120C($s2)
    ctx->pc = 0x4ea080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4620)));
    // 0x4ea084: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea088: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4ea088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ea08c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4ea08cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4ea090: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea094: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4ea094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4ea098: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x4ea098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea09c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4ea09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4ea0a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ea0a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ea0a4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4ea0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ea0a8: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4ea0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4ea0ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4ea0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4ea0b0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4ea0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4ea0b4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4ea0b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea0b8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EA0B8u;
    {
        const bool branch_taken_0x4ea0b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4EA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA0B8u;
        // 0x4ea0bc: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea0b8) {
            ctx->pc = 0x4EA0C8u;
            goto label_4ea0c8;
        }
    }
    ctx->pc = 0x4EA0C0u;
    // 0x4ea0c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4EA0C0u;
    {
        const bool branch_taken_0x4ea0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA0C0u;
        // 0x4ea0c4: 0xa6020118  sh          $v0, 0x118($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea0c0) {
            ctx->pc = 0x4EA0CCu;
            goto label_4ea0cc;
        }
    }
    ctx->pc = 0x4EA0C8u;
label_4ea0c8:
    // 0x4ea0c8: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4ea0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
label_4ea0cc:
    // 0x4ea0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ea0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ea0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea0d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ea0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ea0d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ea0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ea0dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4ea0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ea0e0: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4EA0E0u;
    ctx->pc = 0x4EA0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA0E0u;
    // 0x4ea0e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4EA0E8u;
}
