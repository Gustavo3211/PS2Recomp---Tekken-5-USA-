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

// Function: sub_0035A1B8
// Address: 0x35a1b8 - 0x35a260
void sub_0035A1B8_0x35a1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A1B8_0x35a1b8");
#endif

    switch (ctx->pc) {
        case 0x35a1d0u: goto label_35a1d0;
        case 0x35a200u: goto label_35a200;
        case 0x35a240u: goto label_35a240;
        default: break;
    }

    ctx->pc = 0x35a1b8u;

    // 0x35a1b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a1bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a1c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a1c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35a1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35a1c8: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A1C8u;
    SET_GPR_U32(ctx, 31, 0x35A1D0u);
    ctx->pc = 0x35A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A1C8u;
    // 0x35a1cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A1C8u, 0x35A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A1D0u;
label_35a1d0:
    // 0x35a1d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35a1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a1d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35a1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a1d8: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x35a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a1dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a1e0: 0x80d9aa8  j           func_366AA0
    ctx->pc = 0x35A1E0u;
    ctx->pc = 0x35A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A1E0u;
    // 0x35a1e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366AA0u, 0x35A1E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A1E8u;
    // 0x35a1e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a1ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a1f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35a1f8: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A1F8u;
    SET_GPR_U32(ctx, 31, 0x35A200u);
    ctx->pc = 0x35A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A1F8u;
    // 0x35a1fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A1F8u, 0x35A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A200u;
label_35a200:
    // 0x35a200: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35a200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35a204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a208: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x35a208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a20c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35a20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a214: 0x80d9ae0  j           func_366B80
    ctx->pc = 0x35A214u;
    ctx->pc = 0x35A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A214u;
    // 0x35a218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366B80u, 0x35A214u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A21Cu;
    // 0x35a21c: 0x0  nop
    ctx->pc = 0x35a21cu;
    // NOP
    // 0x35a220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a228: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a22c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a238: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A238u;
    SET_GPR_U32(ctx, 31, 0x35A240u);
    ctx->pc = 0x35A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A238u;
    // 0x35a23c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A238u, 0x35A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A240u;
label_35a240:
    // 0x35a240: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x35a240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35a244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a24c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35a24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a258: 0x80d9ae0  j           func_366B80
    ctx->pc = 0x35A258u;
    ctx->pc = 0x35A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A258u;
    // 0x35a25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366B80u, 0x35A258u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A260u;
}
