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

// Function: sub_004AA1E0
// Address: 0x4aa1e0 - 0x4aa2e0
void sub_004AA1E0_0x4aa1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA1E0_0x4aa1e0");
#endif

    switch (ctx->pc) {
        case 0x4aa208u: goto label_4aa208;
        case 0x4aa220u: goto label_4aa220;
        case 0x4aa234u: goto label_4aa234;
        case 0x4aa288u: goto label_4aa288;
        case 0x4aa2a0u: goto label_4aa2a0;
        case 0x4aa2b4u: goto label_4aa2b4;
        default: break;
    }

    ctx->pc = 0x4aa1e0u;

    // 0x4aa1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa1e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aa1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aa1e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aa1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aa1ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa1f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aa1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aa1f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa1f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa1f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aa1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aa1fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aa1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aa200: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AA200u;
    SET_GPR_U32(ctx, 31, 0x4AA208u);
    ctx->pc = 0x4AA204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA200u;
    // 0x4aa204: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AA200u, 0x4AA208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA208u;
label_4aa208:
    // 0x4aa208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa20c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa214: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa218: 0xc12a7a0  jal         func_4A9E80
    ctx->pc = 0x4AA218u;
    SET_GPR_U32(ctx, 31, 0x4AA220u);
    ctx->pc = 0x4AA21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA218u;
    // 0x4aa21c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9E80u, 0x4AA218u, 0x4AA220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA220u;
label_4aa220:
    // 0x4aa220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa224: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa228: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa22c: 0xc12a754  jal         func_4A9D50
    ctx->pc = 0x4AA22Cu;
    SET_GPR_U32(ctx, 31, 0x4AA234u);
    ctx->pc = 0x4AA230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA22Cu;
    // 0x4aa230: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9D50u, 0x4AA22Cu, 0x4AA234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA234u;
label_4aa234:
    // 0x4aa234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa238: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa23c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aa23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa240: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa244: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aa244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa248: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aa248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa24c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aa24cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aa250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aa250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa254: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aa254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa258: 0x812a7ec  j           func_4A9FB0
    ctx->pc = 0x4AA258u;
    ctx->pc = 0x4AA25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA258u;
    // 0x4aa25c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FB0u;
    sub_004A9FB0_0x4a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x4AA260u;
    // 0x4aa260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aa264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aa268: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aa268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aa26c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa270: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aa270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aa274: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa278: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aa278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aa27c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aa27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aa280: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AA280u;
    SET_GPR_U32(ctx, 31, 0x4AA288u);
    ctx->pc = 0x4AA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA280u;
    // 0x4aa284: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AA280u, 0x4AA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA288u;
label_4aa288:
    // 0x4aa288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa28c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa294: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa298: 0xc12a7a0  jal         func_4A9E80
    ctx->pc = 0x4AA298u;
    SET_GPR_U32(ctx, 31, 0x4AA2A0u);
    ctx->pc = 0x4AA29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA298u;
    // 0x4aa29c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9E80u, 0x4AA298u, 0x4AA2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA2A0u;
label_4aa2a0:
    // 0x4aa2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa2a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa2a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa2ac: 0xc12a7ec  jal         func_4A9FB0
    ctx->pc = 0x4AA2ACu;
    SET_GPR_U32(ctx, 31, 0x4AA2B4u);
    ctx->pc = 0x4AA2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA2ACu;
    // 0x4aa2b0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9FB0u, 0x4AA2ACu, 0x4AA2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA2B4u;
label_4aa2b4:
    // 0x4aa2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa2b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa2bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aa2bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa2c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa2c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aa2c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa2c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aa2c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa2cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aa2ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aa2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aa2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa2d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aa2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa2d8: 0x812a754  j           func_4A9D50
    ctx->pc = 0x4AA2D8u;
    ctx->pc = 0x4AA2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA2D8u;
    // 0x4aa2dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9D50u;
    sub_004A9D50_0x4a9d50(rdram, ctx, runtime); return;
    ctx->pc = 0x4AA2E0u;
}
