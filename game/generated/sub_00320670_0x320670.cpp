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

// Function: sub_00320670
// Address: 0x320670 - 0x320788
void sub_00320670_0x320670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320670_0x320670");
#endif

    switch (ctx->pc) {
        case 0x3206ccu: goto label_3206cc;
        case 0x320730u: goto label_320730;
        case 0x320770u: goto label_320770;
        default: break;
    }

    ctx->pc = 0x320670u;

    // 0x320670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x320670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x320674: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x320674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x320678: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x320678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32067c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32067cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x320680: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x320680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x320684: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x320684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x320688: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x320688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x32068c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x32068cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x320690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x320690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x320694: 0x8c424000  lw          $v0, 0x4000($v0)
    ctx->pc = 0x320694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x320698: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x320698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x32069c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32069Cu;
    {
        const bool branch_taken_0x32069c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3206A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32069Cu;
        // 0x3206a0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32069c) {
            ctx->pc = 0x3206ECu;
            goto label_3206ec;
        }
    }
    ctx->pc = 0x3206A4u;
    // 0x3206a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3206a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3206a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3206a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3206ac: 0x8c424004  lw          $v0, 0x4004($v0)
    ctx->pc = 0x3206acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16388)));
    // 0x3206b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3206B0u;
    {
        const bool branch_taken_0x3206b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3206b0) {
            ctx->pc = 0x3206C4u;
            goto label_3206c4;
        }
    }
    ctx->pc = 0x3206B8u;
    // 0x3206b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3206b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3206bc: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x3206bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x3206c0: 0xc42c4008  lwc1        $f12, 0x4008($at)
    ctx->pc = 0x3206c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3206c4:
    // 0x3206c4: 0xc0cfaf8  jal         func_33EBE0
    ctx->pc = 0x3206C4u;
    SET_GPR_U32(ctx, 31, 0x3206CCu);
    ctx->pc = 0x33EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBE0u, 0x3206C4u, 0x3206CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3206CCu;
label_3206cc:
    // 0x3206cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3206ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3206d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3206d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3206d4: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x3206d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3206d8: 0xa0850018  sb          $a1, 0x18($a0)
    ctx->pc = 0x3206d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x3206dc: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x3206dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3206e0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3206E0u;
    {
        const bool branch_taken_0x3206e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3206E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206E0u;
        // 0x3206e4: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206e0) {
            ctx->pc = 0x3206ECu;
            goto label_3206ec;
        }
    }
    ctx->pc = 0x3206E8u;
    // 0x3206e8: 0xa0850019  sb          $a1, 0x19($a0)
    ctx->pc = 0x3206e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 5));
label_3206ec:
    // 0x3206ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3206ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3206f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3206f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3206f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3206F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3206F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206F4u;
        // 0x3206f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3206F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3206FCu;
    // 0x3206fc: 0x0  nop
    ctx->pc = 0x3206fcu;
    // NOP
    // 0x320700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320704: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x320704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x320708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32070c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x32070cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x320710: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x320710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x320714: 0x8c424000  lw          $v0, 0x4000($v0)
    ctx->pc = 0x320714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x320718: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x320718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x32071c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32071Cu;
    {
        const bool branch_taken_0x32071c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32071c) {
            ctx->pc = 0x320720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32071Cu;
            // 0x320720: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320734u;
            goto label_320734;
        }
    }
    ctx->pc = 0x320724u;
    // 0x320724: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x320724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x320728: 0xc0cfaf8  jal         func_33EBE0
    ctx->pc = 0x320728u;
    SET_GPR_U32(ctx, 31, 0x320730u);
    ctx->pc = 0x33EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBE0u, 0x320728u, 0x320730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320730u;
label_320730:
    // 0x320730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320734:
    // 0x320734: 0x3e00008  jr          $ra
    ctx->pc = 0x320734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320734u;
        // 0x320738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32073Cu;
    // 0x32073c: 0x0  nop
    ctx->pc = 0x32073cu;
    // NOP
    // 0x320740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320744: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x320744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x320748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32074c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x32074cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x320750: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x320750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x320754: 0x8c424000  lw          $v0, 0x4000($v0)
    ctx->pc = 0x320754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x320758: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x320758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x32075c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32075Cu;
    {
        const bool branch_taken_0x32075c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32075Cu;
        // 0x320760: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32075c) {
            ctx->pc = 0x320778u;
            goto label_320778;
        }
    }
    ctx->pc = 0x320764u;
    // 0x320764: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x320764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x320768: 0xc0cfaf8  jal         func_33EBE0
    ctx->pc = 0x320768u;
    SET_GPR_U32(ctx, 31, 0x320770u);
    ctx->pc = 0x33EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBE0u, 0x320768u, 0x320770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320770u;
label_320770:
    // 0x320770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320774: 0xa0430018  sb          $v1, 0x18($v0)
    ctx->pc = 0x320774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 3));
label_320778:
    // 0x320778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32077c: 0x3e00008  jr          $ra
    ctx->pc = 0x32077Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32077Cu;
        // 0x320780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32077Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320784u;
    // 0x320784: 0x0  nop
    ctx->pc = 0x320784u;
    // NOP
    ctx->pc = 0x320788u;
}
