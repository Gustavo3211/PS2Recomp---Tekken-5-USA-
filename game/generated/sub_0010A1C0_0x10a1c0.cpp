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

// Function: sub_0010A1C0
// Address: 0x10a1c0 - 0x10a260
void sub_0010A1C0_0x10a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A1C0_0x10a1c0");
#endif

    switch (ctx->pc) {
        case 0x10a1f0u: goto label_10a1f0;
        case 0x10a1fcu: goto label_10a1fc;
        case 0x10a208u: goto label_10a208;
        case 0x10a214u: goto label_10a214;
        case 0x10a220u: goto label_10a220;
        case 0x10a22cu: goto label_10a22c;
        case 0x10a238u: goto label_10a238;
        case 0x10a248u: goto label_10a248;
        default: break;
    }

    ctx->pc = 0x10a1c0u;

    // 0x10a1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a1c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a1cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a1d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a1d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1d8: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x10a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x10a1dc: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x10a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
    // 0x10a1e0: 0xae030864  sw          $v1, 0x864($s0)
    ctx->pc = 0x10a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 3));
    // 0x10a1e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10a1e8: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A1E8u;
    SET_GPR_U32(ctx, 31, 0x10A1F0u);
    ctx->pc = 0x10A1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1E8u;
    // 0x10a1ec: 0xae02085c  sw          $v0, 0x85C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A1E8u, 0x10A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1F0u;
label_10a1f0:
    // 0x10a1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1f4: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A1F4u;
    SET_GPR_U32(ctx, 31, 0x10A1FCu);
    ctx->pc = 0x10A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1F4u;
    // 0x10a1f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A1F4u, 0x10A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1FCu;
label_10a1fc:
    // 0x10a1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a200: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A200u;
    SET_GPR_U32(ctx, 31, 0x10A208u);
    ctx->pc = 0x10A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A200u;
    // 0x10a204: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A200u, 0x10A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A208u;
label_10a208:
    // 0x10a208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a20c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A20Cu;
    SET_GPR_U32(ctx, 31, 0x10A214u);
    ctx->pc = 0x10A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A20Cu;
    // 0x10a210: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A20Cu, 0x10A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A214u;
label_10a214:
    // 0x10a214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a218: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A218u;
    SET_GPR_U32(ctx, 31, 0x10A220u);
    ctx->pc = 0x10A21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A218u;
    // 0x10a21c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A218u, 0x10A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A220u;
label_10a220:
    // 0x10a220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a224: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A224u;
    SET_GPR_U32(ctx, 31, 0x10A22Cu);
    ctx->pc = 0x10A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A224u;
    // 0x10a228: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A224u, 0x10A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A22Cu;
label_10a22c:
    // 0x10a22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a230: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A230u;
    SET_GPR_U32(ctx, 31, 0x10A238u);
    ctx->pc = 0x10A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A230u;
    // 0x10a234: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A230u, 0x10A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A238u;
label_10a238:
    // 0x10a238: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x10a238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x10a23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a240: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A240u;
    SET_GPR_U32(ctx, 31, 0x10A248u);
    ctx->pc = 0x10A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A240u;
    // 0x10a244: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A240u, 0x10A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A248u;
label_10a248:
    // 0x10a248: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x10a248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    // 0x10a24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a258: 0x80429fe  j           func_10A7F8
    ctx->pc = 0x10A258u;
    ctx->pc = 0x10A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A258u;
    // 0x10a25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A7F8u;
    sub_0010A7F8_0x10a7f8(rdram, ctx, runtime); return;
    ctx->pc = 0x10A260u;
}
