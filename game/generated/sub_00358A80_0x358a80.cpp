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

// Function: sub_00358A80
// Address: 0x358a80 - 0x358ac0
void sub_00358A80_0x358a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358A80_0x358a80");
#endif

    switch (ctx->pc) {
        case 0x358aa0u: goto label_358aa0;
        default: break;
    }

    ctx->pc = 0x358a80u;

    // 0x358a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x358a84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x358a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x358a88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x358a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a8c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x358a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x358a90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x358a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x358a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x358a98: 0xc0d91fe  jal         func_3647F8
    ctx->pc = 0x358A98u;
    SET_GPR_U32(ctx, 31, 0x358AA0u);
    ctx->pc = 0x358A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358A98u;
    // 0x358a9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3647F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3647F8u, 0x358A98u, 0x358AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AA0u;
label_358aa0:
    // 0x358aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x358aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358aac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x358aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x358ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358ab4: 0x80d89c6  j           func_362718
    ctx->pc = 0x358AB4u;
    ctx->pc = 0x358AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358AB4u;
    // 0x358ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362718u, 0x358AB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358ABCu;
    // 0x358abc: 0x0  nop
    ctx->pc = 0x358abcu;
    // NOP
    ctx->pc = 0x358ac0u;
}
