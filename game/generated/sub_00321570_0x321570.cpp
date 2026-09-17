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

// Function: sub_00321570
// Address: 0x321570 - 0x321660
void sub_00321570_0x321570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321570_0x321570");
#endif

    switch (ctx->pc) {
        case 0x321570u: goto label_321570;
        case 0x321574u: goto label_321574;
        case 0x321578u: goto label_321578;
        case 0x32157cu: goto label_32157c;
        case 0x321580u: goto label_321580;
        case 0x321584u: goto label_321584;
        case 0x321588u: goto label_321588;
        case 0x32158cu: goto label_32158c;
        case 0x321590u: goto label_321590;
        case 0x321594u: goto label_321594;
        case 0x321598u: goto label_321598;
        case 0x32159cu: goto label_32159c;
        case 0x3215a0u: goto label_3215a0;
        case 0x3215a4u: goto label_3215a4;
        case 0x3215a8u: goto label_3215a8;
        case 0x3215acu: goto label_3215ac;
        case 0x3215b0u: goto label_3215b0;
        case 0x3215b4u: goto label_3215b4;
        case 0x3215b8u: goto label_3215b8;
        case 0x3215bcu: goto label_3215bc;
        case 0x3215c0u: goto label_3215c0;
        case 0x3215c4u: goto label_3215c4;
        case 0x3215c8u: goto label_3215c8;
        case 0x3215ccu: goto label_3215cc;
        case 0x3215d0u: goto label_3215d0;
        case 0x3215d4u: goto label_3215d4;
        case 0x3215d8u: goto label_3215d8;
        case 0x3215dcu: goto label_3215dc;
        case 0x3215e0u: goto label_3215e0;
        case 0x3215e4u: goto label_3215e4;
        case 0x3215e8u: goto label_3215e8;
        case 0x3215ecu: goto label_3215ec;
        case 0x3215f0u: goto label_3215f0;
        case 0x3215f4u: goto label_3215f4;
        case 0x3215f8u: goto label_3215f8;
        case 0x3215fcu: goto label_3215fc;
        case 0x321600u: goto label_321600;
        case 0x321604u: goto label_321604;
        case 0x321608u: goto label_321608;
        case 0x32160cu: goto label_32160c;
        case 0x321610u: goto label_321610;
        case 0x321614u: goto label_321614;
        case 0x321618u: goto label_321618;
        case 0x32161cu: goto label_32161c;
        case 0x321620u: goto label_321620;
        case 0x321624u: goto label_321624;
        case 0x321628u: goto label_321628;
        case 0x32162cu: goto label_32162c;
        case 0x321630u: goto label_321630;
        case 0x321634u: goto label_321634;
        case 0x321638u: goto label_321638;
        case 0x32163cu: goto label_32163c;
        case 0x321640u: goto label_321640;
        case 0x321644u: goto label_321644;
        case 0x321648u: goto label_321648;
        case 0x32164cu: goto label_32164c;
        case 0x321650u: goto label_321650;
        case 0x321654u: goto label_321654;
        case 0x321658u: goto label_321658;
        case 0x32165cu: goto label_32165c;
        default: break;
    }

    ctx->pc = 0x321570u;

label_321570:
    // 0x321570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_321574:
    // 0x321574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_321578:
    // 0x321578: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x321578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32157c:
    // 0x32157c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_321580:
    // 0x321580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321584:
    // 0x321584: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x321584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_321588:
    // 0x321588: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x321588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_32158c:
    // 0x32158c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_321590:
    // 0x321590: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x321590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_321594:
    // 0x321594: 0xc0c76aa  jal         func_31DAA8
label_321598:
    if (ctx->pc == 0x321598u) {
        ctx->pc = 0x321598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321594u;
        // 0x321598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32159Cu;
        goto label_32159c;
    }
    ctx->pc = 0x321594u;
    SET_GPR_U32(ctx, 31, 0x32159Cu);
    ctx->pc = 0x321598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321594u;
    // 0x321598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DAA8u, 0x321594u, 0x32159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32159Cu;
label_32159c:
    // 0x32159c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3215a0:
    if (ctx->pc == 0x3215A0u) {
        ctx->pc = 0x3215A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32159Cu;
        // 0x3215a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3215A4u;
        goto label_3215a4;
    }
    ctx->pc = 0x32159Cu;
    {
        const bool branch_taken_0x32159c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32159c) {
            ctx->pc = 0x3215A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32159Cu;
            // 0x3215a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3215B0u;
            goto label_3215b0;
        }
    }
    ctx->pc = 0x3215A4u;
label_3215a4:
    // 0x3215a4: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x3215a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_3215a8:
    // 0x3215a8: 0x10000024  b           . + 4 + (0x24 << 2)
label_3215ac:
    if (ctx->pc == 0x3215ACu) {
        ctx->pc = 0x3215ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215A8u;
        // 0x3215ac: 0x34420057  ori         $v0, $v0, 0x57 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)87);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3215B0u;
        goto label_3215b0;
    }
    ctx->pc = 0x3215A8u;
    {
        const bool branch_taken_0x3215a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3215ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215A8u;
        // 0x3215ac: 0x34420057  ori         $v0, $v0, 0x57 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)87);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215a8) {
            ctx->pc = 0x32163Cu;
            goto label_32163c;
        }
    }
    ctx->pc = 0x3215B0u;
label_3215b0:
    // 0x3215b0: 0xc0c76ca  jal         func_31DB28
label_3215b4:
    if (ctx->pc == 0x3215B4u) {
        ctx->pc = 0x3215B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215B0u;
        // 0x3215b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3215B8u;
        goto label_3215b8;
    }
    ctx->pc = 0x3215B0u;
    SET_GPR_U32(ctx, 31, 0x3215B8u);
    ctx->pc = 0x3215B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3215B0u;
    // 0x3215b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DB28u, 0x3215B0u, 0x3215B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215B8u;
label_3215b8:
    // 0x3215b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3215b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3215bc:
    // 0x3215bc: 0xc0c76cc  jal         func_31DB30
label_3215c0:
    if (ctx->pc == 0x3215C0u) {
        ctx->pc = 0x3215C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215BCu;
        // 0x3215c0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3215C4u;
        goto label_3215c4;
    }
    ctx->pc = 0x3215BCu;
    SET_GPR_U32(ctx, 31, 0x3215C4u);
    ctx->pc = 0x3215C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3215BCu;
    // 0x3215c0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DB30u, 0x3215BCu, 0x3215C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215C4u;
label_3215c4:
    // 0x3215c4: 0xc0c8de6  jal         func_323798
label_3215c8:
    if (ctx->pc == 0x3215C8u) {
        ctx->pc = 0x3215C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215C4u;
        // 0x3215c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3215CCu;
        goto label_3215cc;
    }
    ctx->pc = 0x3215C4u;
    SET_GPR_U32(ctx, 31, 0x3215CCu);
    ctx->pc = 0x3215C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3215C4u;
    // 0x3215c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323798u, 0x3215C4u, 0x3215CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215CCu;
label_3215cc:
    // 0x3215cc: 0x1a400018  blez        $s2, . + 4 + (0x18 << 2)
label_3215d0:
    if (ctx->pc == 0x3215D0u) {
        ctx->pc = 0x3215D4u;
        goto label_3215d4;
    }
    ctx->pc = 0x3215CCu;
    {
        const bool branch_taken_0x3215cc = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3215cc) {
            ctx->pc = 0x321630u;
            goto label_321630;
        }
    }
    ctx->pc = 0x3215D4u;
label_3215d4:
    // 0x3215d4: 0x26340004  addiu       $s4, $s1, 0x4
    ctx->pc = 0x3215d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3215d8:
    // 0x3215d8: 0xc0c770e  jal         func_31DC38
label_3215dc:
    if (ctx->pc == 0x3215DCu) {
        ctx->pc = 0x3215DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215D8u;
        // 0x3215dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3215E0u;
        goto label_3215e0;
    }
    ctx->pc = 0x3215D8u;
    SET_GPR_U32(ctx, 31, 0x3215E0u);
    ctx->pc = 0x3215DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3215D8u;
    // 0x3215dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DC38u, 0x3215D8u, 0x3215E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215E0u;
label_3215e0:
    // 0x3215e0: 0x440fff0  bltz        $v0, . + 4 + (-0x10 << 2)
label_3215e4:
    if (ctx->pc == 0x3215E4u) {
        ctx->pc = 0x3215E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215E0u;
        // 0x3215e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3215E8u;
        goto label_3215e8;
    }
    ctx->pc = 0x3215E0u;
    {
        const bool branch_taken_0x3215e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3215E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215E0u;
        // 0x3215e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215e0) {
            ctx->pc = 0x3215A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3215a4;
        }
    }
    ctx->pc = 0x3215E8u;
label_3215e8:
    // 0x3215e8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3215e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3215ec:
    // 0x3215ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3215ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3215f0:
    // 0x3215f0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3215f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_3215f4:
    // 0x3215f4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3215f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3215f8:
    // 0x3215f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3215f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3215fc:
    // 0x3215fc: 0x40f809  jalr        $v0
label_321600:
    if (ctx->pc == 0x321600u) {
        ctx->pc = 0x321600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215FCu;
        // 0x321600: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321604u;
        goto label_321604;
    }
    ctx->pc = 0x3215FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321604u);
        ctx->pc = 0x321600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215FCu;
        // 0x321600: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3215FCu, 0x321604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321604u;
label_321604:
    // 0x321604: 0x26240180  addiu       $a0, $s1, 0x180
    ctx->pc = 0x321604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_321608:
    // 0x321608: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x321608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32160c:
    // 0x32160c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x32160cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_321610:
    // 0x321610: 0xc0ce9d2  jal         func_33A748
label_321614:
    if (ctx->pc == 0x321614u) {
        ctx->pc = 0x321614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321610u;
        // 0x321614: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321618u;
        goto label_321618;
    }
    ctx->pc = 0x321610u;
    SET_GPR_U32(ctx, 31, 0x321618u);
    ctx->pc = 0x321614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321610u;
    // 0x321614: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A748u, 0x321610u, 0x321618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321618u;
label_321618:
    // 0x321618: 0xc0c7758  jal         func_31DD60
label_32161c:
    if (ctx->pc == 0x32161Cu) {
        ctx->pc = 0x32161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321618u;
        // 0x32161c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321620u;
        goto label_321620;
    }
    ctx->pc = 0x321618u;
    SET_GPR_U32(ctx, 31, 0x321620u);
    ctx->pc = 0x32161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321618u;
    // 0x32161c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD60u, 0x321618u, 0x321620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321620u;
label_321620:
    // 0x321620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321624:
    // 0x321624: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x321624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_321628:
    // 0x321628: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_32162c:
    if (ctx->pc == 0x32162Cu) {
        ctx->pc = 0x321630u;
        goto label_321630;
    }
    ctx->pc = 0x321628u;
    {
        const bool branch_taken_0x321628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321628) {
            ctx->pc = 0x3215D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3215d8;
        }
    }
    ctx->pc = 0x321630u;
label_321630:
    // 0x321630: 0xc0c8dde  jal         func_323778
label_321634:
    if (ctx->pc == 0x321634u) {
        ctx->pc = 0x321638u;
        goto label_321638;
    }
    ctx->pc = 0x321630u;
    SET_GPR_U32(ctx, 31, 0x321638u);
    ctx->pc = 0x323778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323778u, 0x321630u, 0x321638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321638u;
label_321638:
    // 0x321638: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32163c:
    // 0x32163c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32163cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_321640:
    // 0x321640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x321640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_321644:
    // 0x321644: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x321644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_321648:
    // 0x321648: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x321648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32164c:
    // 0x32164c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32164cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_321650:
    // 0x321650: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x321650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_321654:
    // 0x321654: 0x3e00008  jr          $ra
label_321658:
    if (ctx->pc == 0x321658u) {
        ctx->pc = 0x321658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321654u;
        // 0x321658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32165Cu;
        goto label_32165c;
    }
    ctx->pc = 0x321654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321654u;
        // 0x321658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32165Cu;
label_32165c:
    // 0x32165c: 0x0  nop
    ctx->pc = 0x32165cu;
    // NOP
    ctx->pc = 0x321660u;
}
