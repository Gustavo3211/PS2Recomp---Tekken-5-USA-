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

// Function: sub_002CA2D0
// Address: 0x2ca2d0 - 0x2ca3f0
void sub_002CA2D0_0x2ca2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA2D0_0x2ca2d0");
#endif

    switch (ctx->pc) {
        case 0x2ca2ecu: goto label_2ca2ec;
        case 0x2ca32cu: goto label_2ca32c;
        case 0x2ca344u: goto label_2ca344;
        case 0x2ca350u: goto label_2ca350;
        case 0x2ca368u: goto label_2ca368;
        case 0x2ca398u: goto label_2ca398;
        default: break;
    }

    ctx->pc = 0x2ca2d0u;

    // 0x2ca2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca2d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca2d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca2dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ca2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ca2e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ca2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ca2e4: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2CA2E4u;
    SET_GPR_U32(ctx, 31, 0x2CA2ECu);
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2CA2E4u, 0x2CA2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA2ECu;
label_2ca2ec:
    // 0x2ca2ec: 0x8f91bb18  lw          $s1, -0x44E8($gp)
    ctx->pc = 0x2ca2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2ca2f0: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2CA2F0u;
    {
        const bool branch_taken_0x2ca2f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2F0u;
        // 0x2ca2f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca2f0) {
            ctx->pc = 0x2CA3D4u;
            goto label_2ca3d4;
        }
    }
    ctx->pc = 0x2CA2F8u;
    // 0x2ca2f8: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2ca2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2ca2fc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2ca2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ca300: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2ca300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ca304: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ca304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ca308: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ca308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ca30c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ca30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ca310: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2ca310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2ca314: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ca314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ca318: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x2ca318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x2ca31c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca320: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2ca320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ca324: 0xc04a151  jal         func_128544
    ctx->pc = 0x2CA324u;
    SET_GPR_U32(ctx, 31, 0x2CA32Cu);
    ctx->pc = 0x2CA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA324u;
    // 0x2ca328: 0x245203a4  addiu       $s2, $v0, 0x3A4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 932));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2CA324u, 0x2CA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA32Cu;
label_2ca32c:
    // 0x2ca32c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x2ca32cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2ca330: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2ca330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2ca334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca338: 0x248401a4  addiu       $a0, $a0, 0x1A4
    ctx->pc = 0x2ca338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    // 0x2ca33c: 0xc04a151  jal         func_128544
    ctx->pc = 0x2CA33Cu;
    SET_GPR_U32(ctx, 31, 0x2CA344u);
    ctx->pc = 0x2CA340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA33Cu;
    // 0x2ca340: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2CA33Cu, 0x2CA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA344u;
label_2ca344:
    // 0x2ca344: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ca344u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca348: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2ca348u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca34c: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2ca34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2ca350:
    // 0x2ca350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca354: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2ca354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2ca358: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ca358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ca35c: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x2ca35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ca360: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x2ca360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2ca364: 0x0  nop
    ctx->pc = 0x2ca364u;
    // NOP
label_2ca368:
    // 0x2ca368: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2ca368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2ca36c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2ca36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2ca370: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ca370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ca374: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ca374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ca378: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x2ca378u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ca37c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2ca37cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ca380: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CA380u;
    {
        const bool branch_taken_0x2ca380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA380u;
        // 0x2ca384: 0xa08a0000  sb          $t2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca380) {
            ctx->pc = 0x2CA368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca368;
        }
    }
    ctx->pc = 0x2CA388u;
    // 0x2ca388: 0x24c7000f  addiu       $a3, $a2, 0xF
    ctx->pc = 0x2ca388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2ca38c: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x2ca38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2ca390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca394: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ca394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ca398:
    // 0x2ca398: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2ca398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ca39c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2ca39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2ca3a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ca3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ca3a4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2ca3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca3a8: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x2ca3a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ca3ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CA3ACu;
    {
        const bool branch_taken_0x2ca3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3ACu;
        // 0x2ca3b0: 0xa0880000  sb          $t0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3ac) {
            ctx->pc = 0x2CA398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca398;
        }
    }
    ctx->pc = 0x2CA3B4u;
    // 0x2ca3b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2ca3b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2ca3b8: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x2ca3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ca3bc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2CA3BCu;
    {
        const bool branch_taken_0x2ca3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3BCu;
        // 0x2ca3c0: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3bc) {
            ctx->pc = 0x2CA350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca350;
        }
    }
    ctx->pc = 0x2CA3C4u;
    // 0x2ca3c4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2ca3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x2ca3c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca3cc: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x2ca3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x2ca3d0: 0xac624520  sw          $v0, 0x4520($v1)
    ctx->pc = 0x2ca3d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E4520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E4520u, _value); } while (0);
label_2ca3d4:
    // 0x2ca3d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca3d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca3d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca3dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ca3dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca3e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ca3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ca3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3E4u;
        // 0x2ca3e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA3ECu;
    // 0x2ca3ec: 0x0  nop
    ctx->pc = 0x2ca3ecu;
    // NOP
    ctx->pc = 0x2ca3f0u;
}
