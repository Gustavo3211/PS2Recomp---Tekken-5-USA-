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

// Function: sub_002F9698
// Address: 0x2f9698 - 0x2f97c0
void sub_002F9698_0x2f9698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9698_0x2f9698");
#endif

    switch (ctx->pc) {
        case 0x2f96b4u: goto label_2f96b4;
        case 0x2f96ecu: goto label_2f96ec;
        case 0x2f96fcu: goto label_2f96fc;
        case 0x2f9730u: goto label_2f9730;
        case 0x2f973cu: goto label_2f973c;
        case 0x2f9748u: goto label_2f9748;
        case 0x2f977cu: goto label_2f977c;
        case 0x2f9784u: goto label_2f9784;
        case 0x2f978cu: goto label_2f978c;
        case 0x2f979cu: goto label_2f979c;
        case 0x2f97a4u: goto label_2f97a4;
        default: break;
    }

    ctx->pc = 0x2f9698u;

    // 0x2f9698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f969c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f969cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f96a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f96a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f96a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f96a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f96a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f96a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f96ac: 0xc09031c  jal         func_240C70
    ctx->pc = 0x2F96ACu;
    SET_GPR_U32(ctx, 31, 0x2F96B4u);
    ctx->pc = 0x2F96B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F96ACu;
    // 0x2f96b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240C70u, 0x2F96ACu, 0x2F96B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F96B4u;
label_2f96b4:
    // 0x2f96b4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2F96B4u;
    {
        const bool branch_taken_0x2f96b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96B4u;
        // 0x2f96b8: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96b4) {
            ctx->pc = 0x2F9784u;
            goto label_2f9784;
        }
    }
    ctx->pc = 0x2F96BCu;
    // 0x2f96bc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f96bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f96c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F96C0u;
    {
        const bool branch_taken_0x2f96c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f96c0) {
            ctx->pc = 0x2F96C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F96C0u;
            // 0x2f96c4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F96DCu;
            goto label_2f96dc;
        }
    }
    ctx->pc = 0x2F96C8u;
    // 0x2f96c8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f96cc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f96d0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F96D0u;
    {
        const bool branch_taken_0x2f96d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f96d0) {
            ctx->pc = 0x2F96E4u;
            goto label_2f96e4;
        }
    }
    ctx->pc = 0x2F96D8u;
    // 0x2f96d8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f96d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f96dc:
    // 0x2f96dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f96dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f96e0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f96e4:
    // 0x2f96e4: 0xc0bdee8  jal         func_2F7BA0
    ctx->pc = 0x2F96E4u;
    SET_GPR_U32(ctx, 31, 0x2F96ECu);
    ctx->pc = 0x2F96E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F96E4u;
    // 0x2f96e8: 0x3c11003e  lui         $s1, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7BA0u, 0x2F96E4u, 0x2F96ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F96ECu;
label_2f96ec:
    // 0x2f96ec: 0x262437e0  addiu       $a0, $s1, 0x37E0
    ctx->pc = 0x2f96ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14304));
    // 0x2f96f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f96f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f96f4: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2F96F4u;
    SET_GPR_U32(ctx, 31, 0x2F96FCu);
    ctx->pc = 0x2F96F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F96F4u;
    // 0x2f96f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2F96F4u, 0x2F96FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F96FCu;
label_2f96fc:
    // 0x2f96fc: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2f96fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2f9700: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f9700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9704: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9704u;
    {
        const bool branch_taken_0x2f9704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9704) {
            ctx->pc = 0x2F9708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9704u;
            // 0x2f9708: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9720u;
            goto label_2f9720;
        }
    }
    ctx->pc = 0x2F970Cu;
    // 0x2f970c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9710: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f9710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9714: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9714u;
    {
        const bool branch_taken_0x2f9714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9714) {
            ctx->pc = 0x2F9728u;
            goto label_2f9728;
        }
    }
    ctx->pc = 0x2F971Cu;
    // 0x2f971c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f971cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f9720:
    // 0x2f9720: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9724: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9728:
    // 0x2f9728: 0xc090212  jal         func_240848
    ctx->pc = 0x2F9728u;
    SET_GPR_U32(ctx, 31, 0x2F9730u);
    ctx->pc = 0x240848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240848u, 0x2F9728u, 0x2F9730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9730u;
label_2f9730:
    // 0x2f9730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9734: 0xc0b6a76  jal         func_2DA9D8
    ctx->pc = 0x2F9734u;
    SET_GPR_U32(ctx, 31, 0x2F973Cu);
    ctx->pc = 0x2F9738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9734u;
    // 0x2f9738: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9D8u, 0x2F9734u, 0x2F973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F973Cu;
label_2f973c:
    // 0x2f973c: 0x262437e0  addiu       $a0, $s1, 0x37E0
    ctx->pc = 0x2f973cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14304));
    // 0x2f9740: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2F9740u;
    SET_GPR_U32(ctx, 31, 0x2F9748u);
    ctx->pc = 0x2F9744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9740u;
    // 0x2f9744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2F9740u, 0x2F9748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9748u;
label_2f9748:
    // 0x2f9748: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2f9748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2f974c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f974cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9750: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9750u;
    {
        const bool branch_taken_0x2f9750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9750) {
            ctx->pc = 0x2F9754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9750u;
            // 0x2f9754: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F976Cu;
            goto label_2f976c;
        }
    }
    ctx->pc = 0x2F9758u;
    // 0x2f9758: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f975c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9760: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9760u;
    {
        const bool branch_taken_0x2f9760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9760) {
            ctx->pc = 0x2F9774u;
            goto label_2f9774;
        }
    }
    ctx->pc = 0x2F9768u;
    // 0x2f9768: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f976c:
    // 0x2f976c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f976cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9770: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9770u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9774:
    // 0x2f9774: 0xc090212  jal         func_240848
    ctx->pc = 0x2F9774u;
    SET_GPR_U32(ctx, 31, 0x2F977Cu);
    ctx->pc = 0x240848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240848u, 0x2F9774u, 0x2F977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F977Cu;
label_2f977c:
    // 0x2f977c: 0xc0b6a28  jal         func_2DA8A0
    ctx->pc = 0x2F977Cu;
    SET_GPR_U32(ctx, 31, 0x2F9784u);
    ctx->pc = 0x2F9780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F977Cu;
    // 0x2f9780: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8A0u, 0x2F977Cu, 0x2F9784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9784u;
label_2f9784:
    // 0x2f9784: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x2F9784u;
    SET_GPR_U32(ctx, 31, 0x2F978Cu);
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x2F9784u, 0x2F978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F978Cu;
label_2f978c:
    // 0x2f978c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F978Cu;
    {
        const bool branch_taken_0x2f978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F978Cu;
        // 0x2f9790: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f978c) {
            ctx->pc = 0x2F97A8u;
            goto label_2f97a8;
        }
    }
    ctx->pc = 0x2F9794u;
    // 0x2f9794: 0xc0b6ae0  jal         func_2DAB80
    ctx->pc = 0x2F9794u;
    SET_GPR_U32(ctx, 31, 0x2F979Cu);
    ctx->pc = 0x2DAB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAB80u, 0x2F9794u, 0x2F979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F979Cu;
label_2f979c:
    // 0x2f979c: 0xc0be62c  jal         func_2F98B0
    ctx->pc = 0x2F979Cu;
    SET_GPR_U32(ctx, 31, 0x2F97A4u);
    ctx->pc = 0x2F97A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F979Cu;
    // 0x2f97a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F98B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F98B0u, 0x2F979Cu, 0x2F97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F97A4u;
label_2f97a4:
    // 0x2f97a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f97a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f97a8:
    // 0x2f97a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f97a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f97ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f97acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f97b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f97b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f97b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F97B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F97B4u;
        // 0x2f97b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F97B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F97BCu;
    // 0x2f97bc: 0x0  nop
    ctx->pc = 0x2f97bcu;
    // NOP
    ctx->pc = 0x2f97c0u;
}
