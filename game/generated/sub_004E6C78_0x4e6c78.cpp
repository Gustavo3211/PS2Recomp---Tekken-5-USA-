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

// Function: sub_004E6C78
// Address: 0x4e6c78 - 0x4e7018
void sub_004E6C78_0x4e6c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6C78_0x4e6c78");
#endif

    switch (ctx->pc) {
        case 0x4e6ca4u: goto label_4e6ca4;
        case 0x4e6d5cu: goto label_4e6d5c;
        case 0x4e6e28u: goto label_4e6e28;
        case 0x4e6fb0u: goto label_4e6fb0;
        case 0x4e6fb8u: goto label_4e6fb8;
        case 0x4e6fccu: goto label_4e6fcc;
        case 0x4e6fe0u: goto label_4e6fe0;
        case 0x4e6ff0u: goto label_4e6ff0;
        case 0x4e7000u: goto label_4e7000;
        default: break;
    }

    ctx->pc = 0x4e6c78u;

    // 0x4e6c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e6c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e6c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e6c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e6c80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e6c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6c84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e6c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e6c88: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4e6c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4e6c8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e6c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e6c90: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e6c90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e6c94: 0x4420036  bltzl       $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x4E6C94u;
    {
        const bool branch_taken_0x4e6c94 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4e6c94) {
            ctx->pc = 0x4E6C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6C94u;
            // 0x4e6c98: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6D70u;
            goto label_4e6d70;
        }
    }
    ctx->pc = 0x4E6C9Cu;
    // 0x4e6c9c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E6C9Cu;
    SET_GPR_U32(ctx, 31, 0x4E6CA4u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E6C9Cu, 0x4E6CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6CA4u;
label_4e6ca4:
    // 0x4e6ca4: 0x260401be  addiu       $a0, $s0, 0x1BE
    ctx->pc = 0x4e6ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 446));
    // 0x4e6ca8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4e6ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e6cac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E6CACu;
    {
        const bool branch_taken_0x4e6cac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6CACu;
        // 0x4e6cb0: 0x24020431  addiu       $v0, $zero, 0x431 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6cac) {
            ctx->pc = 0x4E6CC0u;
            goto label_4e6cc0;
        }
    }
    ctx->pc = 0x4E6CB4u;
    // 0x4e6cb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E6CB4u;
    {
        const bool branch_taken_0x4e6cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6CB4u;
        // 0x4e6cb8: 0x24030437  addiu       $v1, $zero, 0x437 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1079));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6cb4) {
            ctx->pc = 0x4E6CC8u;
            goto label_4e6cc8;
        }
    }
    ctx->pc = 0x4E6CBCu;
    // 0x4e6cbc: 0x0  nop
    ctx->pc = 0x4e6cbcu;
    // NOP
label_4e6cc0:
    // 0x4e6cc0: 0x24020493  addiu       $v0, $zero, 0x493
    ctx->pc = 0x4e6cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1171));
    // 0x4e6cc4: 0x24030499  addiu       $v1, $zero, 0x499
    ctx->pc = 0x4e6cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1177));
label_4e6cc8:
    // 0x4e6cc8: 0xa6020160  sh          $v0, 0x160($s0)
    ctx->pc = 0x4e6cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e6ccc: 0xa6030162  sh          $v1, 0x162($s0)
    ctx->pc = 0x4e6cccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e6cd0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e6cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e6cd4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4e6cd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e6cd8: 0x24a511d0  addiu       $a1, $a1, 0x11D0
    ctx->pc = 0x4e6cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4560));
    // 0x4e6cdc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e6cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e6ce0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11D0u));
    // 0x4e6ce4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e6ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e6ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6cec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6cf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6cf4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e6cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e6cf8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6cfc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e6cfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e6d00: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4e6d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4e6d04: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e6d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e6d08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6d0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e6d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e6d10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6d14: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e6d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e6d18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4e6d1c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e6d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e6d20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6d24: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e6d24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e6d28: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e6d28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e6d2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e6d30: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e6d30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e6d34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e6d38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4e6d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4e6d3c: 0x24217ec8  addiu       $at, $at, 0x7EC8
    ctx->pc = 0x4e6d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32456));
    // 0x4e6d40: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4e6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4e6d44: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e6d44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e6d48: 0xa6030118  sh          $v1, 0x118($s0)
    ctx->pc = 0x4e6d48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e6d4c: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x4e6d4cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4e6d50: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4e6d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e6d54: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4E6D54u;
    SET_GPR_U32(ctx, 31, 0x4E6D5Cu);
    ctx->pc = 0x4E6D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6D54u;
    // 0x4e6d58: 0xa605011c  sh          $a1, 0x11C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4E6D54u, 0x4E6D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6D5Cu;
label_4e6d5c:
    // 0x4e6d5c: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4e6d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e6d60: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e6d60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e6d64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e6d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e6d68: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e6d68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e6d6c: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4e6d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4e6d70:
    // 0x4e6d70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e6d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e6d74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e6d78: 0x22443  sra         $a0, $v0, 17
    ctx->pc = 0x4e6d78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e6d7c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4E6D7Cu;
    {
        const bool branch_taken_0x4e6d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D7Cu;
        // 0x4e6d80: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6d7c) {
            ctx->pc = 0x4E6DC8u;
            goto label_4e6dc8;
        }
    }
    ctx->pc = 0x4E6D84u;
    // 0x4e6d84: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E6D84u;
    {
        const bool branch_taken_0x4e6d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6d84) {
            ctx->pc = 0x4E6D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6D84u;
            // 0x4e6d88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6DA0u;
            goto label_4e6da0;
        }
    }
    ctx->pc = 0x4E6D8Cu;
    // 0x4e6d8c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E6D8Cu;
    {
        const bool branch_taken_0x4e6d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D8Cu;
        // 0x4e6d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6d8c) {
            ctx->pc = 0x4E6DB0u;
            goto label_4e6db0;
        }
    }
    ctx->pc = 0x4E6D94u;
    // 0x4e6d94: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4E6D94u;
    {
        const bool branch_taken_0x4e6d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D94u;
        // 0x4e6d98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6d94) {
            ctx->pc = 0x4E6DF8u;
            goto label_4e6df8;
        }
    }
    ctx->pc = 0x4E6D9Cu;
    // 0x4e6d9c: 0x0  nop
    ctx->pc = 0x4e6d9cu;
    // NOP
label_4e6da0:
    // 0x4e6da0: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4E6DA0u;
    {
        const bool branch_taken_0x4e6da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E6DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6DA0u;
        // 0x4e6da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6da0) {
            ctx->pc = 0x4E6DE0u;
            goto label_4e6de0;
        }
    }
    ctx->pc = 0x4E6DA8u;
    // 0x4e6da8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4E6DA8u;
    {
        const bool branch_taken_0x4e6da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6DA8u;
        // 0x4e6dac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6da8) {
            ctx->pc = 0x4E6DF8u;
            goto label_4e6df8;
        }
    }
    ctx->pc = 0x4E6DB0u;
label_4e6db0:
    // 0x4e6db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e6db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6db4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e6db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e6db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e6db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e6dbc: 0x8139b82  j           func_4E6E08
    ctx->pc = 0x4E6DBCu;
    ctx->pc = 0x4E6DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6DBCu;
    // 0x4e6dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6E08u;
    goto label_4e6e08;
    ctx->pc = 0x4E6DC4u;
    // 0x4e6dc4: 0x0  nop
    ctx->pc = 0x4e6dc4u;
    // NOP
label_4e6dc8:
    // 0x4e6dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e6dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6dd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e6dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e6dd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e6dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e6dd8: 0x8139b94  j           func_4E6E50
    ctx->pc = 0x4E6DD8u;
    ctx->pc = 0x4E6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6DD8u;
    // 0x4e6ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6E50u;
    goto label_4e6e50;
    ctx->pc = 0x4E6DE0u;
label_4e6de0:
    // 0x4e6de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e6de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6de4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e6de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e6de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e6de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e6dec: 0x8139bd4  j           func_4E6F50
    ctx->pc = 0x4E6DECu;
    ctx->pc = 0x4E6DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6DECu;
    // 0x4e6df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6F50u;
    goto label_4e6f50;
    ctx->pc = 0x4E6DF4u;
    // 0x4e6df4: 0x0  nop
    ctx->pc = 0x4e6df4u;
    // NOP
label_4e6df8:
    // 0x4e6df8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e6df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e6dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e6dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e6e00: 0x3e00008  jr          $ra
    ctx->pc = 0x4E6E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6E00u;
        // 0x4e6e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6E08u;
label_4e6e08:
    // 0x4e6e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e6e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e6e0c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e6e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4e6e10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e6e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e6e14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e6e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6e18: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x4e6e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x4e6e1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e6e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e6e20: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4E6E20u;
    SET_GPR_U32(ctx, 31, 0x4E6E28u);
    ctx->pc = 0x4E6E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6E20u;
    // 0x4e6e24: 0xa462fa44  sh          $v0, -0x5BC($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965828), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4E6E20u, 0x4E6E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6E28u;
label_4e6e28:
    // 0x4e6e28: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4e6e28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e6e2c: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4e6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4e6e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e6e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6e38: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e6e38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e6e3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e6e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e6e40: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e6e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e6e44: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e6e44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e6e48: 0x8139b94  j           func_4E6E50
    ctx->pc = 0x4E6E48u;
    ctx->pc = 0x4E6E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6E48u;
    // 0x4e6e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6E50u;
    goto label_4e6e50;
    ctx->pc = 0x4E6E50u;
label_4e6e50:
    // 0x4e6e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e6e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e6e54: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4e6e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e6e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e6e5c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4e6e5cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4e6e60: 0x254611d0  addiu       $a2, $t2, 0x11D0
    ctx->pc = 0x4e6e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4560));
    // 0x4e6e64: 0x24e5015e  addiu       $a1, $a3, 0x15E
    ctx->pc = 0x4e6e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 350));
    // 0x4e6e68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4e6e68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11D0u));
    // 0x4e6e6c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4e6e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4e6e70: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e6e70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e6e74: 0x24e801bc  addiu       $t0, $a3, 0x1BC
    ctx->pc = 0x4e6e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
    // 0x4e6e78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6e7c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e6e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e6e80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6e84: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e6e84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4e6e88: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e6e88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e6e8c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4e6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4e6e90: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4e6e90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e6e94: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e6e94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e6e98: 0x3062ff00  andi        $v0, $v1, 0xFF00
    ctx->pc = 0x4e6e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x4e6e9c: 0x2c630500  sltiu       $v1, $v1, 0x500
    ctx->pc = 0x4e6e9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1280) ? 1 : 0);
    // 0x4e6ea0: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x4E6EA0u;
    {
        const bool branch_taken_0x4e6ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6EA0u;
        // 0x4e6ea4: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6ea0) {
            ctx->pc = 0x4E6F38u;
            goto label_4e6f38;
        }
    }
    ctx->pc = 0x4E6EA8u;
    // 0x4e6ea8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4e6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e6eac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e6eacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e6eb0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e6eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e6eb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6eb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6ebc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e6ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4e6ec0: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4e6ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6ec4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e6ec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e6ec8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e6ecc: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x4e6eccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4e6ed0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e6ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e6ed4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e6ed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e6ed8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4e6ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4e6edc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e6edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e6ee0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e6ee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e6ee4: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4e6ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4e6ee8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e6ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e6eec: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e6eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e6ef0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4e6ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4e6ef4: 0x84e201be  lh          $v0, 0x1BE($a3)
    ctx->pc = 0x4e6ef4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 446)));
    // 0x4e6ef8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E6EF8u;
    {
        const bool branch_taken_0x4e6ef8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6EF8u;
        // 0x4e6efc: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6ef8) {
            ctx->pc = 0x4E6F08u;
            goto label_4e6f08;
        }
    }
    ctx->pc = 0x4E6F00u;
    // 0x4e6f00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4E6F00u;
    {
        const bool branch_taken_0x4e6f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6F00u;
        // 0x4e6f04: 0x24437ee0  addiu       $v1, $v0, 0x7EE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6f00) {
            ctx->pc = 0x4E6F10u;
            goto label_4e6f10;
        }
    }
    ctx->pc = 0x4E6F08u;
label_4e6f08:
    // 0x4e6f08: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4e6f0c: 0x24437ef0  addiu       $v1, $v0, 0x7EF0
    ctx->pc = 0x4e6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32496));
label_4e6f10:
    // 0x4e6f10: 0x954211d0  lhu         $v0, 0x11D0($t2)
    ctx->pc = 0x4e6f10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4560)));
    // 0x4e6f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6f18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e6f1c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e6f1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e6f20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e6f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4e6f28: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e6f28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e6f2c: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x4e6f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e6f30: 0x3e00008  jr          $ra
    ctx->pc = 0x4E6F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6F30u;
        // 0x4e6f34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6F38u;
label_4e6f38:
    // 0x4e6f38: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4e6f38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e6f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6f40: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e6f44: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4e6f44u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e6f48: 0x8139bd4  j           func_4E6F50
    ctx->pc = 0x4E6F48u;
    ctx->pc = 0x4E6F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6F48u;
    // 0x4e6f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6F50u;
    goto label_4e6f50;
    ctx->pc = 0x4E6F50u;
label_4e6f50:
    // 0x4e6f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e6f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e6f54: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e6f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e6f58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e6f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e6f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e6f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6f60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e6f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e6f64: 0x24a511dc  addiu       $a1, $a1, 0x11DC
    ctx->pc = 0x4e6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4572));
    // 0x4e6f68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e6f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e6f6c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4e6f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4e6f70: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e6f70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e6f74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11DCu));
    // 0x4e6f78: 0x24e711e0  addiu       $a3, $a3, 0x11E0
    ctx->pc = 0x4e6f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4576));
    // 0x4e6f7c: 0x86060160  lh          $a2, 0x160($s0)
    ctx->pc = 0x4e6f7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e6f80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e6f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e6f84: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e6f84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E0u));
    // 0x4e6f88: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x4e6f88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x4e6f8c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4e6f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4e6f90: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4e6f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6f94: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4e6f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4e6f98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6f9c: 0x86020162  lh          $v0, 0x162($s0)
    ctx->pc = 0x4e6f9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4e6fa0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4e6fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4e6fa4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6fa8: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4E6FA8u;
    SET_GPR_U32(ctx, 31, 0x4E6FB0u);
    ctx->pc = 0x4E6FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6FA8u;
    // 0x4e6fac: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4E6FA8u, 0x4E6FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6FB0u;
label_4e6fb0:
    // 0x4e6fb0: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4E6FB0u;
    SET_GPR_U32(ctx, 31, 0x4E6FB8u);
    ctx->pc = 0x4E6FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6FB0u;
    // 0x4e6fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4E6FB0u, 0x4E6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6FB8u;
label_4e6fb8:
    // 0x4e6fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6fbc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4E6FBCu;
    {
        const bool branch_taken_0x4e6fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6FBCu;
        // 0x4e6fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6fbc) {
            ctx->pc = 0x4E7000u;
            goto label_4e7000;
        }
    }
    ctx->pc = 0x4E6FC4u;
    // 0x4e6fc4: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4E6FC4u;
    SET_GPR_U32(ctx, 31, 0x4E6FCCu);
    ctx->pc = 0x4E6FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6FC4u;
    // 0x4e6fc8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4E6FC4u, 0x4E6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6FCCu;
label_4e6fcc:
    // 0x4e6fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6fd0: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E6FD0u;
    {
        const bool branch_taken_0x4e6fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4E6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6FD0u;
        // 0x4e6fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6fd0) {
            ctx->pc = 0x4E6FE8u;
            goto label_4e6fe8;
        }
    }
    ctx->pc = 0x4E6FD8u;
    // 0x4e6fd8: 0xc139c06  jal         func_4E7018
    ctx->pc = 0x4E6FD8u;
    SET_GPR_U32(ctx, 31, 0x4E6FE0u);
    ctx->pc = 0x4E7018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7018u, 0x4E6FD8u, 0x4E6FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6FE0u;
label_4e6fe0:
    // 0x4e6fe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4E6FE0u;
    {
        const bool branch_taken_0x4e6fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6FE0u;
        // 0x4e6fe4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6fe0) {
            ctx->pc = 0x4E7004u;
            goto label_4e7004;
        }
    }
    ctx->pc = 0x4E6FE8u;
label_4e6fe8:
    // 0x4e6fe8: 0xc128228  jal         func_4A08A0
    ctx->pc = 0x4E6FE8u;
    SET_GPR_U32(ctx, 31, 0x4E6FF0u);
    ctx->pc = 0x4A08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A08A0u, 0x4E6FE8u, 0x4E6FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6FF0u;
label_4e6ff0:
    // 0x4e6ff0: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E6FF0u;
    {
        const bool branch_taken_0x4e6ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4e6ff0) {
            ctx->pc = 0x4E6FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6FF0u;
            // 0x4e6ff4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7004u;
            goto label_4e7004;
        }
    }
    ctx->pc = 0x4E6FF8u;
    // 0x4e6ff8: 0xc139c06  jal         func_4E7018
    ctx->pc = 0x4E6FF8u;
    SET_GPR_U32(ctx, 31, 0x4E7000u);
    ctx->pc = 0x4E6FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6FF8u;
    // 0x4e6ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7018u, 0x4E6FF8u, 0x4E7000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7000u;
label_4e7000:
    // 0x4e7000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e7000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7004:
    // 0x4e7004: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e7004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7008: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e7008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e700c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E700Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E700Cu;
        // 0x4e7010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E700Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E7014u;
    // 0x4e7014: 0x0  nop
    ctx->pc = 0x4e7014u;
    // NOP
    ctx->pc = 0x4e7018u;
}
