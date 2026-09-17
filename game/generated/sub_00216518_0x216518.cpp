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

// Function: sub_00216518
// Address: 0x216518 - 0x2166f0
void sub_00216518_0x216518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216518_0x216518");
#endif

    switch (ctx->pc) {
        case 0x216544u: goto label_216544;
        case 0x21654cu: goto label_21654c;
        case 0x21655cu: goto label_21655c;
        case 0x2165dcu: goto label_2165dc;
        case 0x2165ecu: goto label_2165ec;
        case 0x21660cu: goto label_21660c;
        case 0x21661cu: goto label_21661c;
        case 0x21662cu: goto label_21662c;
        case 0x216638u: goto label_216638;
        case 0x216690u: goto label_216690;
        case 0x2166bcu: goto label_2166bc;
        default: break;
    }

    ctx->pc = 0x216518u;

    // 0x216518: 0x8f82c910  lw          $v0, -0x36F0($gp)
    ctx->pc = 0x216518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953232)));
    // 0x21651c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21651cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216520: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x216520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216524: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21652c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216530: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216534: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x216534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x216538: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x216538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21653c: 0xc08582a  jal         func_2160A8
    ctx->pc = 0x21653Cu;
    SET_GPR_U32(ctx, 31, 0x216544u);
    ctx->pc = 0x216540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21653Cu;
    // 0x216540: 0xaf82c910  sw          $v0, -0x36F0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953232), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2160A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2160A8u, 0x21653Cu, 0x216544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216544u;
label_216544:
    // 0x216544: 0xc08248e  jal         func_209238
    ctx->pc = 0x216544u;
    SET_GPR_U32(ctx, 31, 0x21654Cu);
    ctx->pc = 0x216548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216544u;
    // 0x216548: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209238u, 0x216544u, 0x21654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21654Cu;
label_21654c:
    // 0x21654c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21654Cu;
    {
        const bool branch_taken_0x21654c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21654c) {
            ctx->pc = 0x216550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21654Cu;
            // 0x216550: 0x3c13003b  lui         $s3, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216568u;
            goto label_216568;
        }
    }
    ctx->pc = 0x216554u;
    // 0x216554: 0xc0a4c8e  jal         func_293238
    ctx->pc = 0x216554u;
    SET_GPR_U32(ctx, 31, 0x21655Cu);
    ctx->pc = 0x293238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293238u, 0x216554u, 0x21655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21655Cu;
label_21655c:
    // 0x21655c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x21655Cu;
    {
        const bool branch_taken_0x21655c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21655Cu;
        // 0x216560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21655c) {
            ctx->pc = 0x2166D4u;
            goto label_2166d4;
        }
    }
    ctx->pc = 0x216564u;
    // 0x216564: 0x0  nop
    ctx->pc = 0x216564u;
    // NOP
label_216568:
    // 0x216568: 0x26638858  addiu       $v1, $s3, -0x77A8
    ctx->pc = 0x216568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
    // 0x21656c: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x21656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x216570: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x216570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x216574: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x216574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x216578: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x216578u;
    {
        const bool branch_taken_0x216578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216578u;
        // 0x21657c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216578) {
            ctx->pc = 0x216594u;
            goto label_216594;
        }
    }
    ctx->pc = 0x216580u;
    // 0x216580: 0x8f82a850  lw          $v0, -0x57B0($gp)
    ctx->pc = 0x216580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
    // 0x216584: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x216584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x216588: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x216588u;
    {
        const bool branch_taken_0x216588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216588u;
        // 0x21658c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216588) {
            ctx->pc = 0x2165ACu;
            goto label_2165ac;
        }
    }
    ctx->pc = 0x216590u;
    // 0x216590: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x216590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_216594:
    // 0x216594: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x216594u;
    {
        const bool branch_taken_0x216594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216594u;
        // 0x216598: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216594) {
            ctx->pc = 0x2165B4u;
            goto label_2165b4;
        }
    }
    ctx->pc = 0x21659Cu;
    // 0x21659c: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x21659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x2165a0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2165a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2165a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2165A4u;
    {
        const bool branch_taken_0x2165a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165A4u;
        // 0x2165a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165a4) {
            ctx->pc = 0x2165B4u;
            goto label_2165b4;
        }
    }
    ctx->pc = 0x2165ACu;
label_2165ac:
    // 0x2165ac: 0xaf82c914  sw          $v0, -0x36EC($gp)
    ctx->pc = 0x2165acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953236), GPR_U32(ctx, 2));
    // 0x2165b0: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2165b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
label_2165b4:
    // 0x2165b4: 0x8e2283c0  lw          $v0, -0x7C40($s1)
    ctx->pc = 0x2165b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
    // 0x2165b8: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x2165b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x2165bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2165BCu;
    {
        const bool branch_taken_0x2165bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165BCu;
        // 0x2165c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165bc) {
            ctx->pc = 0x2165D0u;
            goto label_2165d0;
        }
    }
    ctx->pc = 0x2165C4u;
    // 0x2165c4: 0x8f82c91c  lw          $v0, -0x36E4($gp)
    ctx->pc = 0x2165c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953244)));
    // 0x2165c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2165C8u;
    {
        const bool branch_taken_0x2165c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165C8u;
        // 0x2165cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165c8) {
            ctx->pc = 0x2165D4u;
            goto label_2165d4;
        }
    }
    ctx->pc = 0x2165D0u;
label_2165d0:
    // 0x2165d0: 0xaf82c914  sw          $v0, -0x36EC($gp)
    ctx->pc = 0x2165d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953236), GPR_U32(ctx, 2));
label_2165d4:
    // 0x2165d4: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x2165D4u;
    SET_GPR_U32(ctx, 31, 0x2165DCu);
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x2165D4u, 0x2165DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165DCu;
label_2165dc:
    // 0x2165dc: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2165DCu;
    {
        const bool branch_taken_0x2165dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165DCu;
        // 0x2165e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165dc) {
            ctx->pc = 0x2166D8u;
            goto label_2166d8;
        }
    }
    ctx->pc = 0x2165E4u;
    // 0x2165e4: 0xc0899ba  jal         func_2266E8
    ctx->pc = 0x2165E4u;
    SET_GPR_U32(ctx, 31, 0x2165ECu);
    ctx->pc = 0x2266E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266E8u, 0x2165E4u, 0x2165ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165ECu;
label_2165ec:
    // 0x2165ec: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2165ECu;
    {
        const bool branch_taken_0x2165ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165ECu;
        // 0x2165f0: 0x262483c0  addiu       $a0, $s1, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165ec) {
            ctx->pc = 0x2166D4u;
            goto label_2166d4;
        }
    }
    ctx->pc = 0x2165F4u;
    // 0x2165f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2165f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2165f8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2165f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2165fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2165FCu;
    {
        const bool branch_taken_0x2165fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165FCu;
        // 0x216600: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165fc) {
            ctx->pc = 0x216628u;
            goto label_216628;
        }
    }
    ctx->pc = 0x216604u;
    // 0x216604: 0xc085238  jal         func_2148E0
    ctx->pc = 0x216604u;
    SET_GPR_U32(ctx, 31, 0x21660Cu);
    ctx->pc = 0x216608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216604u;
    // 0x216608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x216604u, 0x21660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21660Cu;
label_21660c:
    // 0x21660c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21660Cu;
    {
        const bool branch_taken_0x21660c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x216610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21660Cu;
        // 0x216610: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21660c) {
            ctx->pc = 0x216628u;
            goto label_216628;
        }
    }
    ctx->pc = 0x216614u;
    // 0x216614: 0xc0b6aea  jal         func_2DABA8
    ctx->pc = 0x216614u;
    SET_GPR_U32(ctx, 31, 0x21661Cu);
    ctx->pc = 0x2DABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DABA8u, 0x216614u, 0x21661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21661Cu;
label_21661c:
    // 0x21661c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x21661Cu;
    {
        const bool branch_taken_0x21661c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21661c) {
            ctx->pc = 0x216620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21661Cu;
            // 0x216620: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2166D8u;
            goto label_2166d8;
        }
    }
    ctx->pc = 0x216624u;
    // 0x216624: 0x0  nop
    ctx->pc = 0x216624u;
    // NOP
label_216628:
    // 0x216628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21662c:
    // 0x21662c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21662cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x216630: 0xc0898ee  jal         func_2263B8
    ctx->pc = 0x216630u;
    SET_GPR_U32(ctx, 31, 0x216638u);
    ctx->pc = 0x216634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216630u;
    // 0x216634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2263B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2263B8u, 0x216630u, 0x216638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216638u;
label_216638:
    // 0x216638: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x216638u;
    {
        const bool branch_taken_0x216638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216638u;
        // 0x21663c: 0x2a030002  slti        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216638) {
            ctx->pc = 0x2166D4u;
            goto label_2166d4;
        }
    }
    ctx->pc = 0x216640u;
    // 0x216640: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x216640u;
    {
        const bool branch_taken_0x216640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x216644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216640u;
        // 0x216644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216640) {
            ctx->pc = 0x21662Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21662c;
        }
    }
    ctx->pc = 0x216648u;
    // 0x216648: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x216648u;
    {
        const bool branch_taken_0x216648 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216648u;
        // 0x21664c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216648) {
            ctx->pc = 0x2166D4u;
            goto label_2166d4;
        }
    }
    ctx->pc = 0x216650u;
    // 0x216650: 0x8f82c910  lw          $v0, -0x36F0($gp)
    ctx->pc = 0x216650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953232)));
    // 0x216654: 0x284200b4  slti        $v0, $v0, 0xB4
    ctx->pc = 0x216654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x216658: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216658u;
    {
        const bool branch_taken_0x216658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216658u;
        // 0x21665c: 0x8e2283c0  lw          $v0, -0x7C40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216658) {
            ctx->pc = 0x216670u;
            goto label_216670;
        }
    }
    ctx->pc = 0x216660u;
    // 0x216660: 0x8f83c914  lw          $v1, -0x36EC($gp)
    ctx->pc = 0x216660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953236)));
    // 0x216664: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x216664u;
    {
        const bool branch_taken_0x216664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x216668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216664u;
        // 0x216668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216664) {
            ctx->pc = 0x2166D4u;
            goto label_2166d4;
        }
    }
    ctx->pc = 0x21666Cu;
    // 0x21666c: 0x8e2283c0  lw          $v0, -0x7C40($s1)
    ctx->pc = 0x21666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
label_216670:
    // 0x216670: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x216670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x216674: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x216674u;
    {
        const bool branch_taken_0x216674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216674u;
        // 0x216678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216674) {
            ctx->pc = 0x2166C0u;
            goto label_2166c0;
        }
    }
    ctx->pc = 0x21667Cu;
    // 0x21667c: 0x8f82c91c  lw          $v0, -0x36E4($gp)
    ctx->pc = 0x21667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953244)));
    // 0x216680: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x216680u;
    {
        const bool branch_taken_0x216680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216680u;
        // 0x216684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216680) {
            ctx->pc = 0x2166C0u;
            goto label_2166c0;
        }
    }
    ctx->pc = 0x216688u;
    // 0x216688: 0xc0a6100  jal         func_298400
    ctx->pc = 0x216688u;
    SET_GPR_U32(ctx, 31, 0x216690u);
    ctx->pc = 0x298400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298400u, 0x216688u, 0x216690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216690u;
label_216690:
    // 0x216690: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x216690u;
    {
        const bool branch_taken_0x216690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216690u;
        // 0x216694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216690) {
            ctx->pc = 0x2166C0u;
            goto label_2166c0;
        }
    }
    ctx->pc = 0x216698u;
    // 0x216698: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x216698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x21669c: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x21669cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2166a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2166a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2166a4: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2166a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2166a8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2166a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2166ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2166acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2166b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2166b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2166b4: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x2166B4u;
    SET_GPR_U32(ctx, 31, 0x2166BCu);
    ctx->pc = 0x2166B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166B4u;
    // 0x2166b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x2166B4u, 0x2166BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166BCu;
label_2166bc:
    // 0x2166bc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2166bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2166c0:
    // 0x2166c0: 0xaf82c910  sw          $v0, -0x36F0($gp)
    ctx->pc = 0x2166c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953232), GPR_U32(ctx, 2));
    // 0x2166c4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2166c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2166c8: 0x26638858  addiu       $v1, $s3, -0x77A8
    ctx->pc = 0x2166c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
    // 0x2166cc: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2166ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2166d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2166d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2166d4:
    // 0x2166d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2166d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2166d8:
    // 0x2166d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2166d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2166dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2166dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2166e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2166e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2166e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2166e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2166e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2166E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2166ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166E8u;
        // 0x2166ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2166E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2166F0u;
}
