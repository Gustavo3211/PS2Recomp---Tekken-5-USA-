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

// Function: sub_002D4B38
// Address: 0x2d4b38 - 0x2d4c40
void sub_002D4B38_0x2d4b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4B38_0x2d4b38");
#endif

    switch (ctx->pc) {
        case 0x2d4b58u: goto label_2d4b58;
        case 0x2d4ba0u: goto label_2d4ba0;
        case 0x2d4bc0u: goto label_2d4bc0;
        case 0x2d4bd0u: goto label_2d4bd0;
        case 0x2d4c10u: goto label_2d4c10;
        case 0x2d4c2cu: goto label_2d4c2c;
        default: break;
    }

    ctx->pc = 0x2d4b38u;

    // 0x2d4b38: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d4b3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4b40: 0x8c438878  lw          $v1, -0x7788($v0)
    ctx->pc = 0x2d4b40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8878u));
    // 0x2d4b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4b48: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2D4B48u;
    {
        const bool branch_taken_0x2d4b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B48u;
        // 0x2d4b4c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4b48) {
            ctx->pc = 0x2D4C2Cu;
            goto label_2d4c2c;
        }
    }
    ctx->pc = 0x2D4B50u;
    // 0x2d4b50: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2D4B50u;
    SET_GPR_U32(ctx, 31, 0x2D4B58u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2D4B50u, 0x2D4B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B58u;
label_2d4b58:
    // 0x2d4b58: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2D4B58u;
    {
        const bool branch_taken_0x2d4b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4b58) {
            ctx->pc = 0x2D4B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4B58u;
            // 0x2d4b5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4C30u;
            goto label_2d4c30;
        }
    }
    ctx->pc = 0x2D4B60u;
    // 0x2d4b60: 0x8f829744  lw          $v0, -0x68BC($gp)
    ctx->pc = 0x2d4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940484)));
    // 0x2d4b64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4B64u;
    {
        const bool branch_taken_0x2d4b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B64u;
        // 0x2d4b68: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4b64) {
            ctx->pc = 0x2D4B88u;
            goto label_2d4b88;
        }
    }
    ctx->pc = 0x2D4B6Cu;
    // 0x2d4b6c: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x2d4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x2d4b70: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2d4b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2d4b74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4B74u;
    {
        const bool branch_taken_0x2d4b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B74u;
        // 0x2d4b78: 0x8c6283c0  lw          $v0, -0x7C40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4b74) {
            ctx->pc = 0x2D4B98u;
            goto label_2d4b98;
        }
    }
    ctx->pc = 0x2D4B7Cu;
    // 0x2d4b7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4B7Cu;
    {
        const bool branch_taken_0x2d4b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B7Cu;
        // 0x2d4b80: 0x38420007  xori        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4b7c) {
            ctx->pc = 0x2D4B90u;
            goto label_2d4b90;
        }
    }
    ctx->pc = 0x2D4B84u;
    // 0x2d4b84: 0x0  nop
    ctx->pc = 0x2d4b84u;
    // NOP
label_2d4b88:
    // 0x2d4b88: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x2d4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x2d4b8c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2d4b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2d4b90:
    // 0x2d4b90: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D4B90u;
    {
        const bool branch_taken_0x2d4b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4b90) {
            ctx->pc = 0x2D4BC8u;
            goto label_2d4bc8;
        }
    }
    ctx->pc = 0x2D4B98u;
label_2d4b98:
    // 0x2d4b98: 0xc09d940  jal         func_276500
    ctx->pc = 0x2D4B98u;
    SET_GPR_U32(ctx, 31, 0x2D4BA0u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x2D4B98u, 0x2D4BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4BA0u;
label_2d4ba0:
    // 0x2d4ba0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D4BA0u;
    {
        const bool branch_taken_0x2d4ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BA0u;
        // 0x2d4ba4: 0x240400f6  addiu       $a0, $zero, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ba0) {
            ctx->pc = 0x2D4BC8u;
            goto label_2d4bc8;
        }
    }
    ctx->pc = 0x2D4BA8u;
    // 0x2d4ba8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2d4ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d4bac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2d4bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4bb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4bb4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d4bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4bb8: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D4BB8u;
    SET_GPR_U32(ctx, 31, 0x2D4BC0u);
    ctx->pc = 0x2D4BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4BB8u;
    // 0x2d4bbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D4BB8u, 0x2D4BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4BC0u;
label_2d4bc0:
    // 0x2d4bc0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D4BC0u;
    {
        const bool branch_taken_0x2d4bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BC0u;
        // 0x2d4bc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4bc0) {
            ctx->pc = 0x2D4C30u;
            goto label_2d4c30;
        }
    }
    ctx->pc = 0x2D4BC8u;
label_2d4bc8:
    // 0x2d4bc8: 0xc07c47e  jal         func_1F11F8
    ctx->pc = 0x2D4BC8u;
    SET_GPR_U32(ctx, 31, 0x2D4BD0u);
    ctx->pc = 0x1F11F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F11F8u, 0x2D4BC8u, 0x2D4BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4BD0u;
label_2d4bd0:
    // 0x2d4bd0: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2d4bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2d4bd4: 0x28430064  slti        $v1, $v0, 0x64
    ctx->pc = 0x2d4bd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2d4bd8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2d4bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d4bdc: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2d4bdcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2d4be0: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d4be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d4be4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x2d4be4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d4be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d4be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4bec: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2d4becu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2d4bf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4bf4: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x2d4bf4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d4bf8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d4bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4bfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d4bfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c00: 0x1012  mflo        $v0
    ctx->pc = 0x2d4c00u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2d4c04: 0x8010  mfhi        $s0
    ctx->pc = 0x2d4c04u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2d4c08: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D4C08u;
    SET_GPR_U32(ctx, 31, 0x2D4C10u);
    ctx->pc = 0x2D4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C08u;
    // 0x2d4c0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D4C08u, 0x2D4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C10u;
label_2d4c10:
    // 0x2d4c10: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d4c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d4c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d4c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4c1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4c20: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d4c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4c24: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D4C24u;
    SET_GPR_U32(ctx, 31, 0x2D4C2Cu);
    ctx->pc = 0x2D4C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C24u;
    // 0x2d4c28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D4C24u, 0x2D4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C2Cu;
label_2d4c2c:
    // 0x2d4c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4c30:
    // 0x2d4c30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d4c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4c34: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C34u;
        // 0x2d4c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4C3Cu;
    // 0x2d4c3c: 0x0  nop
    ctx->pc = 0x2d4c3cu;
    // NOP
    ctx->pc = 0x2d4c40u;
}
