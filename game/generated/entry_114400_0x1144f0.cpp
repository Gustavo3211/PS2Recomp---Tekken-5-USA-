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

// Function: entry_114400
// Address: 0x114400 - 0x1144f0
void entry_114400_0x1144f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_114400_0x1144f0");
#endif

    switch (ctx->pc) {
        case 0x11441cu: goto label_11441c;
        case 0x114434u: goto label_114434;
        case 0x11443cu: goto label_11443c;
        case 0x11444cu: goto label_11444c;
        case 0x114460u: goto label_114460;
        case 0x114470u: goto label_114470;
        case 0x1144b4u: goto label_1144b4;
        case 0x1144c4u: goto label_1144c4;
        case 0x1144d8u: goto label_1144d8;
        default: break;
    }

    ctx->pc = 0x114400u;

    // 0x114400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x114400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x114404: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x114404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x114408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11440c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11440cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x114410: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x114410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x114414: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x114414u;
    SET_GPR_U32(ctx, 31, 0x11441Cu);
    ctx->pc = 0x114418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114414u;
    // 0x114418: 0x240400fd  addiu       $a0, $zero, 0xFD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x114414u, 0x11441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11441Cu;
label_11441c:
    // 0x11441c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11441cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x114420: 0x8c621194  lw          $v0, 0x1194($v1)
    ctx->pc = 0x114420u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x131194u));
    // 0x114424: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114424u;
    {
        const bool branch_taken_0x114424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114424) {
            ctx->pc = 0x114434u;
            goto label_114434;
        }
    }
    ctx->pc = 0x11442Cu;
    // 0x11442c: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x11442Cu;
    SET_GPR_U32(ctx, 31, 0x114434u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x11442Cu, 0x114434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114434u;
label_114434:
    // 0x114434: 0xc04507e  jal         func_1141F8
    ctx->pc = 0x114434u;
    SET_GPR_U32(ctx, 31, 0x11443Cu);
    ctx->pc = 0x1141F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1141F8u, 0x114434u, 0x11443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11443Cu;
label_11443c:
    // 0x11443c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11443Cu;
    {
        const bool branch_taken_0x11443c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11443c) {
            ctx->pc = 0x114458u;
            goto label_114458;
        }
    }
    ctx->pc = 0x114444u;
    // 0x114444: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x114444u;
    SET_GPR_U32(ctx, 31, 0x11444Cu);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x114444u, 0x11444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11444Cu;
label_11444c:
    // 0x11444c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x11444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x114450: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x114450u;
    {
        const bool branch_taken_0x114450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114450u;
        // 0x114454: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114450) {
            ctx->pc = 0x1144DCu;
            goto label_1144dc;
        }
    }
    ctx->pc = 0x114458u;
label_114458:
    // 0x114458: 0xc044e14  jal         func_113850
    ctx->pc = 0x114458u;
    SET_GPR_U32(ctx, 31, 0x114460u);
    ctx->pc = 0x113850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113850u, 0x114458u, 0x114460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114460u;
label_114460:
    // 0x114460: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114460u;
    {
        const bool branch_taken_0x114460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114460u;
        // 0x114464: 0x3c07001f  lui         $a3, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114460) {
            ctx->pc = 0x114478u;
            goto label_114478;
        }
    }
    ctx->pc = 0x114468u;
    // 0x114468: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x114468u;
    SET_GPR_U32(ctx, 31, 0x114470u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x114468u, 0x114470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114470u;
label_114470:
    // 0x114470: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x114470u;
    {
        const bool branch_taken_0x114470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114470u;
        // 0x114474: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114470) {
            ctx->pc = 0x1144DCu;
            goto label_1144dc;
        }
    }
    ctx->pc = 0x114478u;
label_114478:
    // 0x114478: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x114478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11447c: 0x2451af80  addiu       $s1, $v0, -0x5080
    ctx->pc = 0x11447cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x114480: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x114480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x114484: 0xacf0a340  sw          $s0, -0x5CC0($a3)
    ctx->pc = 0x114484u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943552), GPR_U32(ctx, 16));
    // 0x114488: 0x2484ba40  addiu       $a0, $a0, -0x45C0
    ctx->pc = 0x114488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949440));
    // 0x11448c: 0x24e7a340  addiu       $a3, $a3, -0x5CC0
    ctx->pc = 0x11448cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943552));
    // 0x114490: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114494: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x114494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x114498: 0x240500fd  addiu       $a1, $zero, 0xFD
    ctx->pc = 0x114498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x11449c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11449cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144a0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1144a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1144a4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1144a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144a8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1144a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1144ac: 0xc044e56  jal         func_113958
    ctx->pc = 0x1144ACu;
    SET_GPR_U32(ctx, 31, 0x1144B4u);
    ctx->pc = 0x1144B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1144ACu;
    // 0x1144b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x1144ACu, 0x1144B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144B4u;
label_1144b4:
    // 0x1144b4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1144B4u;
    {
        const bool branch_taken_0x1144b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1144B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144B4u;
        // 0x1144b8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144b4) {
            ctx->pc = 0x1144CCu;
            goto label_1144cc;
        }
    }
    ctx->pc = 0x1144BCu;
    // 0x1144bc: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x1144BCu;
    SET_GPR_U32(ctx, 31, 0x1144C4u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x1144BCu, 0x1144C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144C4u;
label_1144c4:
    // 0x1144c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1144C4u;
    {
        const bool branch_taken_0x1144c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144C4u;
        // 0x1144c8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144c4) {
            ctx->pc = 0x1144DCu;
            goto label_1144dc;
        }
    }
    ctx->pc = 0x1144CCu;
label_1144cc:
    // 0x1144cc: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1144ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1144d0: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x1144D0u;
    SET_GPR_U32(ctx, 31, 0x1144D8u);
    ctx->pc = 0x1144D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1144D0u;
    // 0x1144d4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x1144D0u, 0x1144D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144D8u;
label_1144d8:
    // 0x1144d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1144d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1144dc:
    // 0x1144dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1144dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1144e0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1144e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1144e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1144e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1144e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1144E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1144ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144E8u;
        // 0x1144ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1144F0u;
}
