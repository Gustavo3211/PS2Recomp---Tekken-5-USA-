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

// Function: sub_004E5BA0
// Address: 0x4e5ba0 - 0x4e5df8
void sub_004E5BA0_0x4e5ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5BA0_0x4e5ba0");
#endif

    switch (ctx->pc) {
        case 0x4e5bb4u: goto label_4e5bb4;
        default: break;
    }

    ctx->pc = 0x4e5ba0u;

    // 0x4e5ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e5ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e5ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e5ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e5ba8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e5ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e5bac: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4E5BACu;
    SET_GPR_U32(ctx, 31, 0x4E5BB4u);
    ctx->pc = 0x4E5BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5BACu;
    // 0x4e5bb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E5BACu, 0x4E5BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5BB4u;
label_4e5bb4:
    // 0x4e5bb4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e5bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4e5bb8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e5bbc: 0x248611cc  addiu       $a2, $a0, 0x11CC
    ctx->pc = 0x4e5bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4556));
    // 0x4e5bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5bc4: 0x246711b8  addiu       $a3, $v1, 0x11B8
    ctx->pc = 0x4e5bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4536));
    // 0x4e5bc8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e5bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e5bcc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4e5bccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F11CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11CCu, _value); } while (0);
    // 0x4e5bd0: 0x246911bc  addiu       $t1, $v1, 0x11BC
    ctx->pc = 0x4e5bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4540));
    // 0x4e5bd4: 0x260301b4  addiu       $v1, $s0, 0x1B4
    ctx->pc = 0x4e5bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4e5bd8: 0x260c014a  addiu       $t4, $s0, 0x14A
    ctx->pc = 0x4e5bd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
    // 0x4e5bdc: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4e5bdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e5be0: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4e5be0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4e5be4: 0x260b01ba  addiu       $t3, $s0, 0x1BA
    ctx->pc = 0x4e5be4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 442));
    // 0x4e5be8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4e5be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e5bec: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4E5BECu;
    {
        const bool branch_taken_0x4e5bec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5BECu;
        // 0x4e5bf0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5bec) {
            ctx->pc = 0x4E5C1Cu;
            goto label_4e5c1c;
        }
    }
    ctx->pc = 0x4E5BF4u;
    // 0x4e5bf4: 0xa605014a  sh          $a1, 0x14A($s0)
    ctx->pc = 0x4e5bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e5bf8: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4e5bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e5bfc: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4e5bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e5c00: 0xa6050162  sh          $a1, 0x162($s0)
    ctx->pc = 0x4e5c00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e5c04: 0xa605000e  sh          $a1, 0xE($s0)
    ctx->pc = 0x4e5c04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e5c08: 0xa60001ba  sh          $zero, 0x1BA($s0)
    ctx->pc = 0x4e5c08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 442), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e5c0c: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4e5c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e5c10: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e5c10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e5c14: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e5c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e5c18: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e5c18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e5c1c:
    // 0x4e5c1c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e5c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e5c20: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e5c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e5c24: 0x84c2000a  lh          $v0, 0xA($a2)
    ctx->pc = 0x4e5c24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x4e5c28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5c2c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4e5c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e5c30: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4e5c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4e5c34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5c38: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e5c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e5c3c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e5c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e5c40: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4e5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e5c44: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4e5c44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e5c48: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4e5c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4e5c4c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e5c4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e5c50: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4e5c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4e5c54: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e5c54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e5c58: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4e5c58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x4e5c5c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4e5c5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e5c60: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4e5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e5c64: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x4e5c64u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4e5c68: 0x5400a  movz        $t0, $zero, $a1
    ctx->pc = 0x4e5c68u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x4e5c6c: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x4e5c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x4e5c70: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4e5c70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4e5c74: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4e5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4e5c78: 0x2c627700  sltiu       $v0, $v1, 0x7700
    ctx->pc = 0x4e5c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30464) ? 1 : 0);
    // 0x4e5c7c: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x4e5c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5c80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E5C80u;
    {
        const bool branch_taken_0x4e5c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5C80u;
        // 0x4e5c84: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5c80) {
            ctx->pc = 0x4E5C98u;
            goto label_4e5c98;
        }
    }
    ctx->pc = 0x4E5C88u;
    // 0x4e5c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e5c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5c8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e5c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e5c90: 0x81398a2  j           func_4E6288
    ctx->pc = 0x4E5C90u;
    ctx->pc = 0x4E5C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5C90u;
    // 0x4e5c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6288u, 0x4E5C90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E5C98u;
label_4e5c98:
    // 0x4e5c98: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4e5c98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e5c9c: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4e5c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4e5ca0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4e5ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4e5ca4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e5ca8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5cac: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4e5cacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e5cb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4e5cb4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4e5cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4e5cb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5cbc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e5cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e5cc0: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x4e5cc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e5cc4: 0xa5840000  sh          $a0, 0x0($t4)
    ctx->pc = 0x4e5cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e5cc8: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4e5cc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4e5ccc: 0x95660000  lhu         $a2, 0x0($t3)
    ctx->pc = 0x4e5cccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4e5cd0: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x4e5cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4e5cd4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4e5cd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4e5cd8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4e5cd8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4e5cdc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e5cdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e5ce0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4e5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4e5ce4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4e5ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4e5ce8: 0x24a57e60  addiu       $a1, $a1, 0x7E60
    ctx->pc = 0x4e5ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32352));
    // 0x4e5cec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4e5cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4e5cf0: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4e5cf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e5cf4: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E5CF4u;
    {
        const bool branch_taken_0x4e5cf4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4E5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5CF4u;
        // 0x4e5cf8: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5cf4) {
            ctx->pc = 0x4E5D10u;
            goto label_4e5d10;
        }
    }
    ctx->pc = 0x4E5CFCu;
    // 0x4e5cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e5d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5d04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e5d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e5d08: 0x813975a  j           func_4E5D68
    ctx->pc = 0x4E5D08u;
    ctx->pc = 0x4E5D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5D08u;
    // 0x4e5d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5D68u;
    goto label_4e5d68;
    ctx->pc = 0x4E5D10u;
label_4e5d10:
    // 0x4e5d10: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4e5d10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e5d14: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x4e5d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4e5d18: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e5d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e5d1c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E5D1Cu;
    {
        const bool branch_taken_0x4e5d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5d1c) {
            ctx->pc = 0x4E5D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5D1Cu;
            // 0x4e5d20: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E5D38u;
            goto label_4e5d38;
        }
    }
    ctx->pc = 0x4E5D24u;
    // 0x4e5d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e5d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5d2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e5d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e5d30: 0x813975a  j           func_4E5D68
    ctx->pc = 0x4E5D30u;
    ctx->pc = 0x4E5D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5D30u;
    // 0x4e5d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5D68u;
    goto label_4e5d68;
    ctx->pc = 0x4E5D38u;
label_4e5d38:
    // 0x4e5d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5d3c: 0xa5630000  sh          $v1, 0x0($t3)
    ctx->pc = 0x4e5d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e5d40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e5d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e5d44: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e5d48: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e5d48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e5d4c: 0xa6030160  sh          $v1, 0x160($s0)
    ctx->pc = 0x4e5d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e5d50: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e5d54: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x4e5d54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4e5d58: 0xa6030162  sh          $v1, 0x162($s0)
    ctx->pc = 0x4e5d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e5d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e5d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5d60: 0x813975a  j           func_4E5D68
    ctx->pc = 0x4E5D60u;
    ctx->pc = 0x4E5D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5D60u;
    // 0x4e5d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5D68u;
    goto label_4e5d68;
    ctx->pc = 0x4E5D68u;
label_4e5d68:
    // 0x4e5d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e5d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e5d6c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e5d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e5d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e5d74: 0x244811c0  addiu       $t0, $v0, 0x11C0
    ctx->pc = 0x4e5d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4544));
    // 0x4e5d78: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4e5d78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5d7c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e5d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e5d80: 0x84e50162  lh          $a1, 0x162($a3)
    ctx->pc = 0x4e5d80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 354)));
    // 0x4e5d84: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11C0u));
    // 0x4e5d88: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4e5d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4e5d8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e5d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e5d90: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4e5d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4e5d94: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4e5d94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4e5d98: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4e5d98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e5d9c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E5D9Cu;
    {
        const bool branch_taken_0x4e5d9c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4E5DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5D9Cu;
        // 0x4e5da0: 0x24e6015e  addiu       $a2, $a3, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5d9c) {
            ctx->pc = 0x4E5DB0u;
            goto label_4e5db0;
        }
    }
    ctx->pc = 0x4E5DA4u;
    // 0x4e5da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5da8: 0x81398a8  j           func_4E62A0
    ctx->pc = 0x4E5DA8u;
    ctx->pc = 0x4E5DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5DA8u;
    // 0x4e5dac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E62A0u, 0x4E5DA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E5DB0u;
label_4e5db0:
    // 0x4e5db0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e5db0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e5db4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4e5db8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4e5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e5dbc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E5DBCu;
    {
        const bool branch_taken_0x4e5dbc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4E5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5DBCu;
        // 0x4e5dc0: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5dbc) {
            ctx->pc = 0x4E5DD0u;
            goto label_4e5dd0;
        }
    }
    ctx->pc = 0x4E5DC4u;
    // 0x4e5dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5dc8: 0x81398a8  j           func_4E62A0
    ctx->pc = 0x4E5DC8u;
    ctx->pc = 0x4E5DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5DC8u;
    // 0x4e5dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E62A0u, 0x4E5DC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E5DD0u;
label_4e5dd0:
    // 0x4e5dd0: 0x94e20160  lhu         $v0, 0x160($a3)
    ctx->pc = 0x4e5dd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x4e5dd4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e5dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e5dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e5ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5de0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4e5de0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e5de4: 0xac6011c4  sw          $zero, 0x11C4($v1)
    ctx->pc = 0x4e5de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F11C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11C4u, _value); } while (0);
    // 0x4e5de8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e5de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e5dec: 0x8125e98  j           func_497A60
    ctx->pc = 0x4E5DECu;
    ctx->pc = 0x4E5DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5DECu;
    // 0x4e5df0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x497A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497A60u, 0x4E5DECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E5DF4u;
    // 0x4e5df4: 0x0  nop
    ctx->pc = 0x4e5df4u;
    // NOP
    ctx->pc = 0x4e5df8u;
}
