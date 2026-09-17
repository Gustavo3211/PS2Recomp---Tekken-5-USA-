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

// Function: sub_003340F8
// Address: 0x3340f8 - 0x3341d8
void sub_003340F8_0x3340f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003340F8_0x3340f8");
#endif

    switch (ctx->pc) {
        case 0x334128u: goto label_334128;
        case 0x334130u: goto label_334130;
        case 0x33418cu: goto label_33418c;
        case 0x334198u: goto label_334198;
        case 0x3341a4u: goto label_3341a4;
        case 0x3341acu: goto label_3341ac;
        case 0x3341b4u: goto label_3341b4;
        case 0x3341bcu: goto label_3341bc;
        default: break;
    }

    ctx->pc = 0x3340f8u;

    // 0x3340f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3340f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3340fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3340fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334100: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334104: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x334104u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x334108: 0x2610ff80  addiu       $s0, $s0, -0x80
    ctx->pc = 0x334108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x33410c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334110: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x334110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x334114: 0x26120424  addiu       $s2, $s0, 0x424
    ctx->pc = 0x334114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1060));
    // 0x334118: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x334118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33411c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x334120: 0xc04066a  jal         func_1019A8
    ctx->pc = 0x334120u;
    SET_GPR_U32(ctx, 31, 0x334128u);
    ctx->pc = 0x334124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334120u;
    // 0x334124: 0x26130414  addiu       $s3, $s0, 0x414 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1044));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1019A8u, 0x334120u, 0x334128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334128u;
label_334128:
    // 0x334128: 0xc040884  jal         func_102210
    ctx->pc = 0x334128u;
    SET_GPR_U32(ctx, 31, 0x334130u);
    ctx->pc = 0x102210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102210u, 0x334128u, 0x334130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334130u;
label_334130:
    // 0x334130: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x334130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x334134: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x334134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x334138: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x334138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x33413c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x33413cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x334140: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x334140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x334144: 0xae000404  sw          $zero, 0x404($s0)
    ctx->pc = 0x334144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
    // 0x334148: 0x2407fffd  addiu       $a3, $zero, -0x3
    ctx->pc = 0x334148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x33414c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x33414cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x334150: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x334150u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x334154: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x334154u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x334158: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x334158u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x33415c: 0xae000408  sw          $zero, 0x408($s0)
    ctx->pc = 0x33415cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 0));
    // 0x334160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334164: 0xae020400  sw          $v0, 0x400($s0)
    ctx->pc = 0x334164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
    // 0x334168: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x334168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33416c: 0xde030408  ld          $v1, 0x408($s0)
    ctx->pc = 0x33416cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1032)));
    // 0x334170: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x334170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334174: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x334174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
    // 0x334178: 0x26110434  addiu       $s1, $s0, 0x434
    ctx->pc = 0x334178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1076));
    // 0x33417c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x33417cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x334180: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x334180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x334184: 0xc0cd3f6  jal         func_334FD8
    ctx->pc = 0x334184u;
    SET_GPR_U32(ctx, 31, 0x33418Cu);
    ctx->pc = 0x334188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334184u;
    // 0x334188: 0xfe030408  sd          $v1, 0x408($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 1032), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334FD8u, 0x334184u, 0x33418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33418Cu;
label_33418c:
    // 0x33418c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33418cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334190: 0xc0cd46c  jal         func_3351B0
    ctx->pc = 0x334190u;
    SET_GPR_U32(ctx, 31, 0x334198u);
    ctx->pc = 0x334194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334190u;
    // 0x334194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3351B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3351B0u, 0x334190u, 0x334198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334198u;
label_334198:
    // 0x334198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33419c: 0xc0cd456  jal         func_335158
    ctx->pc = 0x33419Cu;
    SET_GPR_U32(ctx, 31, 0x3341A4u);
    ctx->pc = 0x3341A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33419Cu;
    // 0x3341a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335158u, 0x33419Cu, 0x3341A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3341A4u;
label_3341a4:
    // 0x3341a4: 0xc0cd3b8  jal         func_334EE0
    ctx->pc = 0x3341A4u;
    SET_GPR_U32(ctx, 31, 0x3341ACu);
    ctx->pc = 0x3341A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3341A4u;
    // 0x3341a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334EE0u, 0x3341A4u, 0x3341ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3341ACu;
label_3341ac:
    // 0x3341ac: 0xc0cd418  jal         func_335060
    ctx->pc = 0x3341ACu;
    SET_GPR_U32(ctx, 31, 0x3341B4u);
    ctx->pc = 0x3341B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3341ACu;
    // 0x3341b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335060u, 0x3341ACu, 0x3341B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3341B4u;
label_3341b4:
    // 0x3341b4: 0xc0cd418  jal         func_335060
    ctx->pc = 0x3341B4u;
    SET_GPR_U32(ctx, 31, 0x3341BCu);
    ctx->pc = 0x3341B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3341B4u;
    // 0x3341b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335060u, 0x3341B4u, 0x3341BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3341BCu;
label_3341bc:
    // 0x3341bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3341bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3341c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3341c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3341c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3341c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3341c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3341c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3341cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3341ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3341d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3341D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3341D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341D0u;
        // 0x3341d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3341D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3341D8u;
}
