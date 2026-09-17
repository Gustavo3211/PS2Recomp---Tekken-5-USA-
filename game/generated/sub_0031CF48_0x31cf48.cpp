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

// Function: sub_0031CF48
// Address: 0x31cf48 - 0x31cfc8
void sub_0031CF48_0x31cf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CF48_0x31cf48");
#endif

    switch (ctx->pc) {
        case 0x31cf70u: goto label_31cf70;
        case 0x31cf84u: goto label_31cf84;
        case 0x31cf90u: goto label_31cf90;
        case 0x31cfa0u: goto label_31cfa0;
        default: break;
    }

    ctx->pc = 0x31cf48u;

    // 0x31cf48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31cf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31cf4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31cf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31cf50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31cf50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31cf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31cf58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31cf58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31cf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31cf60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31cf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x31cf64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31cf68: 0xc0c725a  jal         func_31C968
    ctx->pc = 0x31CF68u;
    SET_GPR_U32(ctx, 31, 0x31CF70u);
    ctx->pc = 0x31CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF68u;
    // 0x31cf6c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C968u, 0x31CF68u, 0x31CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF70u;
label_31cf70:
    // 0x31cf70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31cf70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31cf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf7c: 0xc0c7250  jal         func_31C940
    ctx->pc = 0x31CF7Cu;
    SET_GPR_U32(ctx, 31, 0x31CF84u);
    ctx->pc = 0x31CF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF7Cu;
    // 0x31cf80: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C940u, 0x31CF7Cu, 0x31CF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF84u;
label_31cf84:
    // 0x31cf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf88: 0xc0c73f2  jal         func_31CFC8
    ctx->pc = 0x31CF88u;
    SET_GPR_U32(ctx, 31, 0x31CF90u);
    ctx->pc = 0x31CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF88u;
    // 0x31cf8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFC8u, 0x31CF88u, 0x31CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF90u;
label_31cf90:
    // 0x31cf90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31cf94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf98: 0xc0c7420  jal         func_31D080
    ctx->pc = 0x31CF98u;
    SET_GPR_U32(ctx, 31, 0x31CFA0u);
    ctx->pc = 0x31CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF98u;
    // 0x31cf9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D080u, 0x31CF98u, 0x31CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CFA0u;
label_31cfa0:
    // 0x31cfa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cfa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31cfa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31cfa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31cfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cfac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31cfacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cfb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31cfb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31cfb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31cfb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31cfb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31cfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31cfbc: 0x80c72f4  j           func_31CBD0
    ctx->pc = 0x31CFBCu;
    ctx->pc = 0x31CFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CFBCu;
    // 0x31cfc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CBD0u, 0x31CFBCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31CFC4u;
    // 0x31cfc4: 0x0  nop
    ctx->pc = 0x31cfc4u;
    // NOP
    ctx->pc = 0x31cfc8u;
}
