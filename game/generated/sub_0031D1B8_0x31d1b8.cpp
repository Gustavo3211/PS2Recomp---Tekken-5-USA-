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

// Function: sub_0031D1B8
// Address: 0x31d1b8 - 0x31d210
void sub_0031D1B8_0x31d1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D1B8_0x31d1b8");
#endif

    switch (ctx->pc) {
        case 0x31d1dcu: goto label_31d1dc;
        case 0x31d1f0u: goto label_31d1f0;
        default: break;
    }

    ctx->pc = 0x31d1b8u;

    // 0x31d1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31d1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31d1bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31d1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31d1c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31d1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31d1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31d1c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31d1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31d1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31d1d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31d1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31d1d4: 0xc0c725a  jal         func_31C968
    ctx->pc = 0x31D1D4u;
    SET_GPR_U32(ctx, 31, 0x31D1DCu);
    ctx->pc = 0x31D1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D1D4u;
    // 0x31d1d8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C968u, 0x31D1D4u, 0x31D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1DCu;
label_31d1dc:
    // 0x31d1dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31d1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1e8: 0xc0c7484  jal         func_31D210
    ctx->pc = 0x31D1E8u;
    SET_GPR_U32(ctx, 31, 0x31D1F0u);
    ctx->pc = 0x31D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D1E8u;
    // 0x31d1ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D210u, 0x31D1E8u, 0x31D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1F0u;
label_31d1f0:
    // 0x31d1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31d1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31d1f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31d1fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d200: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31d200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d204: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31d204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31d208: 0x80c72f4  j           func_31CBD0
    ctx->pc = 0x31D208u;
    ctx->pc = 0x31D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D208u;
    // 0x31d20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CBD0u, 0x31D208u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31D210u;
}
