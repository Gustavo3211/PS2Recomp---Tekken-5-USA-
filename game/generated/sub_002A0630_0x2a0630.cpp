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

// Function: sub_002A0630
// Address: 0x2a0630 - 0x2a0870
void sub_002A0630_0x2a0630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0630_0x2a0630");
#endif

    switch (ctx->pc) {
        case 0x2a06b8u: goto label_2a06b8;
        case 0x2a072cu: goto label_2a072c;
        case 0x2a073cu: goto label_2a073c;
        case 0x2a0750u: goto label_2a0750;
        case 0x2a0760u: goto label_2a0760;
        case 0x2a0784u: goto label_2a0784;
        case 0x2a07c0u: goto label_2a07c0;
        default: break;
    }

    ctx->pc = 0x2a0630u;

    // 0x2a0630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a0630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a0634: 0x24850158  addiu       $a1, $a0, 0x158
    ctx->pc = 0x2a0634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    // 0x2a0638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a0638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a063c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a0640: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a0640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a0644: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a0644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a0648: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a0648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a064c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a0650: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2a0650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2a0654: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2a0654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2a0658: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a0658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a065c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A065Cu;
    {
        const bool branch_taken_0x2a065c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A065Cu;
        // 0x2a0660: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a065c) {
            ctx->pc = 0x2A0674u;
            goto label_2a0674;
        }
    }
    ctx->pc = 0x2A0664u;
    // 0x2a0664: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a0664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a0668: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a0668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a066c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A066Cu;
    {
        const bool branch_taken_0x2a066c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a066c) {
            ctx->pc = 0x2A0670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A066Cu;
            // 0x2a0670: 0x24850160  addiu       $a1, $a0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0684u;
            goto label_2a0684;
        }
    }
    ctx->pc = 0x2A0674u;
label_2a0674:
    // 0x2a0674: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a0674u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2a0678: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a0678u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a067c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a067cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2a0680: 0x24850160  addiu       $a1, $a0, 0x160
    ctx->pc = 0x2a0680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
label_2a0684:
    // 0x2a0684: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a0684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a0688: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0688u;
    {
        const bool branch_taken_0x2a0688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0688u;
        // 0x2a068c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0688) {
            ctx->pc = 0x2A06A0u;
            goto label_2a06a0;
        }
    }
    ctx->pc = 0x2A0690u;
    // 0x2a0690: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a0690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a0694: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a0694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a0698: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0698u;
    {
        const bool branch_taken_0x2a0698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a0698) {
            ctx->pc = 0x2A069Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0698u;
            // 0x2a069c: 0x8c90016c  lw          $s0, 0x16C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A06B0u;
            goto label_2a06b0;
        }
    }
    ctx->pc = 0x2A06A0u;
label_2a06a0:
    // 0x2a06a0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a06a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2a06a4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a06a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a06a8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a06a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2a06ac: 0x8c90016c  lw          $s0, 0x16C($a0)
    ctx->pc = 0x2a06acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
label_2a06b0:
    // 0x2a06b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a06b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a06b4: 0x26b30008  addiu       $s3, $s5, 0x8
    ctx->pc = 0x2a06b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2a06b8:
    // 0x2a06b8: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x2a06b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2a06bc: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x2a06bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a06c0: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x2a06c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a06c4: 0x8c640070  lw          $a0, 0x70($v1)
    ctx->pc = 0x2a06c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2a06c8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a06cc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a06ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a06d0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a06d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a06d4: 0x82020020  lb          $v0, 0x20($s0)
    ctx->pc = 0x2a06d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a06d8: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2A06D8u;
    {
        const bool branch_taken_0x2a06d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06D8u;
        // 0x2a06dc: 0x2443fffe  addiu       $v1, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a06d8) {
            ctx->pc = 0x2A0838u;
            goto label_2a0838;
        }
    }
    ctx->pc = 0x2A06E0u;
    // 0x2a06e0: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x2a06e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a06e4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2A06E4u;
    {
        const bool branch_taken_0x2a06e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06E4u;
        // 0x2a06e8: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a06e4) {
            ctx->pc = 0x2A0788u;
            goto label_2a0788;
        }
    }
    ctx->pc = 0x2A06ECu;
    // 0x2a06ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a06f0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a06f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a06f8: 0x8c63cc10  lw          $v1, -0x33F0($v1)
    ctx->pc = 0x2a06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954000)));
    // 0x2a06fc: 0x600008  jr          $v1
    ctx->pc = 0x2A06FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A0708u: goto label_2a0708;
            case 0x2A0748u: goto label_2a0748;
            case 0x2A0768u: goto label_2a0768;
            case 0x2A077Cu: goto label_2a077c;
            case 0x2A0788u: goto label_2a0788;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A06FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A0704u;
    // 0x2a0704: 0x0  nop
    ctx->pc = 0x2a0704u;
    // NOP
label_2a0708:
    // 0x2a0708: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a0708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a070c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a070cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0710: 0x8c4488a8  lw          $a0, -0x7758($v0)
    ctx->pc = 0x2a0710u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x2a0714: 0x2831804  sllv        $v1, $v1, $s4
    ctx->pc = 0x2a0714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
    // 0x2a0718: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2a0718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a071c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A071Cu;
    {
        const bool branch_taken_0x2a071c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a071c) {
            ctx->pc = 0x2A0788u;
            goto label_2a0788;
        }
    }
    ctx->pc = 0x2A0724u;
    // 0x2a0724: 0xc092ebe  jal         func_24BAF8
    ctx->pc = 0x2A0724u;
    SET_GPR_U32(ctx, 31, 0x2A072Cu);
    ctx->pc = 0x2A0728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0724u;
    // 0x2a0728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAF8u, 0x2A0724u, 0x2A072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A072Cu;
label_2a072c:
    // 0x2a072c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A072Cu;
    {
        const bool branch_taken_0x2a072c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a072c) {
            ctx->pc = 0x2A0788u;
            goto label_2a0788;
        }
    }
    ctx->pc = 0x2A0734u;
    // 0x2a0734: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x2A0734u;
    SET_GPR_U32(ctx, 31, 0x2A073Cu);
    ctx->pc = 0x2A0738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0734u;
    // 0x2a0738: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x2A0734u, 0x2A073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A073Cu;
label_2a073c:
    // 0x2a073c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A073Cu;
    {
        const bool branch_taken_0x2a073c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A073Cu;
        // 0x2a0740: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a073c) {
            ctx->pc = 0x2A0788u;
            goto label_2a0788;
        }
    }
    ctx->pc = 0x2A0744u;
    // 0x2a0744: 0x0  nop
    ctx->pc = 0x2a0744u;
    // NOP
label_2a0748:
    // 0x2a0748: 0xc092ebe  jal         func_24BAF8
    ctx->pc = 0x2A0748u;
    SET_GPR_U32(ctx, 31, 0x2A0750u);
    ctx->pc = 0x2A074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0748u;
    // 0x2a074c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAF8u, 0x2A0748u, 0x2A0750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0750u;
label_2a0750:
    // 0x2a0750: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A0750u;
    {
        const bool branch_taken_0x2a0750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0750) {
            ctx->pc = 0x2A0788u;
            goto label_2a0788;
        }
    }
    ctx->pc = 0x2A0758u;
    // 0x2a0758: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x2A0758u;
    SET_GPR_U32(ctx, 31, 0x2A0760u);
    ctx->pc = 0x2A075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0758u;
    // 0x2a075c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x2A0758u, 0x2A0760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0760u;
label_2a0760:
    // 0x2a0760: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A0760u;
    {
        const bool branch_taken_0x2a0760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0760u;
        // 0x2a0764: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0760) {
            ctx->pc = 0x2A0788u;
            goto label_2a0788;
        }
    }
    ctx->pc = 0x2A0768u;
label_2a0768:
    // 0x2a0768: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a0768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a076c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a076cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0770: 0x904383ce  lbu         $v1, -0x7C32($v0)
    ctx->pc = 0x2a0770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3A83CEu));
    // 0x2a0774: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0774u;
    {
        const bool branch_taken_0x2a0774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a0774) {
            ctx->pc = 0x2A0788u;
            goto label_2a0788;
        }
    }
    ctx->pc = 0x2A077Cu;
label_2a077c:
    // 0x2a077c: 0xc086408  jal         func_219020
    ctx->pc = 0x2A077Cu;
    SET_GPR_U32(ctx, 31, 0x2A0784u);
    ctx->pc = 0x2A0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A077Cu;
    // 0x2a0780: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x2A077Cu, 0x2A0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0784u;
label_2a0784:
    // 0x2a0784: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a0784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0788:
    // 0x2a0788: 0x6230008  bgezl       $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0788u;
    {
        const bool branch_taken_0x2a0788 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2a0788) {
            ctx->pc = 0x2A078Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0788u;
            // 0x2a078c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A07ACu;
            goto label_2a07ac;
        }
    }
    ctx->pc = 0x2A0790u;
    // 0x2a0790: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2a0790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a0794: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2a0794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2a0798: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0798u;
    {
        const bool branch_taken_0x2a0798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0798u;
        // 0x2a079c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0798) {
            ctx->pc = 0x2A07A8u;
            goto label_2a07a8;
        }
    }
    ctx->pc = 0x2A07A0u;
    // 0x2a07a0: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A07A0u;
    {
        const bool branch_taken_0x2a07a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a07a0) {
            ctx->pc = 0x2A07A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A07A0u;
            // 0x2a07a4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A083Cu;
            goto label_2a083c;
        }
    }
    ctx->pc = 0x2A07A8u;
label_2a07a8:
    // 0x2a07a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a07a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a07ac:
    // 0x2a07ac: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2a07acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2a07b0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A07B0u;
    {
        const bool branch_taken_0x2a07b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a07b0) {
            ctx->pc = 0x2A07B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A07B0u;
            // 0x2a07b4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A07E0u;
            goto label_2a07e0;
        }
    }
    ctx->pc = 0x2A07B8u;
    // 0x2a07b8: 0xc086304  jal         func_218C10
    ctx->pc = 0x2A07B8u;
    SET_GPR_U32(ctx, 31, 0x2A07C0u);
    ctx->pc = 0x2A07BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A07B8u;
    // 0x2a07bc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x2A07B8u, 0x2A07C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07C0u;
label_2a07c0:
    // 0x2a07c0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A07C0u;
    {
        const bool branch_taken_0x2a07c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a07c0) {
            ctx->pc = 0x2A07C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A07C0u;
            // 0x2a07c4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A07E0u;
            goto label_2a07e0;
        }
    }
    ctx->pc = 0x2A07C8u;
    // 0x2a07c8: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x2a07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a07cc: 0x8ea40108  lw          $a0, 0x108($s5)
    ctx->pc = 0x2a07ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
    // 0x2a07d0: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x2a07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2a07d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2A07D4u;
    {
        const bool branch_taken_0x2a07d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07D4u;
        // 0x2a07d8: 0xac640078  sw          $a0, 0x78($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a07d4) {
            ctx->pc = 0x2A0828u;
            goto label_2a0828;
        }
    }
    ctx->pc = 0x2A07DCu;
    // 0x2a07dc: 0x0  nop
    ctx->pc = 0x2a07dcu;
    // NOP
label_2a07e0:
    // 0x2a07e0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2a07e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a07e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a07e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a07e8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a07e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a07ec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2a07ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a07f0: 0x8ca5c9a8  lw          $a1, -0x3658($a1)
    ctx->pc = 0x2a07f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953384)));
    // 0x2a07f4: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A07F4u;
    {
        const bool branch_taken_0x2a07f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07F4u;
        // 0x2a07f8: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a07f4) {
            ctx->pc = 0x2A0810u;
            goto label_2a0810;
        }
    }
    ctx->pc = 0x2A07FCu;
    // 0x2a07fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2a07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a0800: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2a0800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0804: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2a0804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2a0808: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2a0808u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2a080c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a080cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a0810:
    // 0x2a0810: 0x2532021  addu        $a0, $s2, $s3
    ctx->pc = 0x2a0810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a0814: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2a0814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2a0818: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x2a0818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2a081c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2a081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2a0820: 0xaca20078  sw          $v0, 0x78($a1)
    ctx->pc = 0x2a0820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 2));
    // 0x2a0824: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x2a0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_2a0828:
    // 0x2a0828: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2a0828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2a082c: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x2a082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0830: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2a0830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2a0834: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x2a0834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
label_2a0838:
    // 0x2a0838: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a0838u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2a083c:
    // 0x2a083c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2a083cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a0840: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x2A0840u;
    {
        const bool branch_taken_0x2a0840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0840u;
        // 0x2a0844: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0840) {
            ctx->pc = 0x2A06B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a06b8;
        }
    }
    ctx->pc = 0x2A0848u;
    // 0x2a0848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a084c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a084cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a0850: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a0850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0854: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a0854u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a0858: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a0858u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a085c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2a085cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a0860: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2a0860u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0864: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2a0864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a0868: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0868u;
        // 0x2a086c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0870u;
}
