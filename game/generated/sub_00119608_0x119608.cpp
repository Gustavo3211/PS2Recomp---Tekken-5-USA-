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

// Function: sub_00119608
// Address: 0x119608 - 0x119798
void sub_00119608_0x119608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119608_0x119608");
#endif

    switch (ctx->pc) {
        case 0x119650u: goto label_119650;
        case 0x1196b8u: goto label_1196b8;
        case 0x119724u: goto label_119724;
        case 0x119758u: goto label_119758;
        default: break;
    }

    ctx->pc = 0x119608u;

    // 0x119608: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11960c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x119610: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119614: 0x24422148  addiu       $v0, $v0, 0x2148
    ctx->pc = 0x119614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8520));
    // 0x119618: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11961c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x11961cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119620: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119628: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x119628u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x132164u));
    // 0x11962c: 0x4610054  bgez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x11962Cu;
    {
        const bool branch_taken_0x11962c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x119630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11962Cu;
        // 0x119630: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11962c) {
            ctx->pc = 0x119780u;
            goto label_119780;
        }
    }
    ctx->pc = 0x119634u;
    // 0x119634: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x119634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x119638: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x119638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x11963c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x11963cu;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x119640: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x119640u;
    {
        const bool branch_taken_0x119640 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x119640) {
            ctx->pc = 0x119644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119640u;
            // 0x119644: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119674u;
            goto label_119674;
        }
    }
    ctx->pc = 0x119648u;
    // 0x119648: 0xc0464aa  jal         func_1192A8
    ctx->pc = 0x119648u;
    SET_GPR_U32(ctx, 31, 0x119650u);
    ctx->pc = 0x11964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119648u;
    // 0x11964c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1192A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1192A8u, 0x119648u, 0x119650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119650u;
label_119650:
    // 0x119650: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x119650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x119654: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119658: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x119658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x11965c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11965cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119660: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x119660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x119664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119668: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11966c: 0x80464a6  j           func_119298
    ctx->pc = 0x11966Cu;
    ctx->pc = 0x119670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11966Cu;
    // 0x119670: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119298u;
    sub_00119298_0x119298(rdram, ctx, runtime); return;
    ctx->pc = 0x119674u;
label_119674:
    // 0x119674: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x119674u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x119678: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x119678u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x11967c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x11967cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x119680: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x119680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x119684: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x119684u;
    {
        const bool branch_taken_0x119684 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x119688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119684u;
        // 0x119688: 0x44802f  dsubu       $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119684) {
            ctx->pc = 0x1196ECu;
            goto label_1196ec;
        }
    }
    ctx->pc = 0x11968Cu;
    // 0x11968c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x11968cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x119690: 0x66037333  daddiu      $v1, $s0, 0x7333
    ctx->pc = 0x119690u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
    // 0x119694: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x119694u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x119698: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x119698u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x11969c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x11969cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1196a0: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1196a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1196a4: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1196a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1196a8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1196A8u;
    {
        const bool branch_taken_0x1196a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196A8u;
        // 0x1196ac: 0x32510003  andi        $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196a8) {
            ctx->pc = 0x1196ECu;
            goto label_1196ec;
        }
    }
    ctx->pc = 0x1196B0u;
    // 0x1196b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1196b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196b4: 0x0  nop
    ctx->pc = 0x1196b4u;
    // NOP
label_1196b8:
    // 0x1196b8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1196b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1196bc: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1196BCu;
    {
        const bool branch_taken_0x1196bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196BCu;
        // 0x1196c0: 0x66037333  daddiu      $v1, $s0, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196bc) {
            ctx->pc = 0x1196F0u;
            goto label_1196f0;
        }
    }
    ctx->pc = 0x1196C4u;
    // 0x1196c4: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1196c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1196c8: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x1196c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1196cc: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x1196ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1196d0: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1196d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1196d4: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1196d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1196d8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1196d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1196dc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1196DCu;
    {
        const bool branch_taken_0x1196dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1196dc) {
            ctx->pc = 0x1196E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1196DCu;
            // 0x1196e0: 0x207102f  dsubu       $v0, $s0, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1196F4u;
            goto label_1196f4;
        }
    }
    ctx->pc = 0x1196E4u;
    // 0x1196e4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1196E4u;
    {
        const bool branch_taken_0x1196e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196E4u;
        // 0x1196e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196e4) {
            ctx->pc = 0x1196B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1196b8;
        }
    }
    ctx->pc = 0x1196ECu;
label_1196ec:
    // 0x1196ec: 0x32510003  andi        $s1, $s2, 0x3
    ctx->pc = 0x1196ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_1196f0:
    // 0x1196f0: 0x207102f  dsubu       $v0, $s0, $a3
    ctx->pc = 0x1196f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
label_1196f4:
    // 0x1196f4: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x1196f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x1196f8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1196F8u;
    {
        const bool branch_taken_0x1196f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196F8u;
        // 0x1196fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196f8) {
            ctx->pc = 0x119748u;
            goto label_119748;
        }
    }
    ctx->pc = 0x119700u;
    // 0x119700: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x119700u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x119704: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x119704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x119708: 0x24047333  addiu       $a0, $zero, 0x7333
    ctx->pc = 0x119708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x11970c: 0xa42016  dsrlv       $a0, $a0, $a1
    ctx->pc = 0x11970cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x119710: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119714: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x119714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x119718: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x119718u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11971c: 0xc0464aa  jal         func_1192A8
    ctx->pc = 0x11971Cu;
    SET_GPR_U32(ctx, 31, 0x119724u);
    ctx->pc = 0x119720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11971Cu;
    // 0x119720: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1192A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1192A8u, 0x11971Cu, 0x119724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119724u;
label_119724:
    // 0x119724: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x119724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x119728: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11972c: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x11972cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x119730: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119734: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x119734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x119738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11973c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11973cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119740: 0x80464a6  j           func_119298
    ctx->pc = 0x119740u;
    ctx->pc = 0x119744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119740u;
    // 0x119744: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119298u;
    sub_00119298_0x119298(rdram, ctx, runtime); return;
    ctx->pc = 0x119748u;
label_119748:
    // 0x119748: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x119748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x11974c: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x11974cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x119750: 0xc0464a6  jal         func_119298
    ctx->pc = 0x119750u;
    SET_GPR_U32(ctx, 31, 0x119758u);
    ctx->pc = 0x119754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119750u;
    // 0x119754: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119298u, 0x119750u, 0x119758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119758u;
label_119758:
    // 0x119758: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x119758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11975c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11975cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119760: 0x902016  dsrlv       $a0, $s0, $a0
    ctx->pc = 0x119760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x119764: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119768: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11976c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x11976cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x119770: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x119770u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x119774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119778: 0x80464aa  j           func_1192A8
    ctx->pc = 0x119778u;
    ctx->pc = 0x11977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119778u;
    // 0x11977c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1192A8u;
    sub_001192A8_0x1192a8(rdram, ctx, runtime); return;
    ctx->pc = 0x119780u;
label_119780:
    // 0x119780: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119784: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119788: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11978c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11978cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119790: 0x3e00008  jr          $ra
    ctx->pc = 0x119790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119790u;
        // 0x119794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119798u;
}
