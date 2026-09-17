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

// Function: sub_001011A0
// Address: 0x1011a0 - 0x101250
void sub_001011A0_0x1011a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001011A0_0x1011a0");
#endif

    switch (ctx->pc) {
        case 0x1011b0u: goto label_1011b0;
        case 0x1011b8u: goto label_1011b8;
        case 0x1011c0u: goto label_1011c0;
        case 0x1011c8u: goto label_1011c8;
        case 0x1011d0u: goto label_1011d0;
        case 0x1011d8u: goto label_1011d8;
        case 0x1011e4u: goto label_1011e4;
        case 0x1011f4u: goto label_1011f4;
        case 0x101210u: goto label_101210;
        case 0x101218u: goto label_101218;
        case 0x101220u: goto label_101220;
        case 0x101228u: goto label_101228;
        case 0x101230u: goto label_101230;
        case 0x101238u: goto label_101238;
        case 0x101244u: goto label_101244;
        default: break;
    }

    ctx->pc = 0x1011a0u;

    // 0x1011a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1011a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1011a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1011a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1011a8: 0xc04019e  jal         func_100678
    ctx->pc = 0x1011A8u;
    SET_GPR_U32(ctx, 31, 0x1011B0u);
    ctx->pc = 0x100678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100678u, 0x1011A8u, 0x1011B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011B0u;
label_1011b0:
    // 0x1011b0: 0xc0401ac  jal         func_1006B0
    ctx->pc = 0x1011B0u;
    SET_GPR_U32(ctx, 31, 0x1011B8u);
    ctx->pc = 0x1006B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006B0u, 0x1011B0u, 0x1011B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011B8u;
label_1011b8:
    // 0x1011b8: 0xc0401b2  jal         func_1006C8
    ctx->pc = 0x1011B8u;
    SET_GPR_U32(ctx, 31, 0x1011C0u);
    ctx->pc = 0x1006C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006C8u, 0x1011B8u, 0x1011C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011C0u;
label_1011c0:
    // 0x1011c0: 0xc0401d0  jal         func_100740
    ctx->pc = 0x1011C0u;
    SET_GPR_U32(ctx, 31, 0x1011C8u);
    ctx->pc = 0x100740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100740u, 0x1011C0u, 0x1011C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011C8u;
label_1011c8:
    // 0x1011c8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1011C8u;
    SET_GPR_U32(ctx, 31, 0x1011D0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1011C8u, 0x1011D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011D0u;
label_1011d0:
    // 0x1011d0: 0xc0401c4  jal         func_100710
    ctx->pc = 0x1011D0u;
    SET_GPR_U32(ctx, 31, 0x1011D8u);
    ctx->pc = 0x100710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100710u, 0x1011D0u, 0x1011D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011D8u;
label_1011d8:
    // 0x1011d8: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x1011d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
    // 0x1011dc: 0xc040238  jal         func_1008E0
    ctx->pc = 0x1011DCu;
    SET_GPR_U32(ctx, 31, 0x1011E4u);
    ctx->pc = 0x1011E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1011DCu;
    // 0x1011e0: 0x2484f5c0  addiu       $a0, $a0, -0xA40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1008E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1008E0u, 0x1011DCu, 0x1011E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011E4u;
label_1011e4:
    // 0x1011e4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1011e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1011e8: 0x24a5d310  addiu       $a1, $a1, -0x2CF0
    ctx->pc = 0x1011e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955792));
    // 0x1011ec: 0xc04007a  jal         func_1001E8
    ctx->pc = 0x1011ECu;
    SET_GPR_U32(ctx, 31, 0x1011F4u);
    ctx->pc = 0x1011F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1011ECu;
    // 0x1011f0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001E8u, 0x1011ECu, 0x1011F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011F4u;
label_1011f4:
    // 0x1011f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1011f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1011f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1011F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1011FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011F8u;
        // 0x1011fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1011F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101200u;
    // 0x101200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101208: 0xc04019e  jal         func_100678
    ctx->pc = 0x101208u;
    SET_GPR_U32(ctx, 31, 0x101210u);
    ctx->pc = 0x100678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100678u, 0x101208u, 0x101210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101210u;
label_101210:
    // 0x101210: 0xc0401ac  jal         func_1006B0
    ctx->pc = 0x101210u;
    SET_GPR_U32(ctx, 31, 0x101218u);
    ctx->pc = 0x1006B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006B0u, 0x101210u, 0x101218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101218u;
label_101218:
    // 0x101218: 0xc0401b2  jal         func_1006C8
    ctx->pc = 0x101218u;
    SET_GPR_U32(ctx, 31, 0x101220u);
    ctx->pc = 0x1006C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006C8u, 0x101218u, 0x101220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101220u;
label_101220:
    // 0x101220: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x101220u;
    SET_GPR_U32(ctx, 31, 0x101228u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x101220u, 0x101228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101228u;
label_101228:
    // 0x101228: 0xc0401c4  jal         func_100710
    ctx->pc = 0x101228u;
    SET_GPR_U32(ctx, 31, 0x101230u);
    ctx->pc = 0x100710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100710u, 0x101228u, 0x101230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101230u;
label_101230:
    // 0x101230: 0xc0401ca  jal         func_100728
    ctx->pc = 0x101230u;
    SET_GPR_U32(ctx, 31, 0x101238u);
    ctx->pc = 0x100728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100728u, 0x101230u, 0x101238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101238u;
label_101238:
    // 0x101238: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x101238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
    // 0x10123c: 0xc0402d2  jal         func_100B48
    ctx->pc = 0x10123Cu;
    SET_GPR_U32(ctx, 31, 0x101244u);
    ctx->pc = 0x101240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10123Cu;
    // 0x101240: 0x2484f5c0  addiu       $a0, $a0, -0xA40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B48u, 0x10123Cu, 0x101244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101244u;
label_101244:
    // 0x101244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101248: 0x3e00008  jr          $ra
    ctx->pc = 0x101248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101248u;
        // 0x10124c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101250u;
}
