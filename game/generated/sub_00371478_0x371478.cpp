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

// Function: sub_00371478
// Address: 0x371478 - 0x371540
void sub_00371478_0x371478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371478_0x371478");
#endif

    switch (ctx->pc) {
        case 0x37149cu: goto label_37149c;
        case 0x3714b4u: goto label_3714b4;
        case 0x371524u: goto label_371524;
        default: break;
    }

    ctx->pc = 0x371478u;

    // 0x371478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37147c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x37147cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x371480: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371484: 0x24507520  addiu       $s0, $v0, 0x7520
    ctx->pc = 0x371484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29984));
    // 0x371488: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7520u));
    // 0x37148c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37148Cu;
    {
        const bool branch_taken_0x37148c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37148Cu;
        // 0x371490: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37148c) {
            ctx->pc = 0x3714B4u;
            goto label_3714b4;
        }
    }
    ctx->pc = 0x371494u;
    // 0x371494: 0xc0dc47c  jal         func_3711F0
    ctx->pc = 0x371494u;
    SET_GPR_U32(ctx, 31, 0x37149Cu);
    ctx->pc = 0x3711F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3711F0u, 0x371494u, 0x37149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37149Cu;
label_37149c:
    // 0x37149c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37149cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3714a0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3714a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3714a4: 0x24a50c88  addiu       $a1, $a1, 0xC88
    ctx->pc = 0x3714a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3208));
    // 0x3714a8: 0x24c67530  addiu       $a2, $a2, 0x7530
    ctx->pc = 0x3714a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30000));
    // 0x3714ac: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3714ACu;
    SET_GPR_U32(ctx, 31, 0x3714B4u);
    ctx->pc = 0x3714B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3714ACu;
    // 0x3714b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3714ACu, 0x3714B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3714B4u;
label_3714b4:
    // 0x3714b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3714b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3714b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3714b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3714bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3714bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3714c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3714C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3714C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714C0u;
        // 0x3714c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3714C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3714C8u;
    // 0x3714c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3714c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3714cc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3714ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3714d0: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x3714d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x3714d4: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x3714d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x3714d8: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x3714d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x3714dc: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x3714dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x3714e0: 0x24c60748  addiu       $a2, $a2, 0x748
    ctx->pc = 0x3714e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1864));
    // 0x3714e4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3714e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3714e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3714e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3714ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3714ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3714f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3714f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3714f4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x3714f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x3714f8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3714f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3714fc: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x3714fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x371500: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x371500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x371504: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x371504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x371508: 0x3e00008  jr          $ra
    ctx->pc = 0x371508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371508u;
        // 0x37150c: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371510u;
    // 0x371510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371518: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x371518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37151c: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x37151Cu;
    SET_GPR_U32(ctx, 31, 0x371524u);
    ctx->pc = 0x371520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37151Cu;
    // 0x371520: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x37151Cu, 0x371524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371524u;
label_371524:
    // 0x371524: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x371524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x371528: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37152c: 0x24630748  addiu       $v1, $v1, 0x748
    ctx->pc = 0x37152cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1864));
    // 0x371530: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x371530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x371534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371538: 0x3e00008  jr          $ra
    ctx->pc = 0x371538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371538u;
        // 0x37153c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371540u;
}
