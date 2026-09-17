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

// Function: sub_00359FA8
// Address: 0x359fa8 - 0x35a1b8
void sub_00359FA8_0x359fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359FA8_0x359fa8");
#endif

    switch (ctx->pc) {
        case 0x359fd0u: goto label_359fd0;
        case 0x35a028u: goto label_35a028;
        case 0x35a088u: goto label_35a088;
        case 0x35a0f8u: goto label_35a0f8;
        case 0x35a178u: goto label_35a178;
        default: break;
    }

    ctx->pc = 0x359fa8u;

    // 0x359fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359fac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x359facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x359fb0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x359fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x359fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359fbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359fc0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x359fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fc4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x359fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x359fc8: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x359FC8u;
    SET_GPR_U32(ctx, 31, 0x359FD0u);
    ctx->pc = 0x359FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359FC8u;
    // 0x359fcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x359FC8u, 0x359FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359FD0u;
label_359fd0:
    // 0x359fd0: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x359fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x359fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x359fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359fdc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x359fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fe0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359fe4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x359fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359fec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x359fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359ff0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x359ff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ff4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x359ff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ff8: 0x80d9a14  j           func_366850
    ctx->pc = 0x359FF8u;
    ctx->pc = 0x359FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359FF8u;
    // 0x359ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366850u, 0x359FF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A000u;
    // 0x35a000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a004: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35a008: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35a008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a00c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35a00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a014: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a018: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35a018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a01c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35a01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35a020: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A020u;
    SET_GPR_U32(ctx, 31, 0x35A028u);
    ctx->pc = 0x35A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A020u;
    // 0x35a024: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A020u, 0x35A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A028u;
label_35a028:
    // 0x35a028: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x35a028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a02c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35a02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a034: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35a034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a038: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a03c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x35a03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a044: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35a044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a048: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x35a048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a04c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35a04cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a050: 0x80d9a14  j           func_366850
    ctx->pc = 0x35A050u;
    ctx->pc = 0x35A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A050u;
    // 0x35a054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366850u, 0x35A050u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A058u;
    // 0x35a058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35a058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35a05c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35a05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35a060: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35a060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35a064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a06c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a070: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35a070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a078: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35a078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35a07c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35a07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35a080: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A080u;
    SET_GPR_U32(ctx, 31, 0x35A088u);
    ctx->pc = 0x35A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A080u;
    // 0x35a084: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A080u, 0x35A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A088u;
label_35a088:
    // 0x35a088: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x35a088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a08c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35a08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a094: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35a094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a098: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35a098u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a09c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x35a09cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a0a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a0a4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x35a0a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a0a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a0ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35a0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a0b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35a0b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0b4: 0x80d9a14  j           func_366850
    ctx->pc = 0x35A0B4u;
    ctx->pc = 0x35A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A0B4u;
    // 0x35a0b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366850u, 0x35A0B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A0BCu;
    // 0x35a0bc: 0x0  nop
    ctx->pc = 0x35a0bcu;
    // NOP
    // 0x35a0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35a0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35a0c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35a0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35a0c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x35a0c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35a0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a0d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a0d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35a0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35a0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35a0e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35a0e8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x35a0e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35a0f0: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A0F0u;
    SET_GPR_U32(ctx, 31, 0x35A0F8u);
    ctx->pc = 0x35A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A0F0u;
    // 0x35a0f4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A0F0u, 0x35A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A0F8u;
label_35a0f8:
    // 0x35a0f8: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x35a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a0fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35a0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a104: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x35a104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a108: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35a108u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a10c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x35a10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a114: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x35a114u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a118: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a11c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x35a11cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a120: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35a120u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a124: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35a124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a128: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35a128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a12c: 0x80d9a5c  j           func_366970
    ctx->pc = 0x35A12Cu;
    ctx->pc = 0x35A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A12Cu;
    // 0x35a130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366970u, 0x35A12Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A134u;
    // 0x35a134: 0x0  nop
    ctx->pc = 0x35a134u;
    // NOP
    // 0x35a138: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35a138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35a13c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x35a13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35a140: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x35a140u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35a144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a14c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a150: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35a150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a158: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35a15c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35a15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35a160: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x35a160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a164: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x35a164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a168: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35a168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35a16c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35a170: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A170u;
    SET_GPR_U32(ctx, 31, 0x35A178u);
    ctx->pc = 0x35A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A170u;
    // 0x35a174: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A170u, 0x35A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A178u;
label_35a178:
    // 0x35a178: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x35a178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a17c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35a17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a184: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x35a184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a188: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35a188u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a18c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x35a18cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a194: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x35a194u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a198: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a19c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x35a19cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a1a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35a1a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a1a4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x35a1a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a1a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35a1a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a1ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35a1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35a1b0: 0x80d9a5c  j           func_366970
    ctx->pc = 0x35A1B0u;
    ctx->pc = 0x35A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A1B0u;
    // 0x35a1b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366970u, 0x35A1B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A1B8u;
}
