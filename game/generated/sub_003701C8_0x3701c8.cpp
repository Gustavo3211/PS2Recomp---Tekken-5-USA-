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

// Function: sub_003701C8
// Address: 0x3701c8 - 0x370298
void sub_003701C8_0x3701c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003701C8_0x3701c8");
#endif

    switch (ctx->pc) {
        case 0x3701ecu: goto label_3701ec;
        case 0x370204u: goto label_370204;
        case 0x370240u: goto label_370240;
        default: break;
    }

    ctx->pc = 0x3701c8u;

    // 0x3701c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3701c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3701cc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3701ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3701d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3701d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3701d4: 0x24507450  addiu       $s0, $v0, 0x7450
    ctx->pc = 0x3701d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29776));
    // 0x3701d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3701d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7450u));
    // 0x3701dc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3701DCu;
    {
        const bool branch_taken_0x3701dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3701E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3701DCu;
        // 0x3701e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3701dc) {
            ctx->pc = 0x370204u;
            goto label_370204;
        }
    }
    ctx->pc = 0x3701E4u;
    // 0x3701e4: 0xc0dc6c2  jal         func_371B08
    ctx->pc = 0x3701E4u;
    SET_GPR_U32(ctx, 31, 0x3701ECu);
    ctx->pc = 0x371B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B08u, 0x3701E4u, 0x3701ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701ECu;
label_3701ec:
    // 0x3701ec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3701ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3701f0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3701f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3701f4: 0x24a509f8  addiu       $a1, $a1, 0x9F8
    ctx->pc = 0x3701f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2552));
    // 0x3701f8: 0x24c67540  addiu       $a2, $a2, 0x7540
    ctx->pc = 0x3701f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    // 0x3701fc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3701FCu;
    SET_GPR_U32(ctx, 31, 0x370204u);
    ctx->pc = 0x370200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3701FCu;
    // 0x370200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3701FCu, 0x370204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370204u;
label_370204:
    // 0x370204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37020c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37020cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370210: 0x3e00008  jr          $ra
    ctx->pc = 0x370210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370210u;
        // 0x370214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370218u;
    // 0x370218: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x370218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37021c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x37021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x370220: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x370224: 0x24e30050  addiu       $v1, $a3, 0x50
    ctx->pc = 0x370224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x370228: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x370228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x37022c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x37022cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x370230: 0x24e20058  addiu       $v0, $a3, 0x58
    ctx->pc = 0x370230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 88));
    // 0x370234: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370238: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x370238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x37023c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_370240:
    // 0x370240: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x370240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x370244: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x370244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x370248: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x370248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x37024c: 0x0  nop
    ctx->pc = 0x37024cu;
    // NOP
    // 0x370250: 0x0  nop
    ctx->pc = 0x370250u;
    // NOP
    // 0x370254: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x370254u;
    {
        const bool branch_taken_0x370254 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x370258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370254u;
        // 0x370258: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370254) {
            ctx->pc = 0x370240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370240;
        }
    }
    ctx->pc = 0x37025Cu;
    // 0x37025c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x37025cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x370260: 0x24e20110  addiu       $v0, $a3, 0x110
    ctx->pc = 0x370260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 272));
    // 0x370264: 0x24e60140  addiu       $a2, $a3, 0x140
    ctx->pc = 0x370264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x370268: 0x24e300b8  addiu       $v1, $a3, 0xB8
    ctx->pc = 0x370268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 184));
    // 0x37026c: 0x2484fb18  addiu       $a0, $a0, -0x4E8
    ctx->pc = 0x37026cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966040));
    // 0x370270: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x370270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370274: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370278: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x370278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x37027c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37027cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x370280: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x370280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x370284: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x370284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x370288: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x370288u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x37028c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x37028cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x370290: 0x3e00008  jr          $ra
    ctx->pc = 0x370290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370290u;
        // 0x370294: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370298u;
}
