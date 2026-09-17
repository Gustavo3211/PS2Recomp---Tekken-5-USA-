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

// Function: sub_00309B70
// Address: 0x309b70 - 0x309bb8
void sub_00309B70_0x309b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309B70_0x309b70");
#endif

    switch (ctx->pc) {
        case 0x309b8cu: goto label_309b8c;
        case 0x309b98u: goto label_309b98;
        default: break;
    }

    ctx->pc = 0x309b70u;

    // 0x309b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x309b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x309b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309b78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x309b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x309b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x309b80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x309b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x309b84: 0xc0c27e8  jal         func_309FA0
    ctx->pc = 0x309B84u;
    SET_GPR_U32(ctx, 31, 0x309B8Cu);
    ctx->pc = 0x309B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B84u;
    // 0x309b88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309FA0u, 0x309B84u, 0x309B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B8Cu;
label_309b8c:
    // 0x309b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b90: 0xc0c292c  jal         func_30A4B0
    ctx->pc = 0x309B90u;
    SET_GPR_U32(ctx, 31, 0x309B98u);
    ctx->pc = 0x309B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B90u;
    // 0x309b94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4B0u, 0x309B90u, 0x309B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B98u;
label_309b98:
    // 0x309b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x309b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ba0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x309ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x309ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309ba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x309ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309bac: 0x80c2a38  j           func_30A8E0
    ctx->pc = 0x309BACu;
    ctx->pc = 0x309BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309BACu;
    // 0x309bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8E0u, 0x309BACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x309BB4u;
    // 0x309bb4: 0x0  nop
    ctx->pc = 0x309bb4u;
    // NOP
    ctx->pc = 0x309bb8u;
}
