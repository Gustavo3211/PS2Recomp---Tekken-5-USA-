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

// Function: sub_00503688
// Address: 0x503688 - 0x5037b8
void sub_00503688_0x503688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503688_0x503688");
#endif

    switch (ctx->pc) {
        case 0x5036acu: goto label_5036ac;
        case 0x5036c0u: goto label_5036c0;
        case 0x503710u: goto label_503710;
        case 0x503750u: goto label_503750;
        default: break;
    }

    ctx->pc = 0x503688u;

    // 0x503688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50368c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x503690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x503690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x503694: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x503694u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x503698: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x503698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x50369c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x50369cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x5036a0: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x5036a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D688u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D688u, _value); } while (0);
    // 0x5036a4: 0xc1233c0  jal         func_48CF00
    ctx->pc = 0x5036A4u;
    SET_GPR_U32(ctx, 31, 0x5036ACu);
    ctx->pc = 0x5036A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5036A4u;
    // 0x5036a8: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF00u, 0x5036A4u, 0x5036ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5036ACu;
label_5036ac:
    // 0x5036ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5036acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5036b0: 0xa6022210  sh          $v0, 0x2210($s0)
    ctx->pc = 0x5036b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8720), (uint16_t)GPR_U32(ctx, 2));
    // 0x5036b4: 0xa6000096  sh          $zero, 0x96($s0)
    ctx->pc = 0x5036b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x5036b8: 0xc122cc6  jal         func_48B318
    ctx->pc = 0x5036B8u;
    SET_GPR_U32(ctx, 31, 0x5036C0u);
    ctx->pc = 0x5036BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5036B8u;
    // 0x5036bc: 0xa600001a  sh          $zero, 0x1A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B318u, 0x5036B8u, 0x5036C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5036C0u;
label_5036c0:
    // 0x5036c0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x5036c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x5036c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5036c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5036c8: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x5036c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x5036cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x5036ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5036d0: 0xac62cfb0  sw          $v0, -0x3050($v1)
    ctx->pc = 0x5036d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x56CFB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CFB0u, _value); } while (0);
    // 0x5036d4: 0x3e00008  jr          $ra
    ctx->pc = 0x5036D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5036D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5036D4u;
        // 0x5036d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5036D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5036DCu;
    // 0x5036dc: 0x0  nop
    ctx->pc = 0x5036dcu;
    // NOP
    // 0x5036e0: 0x3e00008  jr          $ra
    ctx->pc = 0x5036E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5036E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5036E0u;
        // 0x5036e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5036E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5036E8u;
    // 0x5036e8: 0x3e00008  jr          $ra
    ctx->pc = 0x5036E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5036E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5036F0u;
    // 0x5036f0: 0x3e00008  jr          $ra
    ctx->pc = 0x5036F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5036F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5036F0u;
        // 0x5036f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5036F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5036F8u;
    // 0x5036f8: 0x3e00008  jr          $ra
    ctx->pc = 0x5036F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5036F8u;
        // 0x5036fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5036F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503700u;
    // 0x503700: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x503700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x503704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x503704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503708: 0x2446a880  addiu       $a2, $v0, -0x5780
    ctx->pc = 0x503708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944896));
    // 0x50370c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x50370cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_503710:
    // 0x503710: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x503710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x503714: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x503714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x503718: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x503718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x50371c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x50371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x503720: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x503720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x503724: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x503724u;
    {
        const bool branch_taken_0x503724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x503728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503724u;
        // 0x503728: 0x28a40010  slti        $a0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x503724) {
            ctx->pc = 0x503738u;
            goto label_503738;
        }
    }
    ctx->pc = 0x50372Cu;
    // 0x50372c: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x50372Cu;
    {
        const bool branch_taken_0x50372c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x50372c) {
            ctx->pc = 0x503730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50372Cu;
            // 0x503730: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x503710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503710;
        }
    }
    ctx->pc = 0x503734u;
    // 0x503734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x503734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_503738:
    // 0x503738: 0x3e00008  jr          $ra
    ctx->pc = 0x503738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503740u;
    // 0x503740: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x503740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x503744: 0x2442a740  addiu       $v0, $v0, -0x58C0
    ctx->pc = 0x503744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944576));
    // 0x503748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x503748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50374c: 0x0  nop
    ctx->pc = 0x50374cu;
    // NOP
label_503750:
    // 0x503750: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x503750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x503754: 0x0  nop
    ctx->pc = 0x503754u;
    // NOP
    // 0x503758: 0x0  nop
    ctx->pc = 0x503758u;
    // NOP
    // 0x50375c: 0x0  nop
    ctx->pc = 0x50375cu;
    // NOP
    // 0x503760: 0x0  nop
    ctx->pc = 0x503760u;
    // NOP
    // 0x503764: 0x5465fffa  bnel        $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x503764u;
    {
        const bool branch_taken_0x503764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x503764) {
            ctx->pc = 0x503768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x503764u;
            // 0x503768: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x503750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503750;
        }
    }
    ctx->pc = 0x50376Cu;
    // 0x50376c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x50376cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x503770: 0x3e00008  jr          $ra
    ctx->pc = 0x503770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503770u;
        // 0x503774: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503778u;
    // 0x503778: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x503778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50377c: 0x2463a740  addiu       $v1, $v1, -0x58C0
    ctx->pc = 0x50377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944576));
    // 0x503780: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x503780u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EA740u));
    // 0x503784: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x503784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x503788: 0x3e00008  jr          $ra
    ctx->pc = 0x503788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503788u;
        // 0x50378c: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503790u;
    // 0x503790: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x503790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x503794: 0x2444a740  addiu       $a0, $v0, -0x58C0
    ctx->pc = 0x503794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944576));
    // 0x503798: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x503798u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EA740u));
    // 0x50379c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50379Cu;
    {
        const bool branch_taken_0x50379c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x50379c) {
            ctx->pc = 0x5037B0u;
            goto label_5037b0;
        }
    }
    ctx->pc = 0x5037A4u;
    // 0x5037a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x5037a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5037a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x5037a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x5037ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x5037acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_5037b0:
    // 0x5037b0: 0x3e00008  jr          $ra
    ctx->pc = 0x5037B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5037B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5037B8u;
}
