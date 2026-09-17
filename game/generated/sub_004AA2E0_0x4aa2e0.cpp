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

// Function: sub_004AA2E0
// Address: 0x4aa2e0 - 0x4aa3e0
void sub_004AA2E0_0x4aa2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA2E0_0x4aa2e0");
#endif

    switch (ctx->pc) {
        case 0x4aa308u: goto label_4aa308;
        case 0x4aa320u: goto label_4aa320;
        case 0x4aa334u: goto label_4aa334;
        case 0x4aa388u: goto label_4aa388;
        case 0x4aa3a0u: goto label_4aa3a0;
        case 0x4aa3b4u: goto label_4aa3b4;
        default: break;
    }

    ctx->pc = 0x4aa2e0u;

    // 0x4aa2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa2e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aa2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aa2e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aa2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aa2ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa2ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa2f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aa2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aa2f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa2f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aa2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aa2fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aa2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aa300: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AA300u;
    SET_GPR_U32(ctx, 31, 0x4AA308u);
    ctx->pc = 0x4AA304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA300u;
    // 0x4aa304: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AA300u, 0x4AA308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA308u;
label_4aa308:
    // 0x4aa308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa30c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa314: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa318: 0xc12a7ec  jal         func_4A9FB0
    ctx->pc = 0x4AA318u;
    SET_GPR_U32(ctx, 31, 0x4AA320u);
    ctx->pc = 0x4AA31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA318u;
    // 0x4aa31c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9FB0u, 0x4AA318u, 0x4AA320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA320u;
label_4aa320:
    // 0x4aa320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa324: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa328: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa32c: 0xc12a754  jal         func_4A9D50
    ctx->pc = 0x4AA32Cu;
    SET_GPR_U32(ctx, 31, 0x4AA334u);
    ctx->pc = 0x4AA330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA32Cu;
    // 0x4aa330: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9D50u, 0x4AA32Cu, 0x4AA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA334u;
label_4aa334:
    // 0x4aa334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa338: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa33c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aa33cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa340: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa344: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aa344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa348: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aa348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa34c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aa34cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aa350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aa350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa354: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aa354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa358: 0x812a7a0  j           func_4A9E80
    ctx->pc = 0x4AA358u;
    ctx->pc = 0x4AA35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA358u;
    // 0x4aa35c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    sub_004A9E80_0x4a9e80(rdram, ctx, runtime); return;
    ctx->pc = 0x4AA360u;
    // 0x4aa360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aa364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aa368: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aa368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aa36c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa36cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa370: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aa370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aa374: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa378: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aa378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aa37c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aa37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aa380: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AA380u;
    SET_GPR_U32(ctx, 31, 0x4AA388u);
    ctx->pc = 0x4AA384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA380u;
    // 0x4aa384: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AA380u, 0x4AA388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA388u;
label_4aa388:
    // 0x4aa388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa38c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa394: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa398: 0xc12a7ec  jal         func_4A9FB0
    ctx->pc = 0x4AA398u;
    SET_GPR_U32(ctx, 31, 0x4AA3A0u);
    ctx->pc = 0x4AA39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA398u;
    // 0x4aa39c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9FB0u, 0x4AA398u, 0x4AA3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA3A0u;
label_4aa3a0:
    // 0x4aa3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa3a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa3a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa3ac: 0xc12a7a0  jal         func_4A9E80
    ctx->pc = 0x4AA3ACu;
    SET_GPR_U32(ctx, 31, 0x4AA3B4u);
    ctx->pc = 0x4AA3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA3ACu;
    // 0x4aa3b0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9E80u, 0x4AA3ACu, 0x4AA3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA3B4u;
label_4aa3b4:
    // 0x4aa3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa3b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa3bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aa3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa3c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa3c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aa3c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa3c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aa3c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa3cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aa3ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aa3d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aa3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa3d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aa3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa3d8: 0x812a754  j           func_4A9D50
    ctx->pc = 0x4AA3D8u;
    ctx->pc = 0x4AA3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA3D8u;
    // 0x4aa3dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9D50u;
    sub_004A9D50_0x4a9d50(rdram, ctx, runtime); return;
    ctx->pc = 0x4AA3E0u;
}
