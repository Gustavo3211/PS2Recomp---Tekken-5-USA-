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

// Function: sub_00230C78
// Address: 0x230c78 - 0x230f70
void sub_00230C78_0x230c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230C78_0x230c78");
#endif

    switch (ctx->pc) {
        case 0x230cd8u: goto label_230cd8;
        case 0x230ce4u: goto label_230ce4;
        case 0x230cf0u: goto label_230cf0;
        case 0x230cfcu: goto label_230cfc;
        case 0x230d0cu: goto label_230d0c;
        case 0x230d1cu: goto label_230d1c;
        case 0x230d2cu: goto label_230d2c;
        case 0x230d48u: goto label_230d48;
        case 0x230dbcu: goto label_230dbc;
        case 0x230dc8u: goto label_230dc8;
        case 0x230dd0u: goto label_230dd0;
        case 0x230e14u: goto label_230e14;
        case 0x230e20u: goto label_230e20;
        case 0x230e34u: goto label_230e34;
        case 0x230e40u: goto label_230e40;
        case 0x230e4cu: goto label_230e4c;
        case 0x230e94u: goto label_230e94;
        case 0x230ea4u: goto label_230ea4;
        case 0x230ec4u: goto label_230ec4;
        case 0x230ee4u: goto label_230ee4;
        case 0x230ef4u: goto label_230ef4;
        case 0x230f00u: goto label_230f00;
        case 0x230f2cu: goto label_230f2c;
        case 0x230f38u: goto label_230f38;
        default: break;
    }

    ctx->pc = 0x230c78u;

    // 0x230c78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x230c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x230c7c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x230c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x230c80: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x230c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x230c84: 0x24558858  addiu       $s5, $v0, -0x77A8
    ctx->pc = 0x230c84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x230c88: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x230c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x230c8c: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x230c8cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x230c90: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x230c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x230c94: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x230c94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x230c98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x230c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x230c9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x230c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x230ca0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x230ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ca4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x230ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x230ca8: 0x26d3dda0  addiu       $s3, $s6, -0x2260
    ctx->pc = 0x230ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294958496));
    // 0x230cac: 0x8c7083c0  lw          $s0, -0x7C40($v1)
    ctx->pc = 0x230cacu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x230cb0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x230cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x230cb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x230cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x230cb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x230cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cbc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x230cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x230cc0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x230cc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230cc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ccc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x230cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x230cd0: 0xc08da80  jal         func_236A00
    ctx->pc = 0x230CD0u;
    SET_GPR_U32(ctx, 31, 0x230CD8u);
    ctx->pc = 0x230CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CD0u;
    // 0x230cd4: 0x282800a  movz        $s0, $s4, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A00u, 0x230CD0u, 0x230CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CD8u;
label_230cd8:
    // 0x230cd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cdc: 0xc08da80  jal         func_236A00
    ctx->pc = 0x230CDCu;
    SET_GPR_U32(ctx, 31, 0x230CE4u);
    ctx->pc = 0x230CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CDCu;
    // 0x230ce0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A00u, 0x230CDCu, 0x230CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CE4u;
label_230ce4:
    // 0x230ce4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ce8: 0xc08da20  jal         func_236880
    ctx->pc = 0x230CE8u;
    SET_GPR_U32(ctx, 31, 0x230CF0u);
    ctx->pc = 0x230CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CE8u;
    // 0x230cec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236880u, 0x230CE8u, 0x230CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CF0u;
label_230cf0:
    // 0x230cf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cf4: 0xc08da20  jal         func_236880
    ctx->pc = 0x230CF4u;
    SET_GPR_U32(ctx, 31, 0x230CFCu);
    ctx->pc = 0x230CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CF4u;
    // 0x230cf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236880u, 0x230CF4u, 0x230CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CFCu;
label_230cfc:
    // 0x230cfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d04: 0xc08dab4  jal         func_236AD0
    ctx->pc = 0x230D04u;
    SET_GPR_U32(ctx, 31, 0x230D0Cu);
    ctx->pc = 0x230D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D04u;
    // 0x230d08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD0u, 0x230D04u, 0x230D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D0Cu;
label_230d0c:
    // 0x230d0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d14: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x230D14u;
    SET_GPR_U32(ctx, 31, 0x230D1Cu);
    ctx->pc = 0x230D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D14u;
    // 0x230d18: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x230D14u, 0x230D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D1Cu;
label_230d1c:
    // 0x230d1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d24: 0xc08dae6  jal         func_236B98
    ctx->pc = 0x230D24u;
    SET_GPR_U32(ctx, 31, 0x230D2Cu);
    ctx->pc = 0x230D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D24u;
    // 0x230d28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B98u, 0x230D24u, 0x230D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D2Cu;
label_230d2c:
    // 0x230d2c: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x230d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x230d30: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x230D30u;
    {
        const bool branch_taken_0x230d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D30u;
        // 0x230d34: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d30) {
            ctx->pc = 0x230EF8u;
            goto label_230ef8;
        }
    }
    ctx->pc = 0x230D38u;
    // 0x230d38: 0x600006f  bltz        $s0, . + 4 + (0x6F << 2)
    ctx->pc = 0x230D38u;
    {
        const bool branch_taken_0x230d38 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x230d38) {
            ctx->pc = 0x230EF8u;
            goto label_230ef8;
        }
    }
    ctx->pc = 0x230D40u;
    // 0x230d40: 0xc08c252  jal         func_230948
    ctx->pc = 0x230D40u;
    SET_GPR_U32(ctx, 31, 0x230D48u);
    ctx->pc = 0x230948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230948u, 0x230D40u, 0x230D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D48u;
label_230d48:
    // 0x230d48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x230d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d4c: 0x1074002e  beq         $v1, $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x230D4Cu;
    {
        const bool branch_taken_0x230d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x230D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D4Cu;
        // 0x230d50: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d4c) {
            ctx->pc = 0x230E08u;
            goto label_230e08;
        }
    }
    ctx->pc = 0x230D54u;
    // 0x230d54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230D54u;
    {
        const bool branch_taken_0x230d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D54u;
        // 0x230d58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d54) {
            ctx->pc = 0x230D70u;
            goto label_230d70;
        }
    }
    ctx->pc = 0x230D5Cu;
    // 0x230d5c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x230D5Cu;
    {
        const bool branch_taken_0x230d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D5Cu;
        // 0x230d60: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d5c) {
            ctx->pc = 0x230D88u;
            goto label_230d88;
        }
    }
    ctx->pc = 0x230D64u;
    // 0x230d64: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x230D64u;
    {
        const bool branch_taken_0x230d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230d64) {
            ctx->pc = 0x230EF8u;
            goto label_230ef8;
        }
    }
    ctx->pc = 0x230D6Cu;
    // 0x230d6c: 0x0  nop
    ctx->pc = 0x230d6cu;
    // NOP
label_230d70:
    // 0x230d70: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x230D70u;
    {
        const bool branch_taken_0x230d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x230D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D70u;
        // 0x230d74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d70) {
            ctx->pc = 0x230E28u;
            goto label_230e28;
        }
    }
    ctx->pc = 0x230D78u;
    // 0x230d78: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x230D78u;
    {
        const bool branch_taken_0x230d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x230D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D78u;
        // 0x230d7c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d78) {
            ctx->pc = 0x230EB0u;
            goto label_230eb0;
        }
    }
    ctx->pc = 0x230D80u;
    // 0x230d80: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x230D80u;
    {
        const bool branch_taken_0x230d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230d80) {
            ctx->pc = 0x230EF8u;
            goto label_230ef8;
        }
    }
    ctx->pc = 0x230D88u;
label_230d88:
    // 0x230d88: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x230d88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x230d8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x230d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x230d90: 0x2610d2d0  addiu       $s0, $s0, -0x2D30
    ctx->pc = 0x230d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955728));
    // 0x230d94: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x230d94u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x15D2D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x15D2D0u, _value); } while (0);
    // 0x230d98: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x230d98u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x15D2E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x15D2E0u, _value); } while (0);
    // 0x230d9c: 0x7e000020  sq          $zero, 0x20($s0)
    ctx->pc = 0x230d9cu;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x15D2F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x15D2F0u, _value); } while (0);
    // 0x230da0: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x230da0u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x15D300u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x15D300u, _value); } while (0);
    // 0x230da4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x230da4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x15D2F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D2F8u, _value); } while (0);
    // 0x230da8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230dac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x230dacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x15D2D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D2D0u, _value); } while (0);
    // 0x230db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230db4: 0xc08c280  jal         func_230A00
    ctx->pc = 0x230DB4u;
    SET_GPR_U32(ctx, 31, 0x230DBCu);
    ctx->pc = 0x230DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DB4u;
    // 0x230db8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230A00u, 0x230DB4u, 0x230DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DBCu;
label_230dbc:
    // 0x230dbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230dc0: 0xc08e05e  jal         func_238178
    ctx->pc = 0x230DC0u;
    SET_GPR_U32(ctx, 31, 0x230DC8u);
    ctx->pc = 0x230DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DC0u;
    // 0x230dc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238178u, 0x230DC0u, 0x230DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DC8u;
label_230dc8:
    // 0x230dc8: 0xc08c24e  jal         func_230938
    ctx->pc = 0x230DC8u;
    SET_GPR_U32(ctx, 31, 0x230DD0u);
    ctx->pc = 0x230DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DC8u;
    // 0x230dcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230938u, 0x230DC8u, 0x230DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DD0u;
label_230dd0:
    // 0x230dd0: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x230dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x230dd4: 0x2442cf90  addiu       $v0, $v0, -0x3070
    ctx->pc = 0x230dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954896));
    // 0x230dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230ddc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x230ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x230de0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x230de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230de4: 0x244301a0  addiu       $v1, $v0, 0x1A0
    ctx->pc = 0x230de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x230de8: 0xe4600148  swc1        $f0, 0x148($v1)
    ctx->pc = 0x230de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x15D278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D278u, _value); } while (0); }
    // 0x230dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230df0: 0xae140040  sw          $s4, 0x40($s0)
    ctx->pc = 0x230df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 20));
    // 0x230df4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230df8: 0xe4610144  swc1        $f1, 0x144($v1)
    ctx->pc = 0x230df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x15D274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D274u, _value); } while (0); }
    // 0x230dfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x230dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230e00: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x230E00u;
    {
        const bool branch_taken_0x230e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E00u;
        // 0x230e04: 0xe4400140  swc1        $f0, 0x140($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e00) {
            ctx->pc = 0x230E84u;
            goto label_230e84;
        }
    }
    ctx->pc = 0x230E08u;
label_230e08:
    // 0x230e08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e0c: 0xc08c280  jal         func_230A00
    ctx->pc = 0x230E0Cu;
    SET_GPR_U32(ctx, 31, 0x230E14u);
    ctx->pc = 0x230E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E0Cu;
    // 0x230e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230A00u, 0x230E0Cu, 0x230E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E14u;
label_230e14:
    // 0x230e14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e18: 0xc08e05e  jal         func_238178
    ctx->pc = 0x230E18u;
    SET_GPR_U32(ctx, 31, 0x230E20u);
    ctx->pc = 0x230E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E18u;
    // 0x230e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238178u, 0x230E18u, 0x230E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E20u;
label_230e20:
    // 0x230e20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x230E20u;
    {
        const bool branch_taken_0x230e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E20u;
        // 0x230e24: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e20) {
            ctx->pc = 0x230E44u;
            goto label_230e44;
        }
    }
    ctx->pc = 0x230E28u;
label_230e28:
    // 0x230e28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e2c: 0xc08c280  jal         func_230A00
    ctx->pc = 0x230E2Cu;
    SET_GPR_U32(ctx, 31, 0x230E34u);
    ctx->pc = 0x230E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E2Cu;
    // 0x230e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230A00u, 0x230E2Cu, 0x230E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E34u;
label_230e34:
    // 0x230e34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e38: 0xc08e05e  jal         func_238178
    ctx->pc = 0x230E38u;
    SET_GPR_U32(ctx, 31, 0x230E40u);
    ctx->pc = 0x230E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E38u;
    // 0x230e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238178u, 0x230E38u, 0x230E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E40u;
label_230e40:
    // 0x230e40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x230e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_230e44:
    // 0x230e44: 0xc08c24e  jal         func_230938
    ctx->pc = 0x230E44u;
    SET_GPR_U32(ctx, 31, 0x230E4Cu);
    ctx->pc = 0x230938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230938u, 0x230E44u, 0x230E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E4Cu;
label_230e4c:
    // 0x230e4c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x230e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x230e50: 0x2442cf90  addiu       $v0, $v0, -0x3070
    ctx->pc = 0x230e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954896));
    // 0x230e54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230e58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x230e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x230e5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x230e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230e60: 0x244301a0  addiu       $v1, $v0, 0x1A0
    ctx->pc = 0x230e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x230e64: 0x3c070016  lui         $a3, 0x16
    ctx->pc = 0x230e64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)22 << 16));
    // 0x230e68: 0xe4600148  swc1        $f0, 0x148($v1)
    ctx->pc = 0x230e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x15D278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D278u, _value); } while (0); }
    // 0x230e6c: 0xacf4d310  sw          $s4, -0x2CF0($a3)
    ctx->pc = 0x230e6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x15D310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D310u, _value); } while (0);
    // 0x230e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e74: 0xe4610144  swc1        $f1, 0x144($v1)
    ctx->pc = 0x230e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x15D274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D274u, _value); } while (0); }
    // 0x230e78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e7c: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x230e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x15D0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D0D0u, _value); } while (0); }
    // 0x230e80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x230e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230e84:
    // 0x230e84: 0xe4410144  swc1        $f1, 0x144($v0)
    ctx->pc = 0x230e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x230e88: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x230e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
    // 0x230e8c: 0xc08c75a  jal         func_231D68
    ctx->pc = 0x230E8Cu;
    SET_GPR_U32(ctx, 31, 0x230E94u);
    ctx->pc = 0x230E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E8Cu;
    // 0x230e90: 0xe4600140  swc1        $f0, 0x140($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x231D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D68u, 0x230E8Cu, 0x230E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E94u;
label_230e94:
    // 0x230e94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e9c: 0xc08dd20  jal         func_237480
    ctx->pc = 0x230E9Cu;
    SET_GPR_U32(ctx, 31, 0x230EA4u);
    ctx->pc = 0x230EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E9Cu;
    // 0x230ea0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237480u, 0x230E9Cu, 0x230EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EA4u;
label_230ea4:
    // 0x230ea4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x230EA4u;
    {
        const bool branch_taken_0x230ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EA4u;
        // 0x230ea8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ea4) {
            ctx->pc = 0x230EF8u;
            goto label_230ef8;
        }
    }
    ctx->pc = 0x230EACu;
    // 0x230eac: 0x0  nop
    ctx->pc = 0x230eacu;
    // NOP
label_230eb0:
    // 0x230eb0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x230eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x230eb4: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230EB4u;
    {
        const bool branch_taken_0x230eb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x230eb4) {
            ctx->pc = 0x230EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230EB4u;
            // 0x230eb8: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230ED0u;
            goto label_230ed0;
        }
    }
    ctx->pc = 0x230EBCu;
    // 0x230ebc: 0xc0c230a  jal         func_308C28
    ctx->pc = 0x230EBCu;
    SET_GPR_U32(ctx, 31, 0x230EC4u);
    ctx->pc = 0x230EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EBCu;
    // 0x230ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308C28u, 0x230EBCu, 0x230EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EC4u;
label_230ec4:
    // 0x230ec4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x230EC4u;
    {
        const bool branch_taken_0x230ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EC4u;
        // 0x230ec8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ec4) {
            ctx->pc = 0x230EF8u;
            goto label_230ef8;
        }
    }
    ctx->pc = 0x230ECCu;
    // 0x230ecc: 0x0  nop
    ctx->pc = 0x230eccu;
    // NOP
label_230ed0:
    // 0x230ed0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230ED0u;
    {
        const bool branch_taken_0x230ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230ED0u;
        // 0x230ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ed0) {
            ctx->pc = 0x230EE4u;
            goto label_230ee4;
        }
    }
    ctx->pc = 0x230ED8u;
    // 0x230ed8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230edc: 0xc08c75a  jal         func_231D68
    ctx->pc = 0x230EDCu;
    SET_GPR_U32(ctx, 31, 0x230EE4u);
    ctx->pc = 0x230EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EDCu;
    // 0x230ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D68u, 0x230EDCu, 0x230EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EE4u;
label_230ee4:
    // 0x230ee4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ee8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230eec: 0xc08dd20  jal         func_237480
    ctx->pc = 0x230EECu;
    SET_GPR_U32(ctx, 31, 0x230EF4u);
    ctx->pc = 0x230EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EECu;
    // 0x230ef0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237480u, 0x230EECu, 0x230EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EF4u;
label_230ef4:
    // 0x230ef4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x230ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_230ef8:
    // 0x230ef8: 0xc08215c  jal         func_208570
    ctx->pc = 0x230EF8u;
    SET_GPR_U32(ctx, 31, 0x230F00u);
    ctx->pc = 0x230EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EF8u;
    // 0x230efc: 0x8c50e020  lw          $s0, -0x1FE0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x230EF8u, 0x230F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F00u;
label_230f00:
    // 0x230f00: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x230f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x230f04: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x230f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x230f08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230F08u;
    {
        const bool branch_taken_0x230f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F08u;
        // 0x230f0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f08) {
            ctx->pc = 0x230F1Cu;
            goto label_230f1c;
        }
    }
    ctx->pc = 0x230F10u;
    // 0x230f10: 0x2602fff7  addiu       $v0, $s0, -0x9
    ctx->pc = 0x230f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967287));
    // 0x230f14: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x230f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x230f18: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x230f18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_230f1c:
    // 0x230f1c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x230F1Cu;
    {
        const bool branch_taken_0x230f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F1Cu;
        // 0x230f20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f1c) {
            ctx->pc = 0x230F48u;
            goto label_230f48;
        }
    }
    ctx->pc = 0x230F24u;
    // 0x230f24: 0xc08c1e6  jal         func_230798
    ctx->pc = 0x230F24u;
    SET_GPR_U32(ctx, 31, 0x230F2Cu);
    ctx->pc = 0x230F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F24u;
    // 0x230f28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230798u, 0x230F24u, 0x230F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F2Cu;
label_230f2c:
    // 0x230f2c: 0x26c4dda0  addiu       $a0, $s6, -0x2260
    ctx->pc = 0x230f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294958496));
    // 0x230f30: 0xc08db6a  jal         func_236DA8
    ctx->pc = 0x230F30u;
    SET_GPR_U32(ctx, 31, 0x230F38u);
    ctx->pc = 0x230F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F30u;
    // 0x230f34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236DA8u, 0x230F30u, 0x230F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F38u;
label_230f38:
    // 0x230f38: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x230f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x230f3c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x230f3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230f40: 0x2442cf90  addiu       $v0, $v0, -0x3070
    ctx->pc = 0x230f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954896));
    // 0x230f44: 0x7c430100  sq          $v1, 0x100($v0)
    ctx->pc = 0x230f44u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x15D090u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x15D090u, _value); } while (0);
label_230f48:
    // 0x230f48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x230f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230f4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x230f4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230f50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x230f50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230f54: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x230f54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x230f58: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x230f58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230f5c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x230f5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x230f60: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x230f60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230f64: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x230f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x230f68: 0x3e00008  jr          $ra
    ctx->pc = 0x230F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F68u;
        // 0x230f6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230F70u;
}
