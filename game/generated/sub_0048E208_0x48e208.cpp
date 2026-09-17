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

// Function: sub_0048E208
// Address: 0x48e208 - 0x48e578
void sub_0048E208_0x48e208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E208_0x48e208");
#endif

    switch (ctx->pc) {
        case 0x48e274u: goto label_48e274;
        case 0x48e2c8u: goto label_48e2c8;
        case 0x48e2d8u: goto label_48e2d8;
        case 0x48e310u: goto label_48e310;
        case 0x48e320u: goto label_48e320;
        case 0x48e330u: goto label_48e330;
        case 0x48e350u: goto label_48e350;
        case 0x48e370u: goto label_48e370;
        case 0x48e380u: goto label_48e380;
        case 0x48e390u: goto label_48e390;
        case 0x48e3a0u: goto label_48e3a0;
        case 0x48e3b0u: goto label_48e3b0;
        case 0x48e3c0u: goto label_48e3c0;
        case 0x48e3d0u: goto label_48e3d0;
        case 0x48e3f8u: goto label_48e3f8;
        case 0x48e410u: goto label_48e410;
        case 0x48e430u: goto label_48e430;
        case 0x48e440u: goto label_48e440;
        case 0x48e450u: goto label_48e450;
        case 0x48e4dcu: goto label_48e4dc;
        case 0x48e4f4u: goto label_48e4f4;
        case 0x48e508u: goto label_48e508;
        case 0x48e530u: goto label_48e530;
        case 0x48e568u: goto label_48e568;
        default: break;
    }

    ctx->pc = 0x48e208u;

    // 0x48e208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48e208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48e20c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x48e20cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x48e210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48e210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48e214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48e214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e218: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48e218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48e21c: 0x24c3d680  addiu       $v1, $a2, -0x2980
    ctx->pc = 0x48e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48e220: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x48e220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e224: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x48e224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x48e228: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x48e228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48e22c: 0x2ca20012  sltiu       $v0, $a1, 0x12
    ctx->pc = 0x48e22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x48e230: 0x104000d1  beqz        $v0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x48E230u;
    {
        const bool branch_taken_0x48e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E230u;
        // 0x48e234: 0xa4642264  sh          $a0, 0x2264($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8804), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e230) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E238u;
    // 0x48e238: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x48e238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x48e23c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e240: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48e240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48e244: 0x8c639ef0  lw          $v1, -0x6110($v1)
    ctx->pc = 0x48e244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942448)));
    // 0x48e248: 0x600008  jr          $v1
    ctx->pc = 0x48E248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48E250u: goto label_48e250;
            case 0x48E268u: goto label_48e268;
            case 0x48E280u: goto label_48e280;
            case 0x48E2E0u: goto label_48e2e0;
            case 0x48E458u: goto label_48e458;
            case 0x48E470u: goto label_48e470;
            case 0x48E488u: goto label_48e488;
            case 0x48E4A0u: goto label_48e4a0;
            case 0x48E4C0u: goto label_48e4c0;
            case 0x48E4D0u: goto label_48e4d0;
            case 0x48E4E8u: goto label_48e4e8;
            case 0x48E500u: goto label_48e500;
            case 0x48E528u: goto label_48e528;
            case 0x48E538u: goto label_48e538;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E248u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48E250u;
label_48e250:
    // 0x48e250: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x48e250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e254: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x48e254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x48e258: 0x24c2d680  addiu       $v0, $a2, -0x2980
    ctx->pc = 0x48e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48e25c: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x48E25Cu;
    {
        const bool branch_taken_0x48e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E25Cu;
        // 0x48e260: 0xa4432266  sh          $v1, 0x2266($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8806), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e25c) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E264u;
    // 0x48e264: 0x0  nop
    ctx->pc = 0x48e264u;
    // NOP
label_48e268:
    // 0x48e268: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x48e268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e26c: 0xc123be6  jal         func_48EF98
    ctx->pc = 0x48E26Cu;
    SET_GPR_U32(ctx, 31, 0x48E274u);
    ctx->pc = 0x48E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E26Cu;
    // 0x48e270: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF98u, 0x48E26Cu, 0x48E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E274u;
label_48e274:
    // 0x48e274: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x48E274u;
    {
        const bool branch_taken_0x48e274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E274u;
        // 0x48e278: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e274) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E27Cu;
    // 0x48e27c: 0x0  nop
    ctx->pc = 0x48e27cu;
    // NOP
label_48e280:
    // 0x48e280: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x48e280u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e284: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x48e284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x48e288: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x48e288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e28c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x48e28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x48e290: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x48e290u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e294: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x48e294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x48e298: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x48e298u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e29c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x48e29cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x48e2a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x48e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48e2a4: 0x31f40  sll         $v1, $v1, 29
    ctx->pc = 0x48e2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 29));
    // 0x48e2a8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x48e2a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x48e2ac: 0x10e40008  beq         $a3, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48E2ACu;
    {
        const bool branch_taken_0x48e2ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x48E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E2ACu;
        // 0x48e2b0: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e2ac) {
            ctx->pc = 0x48E2D0u;
            goto label_48e2d0;
        }
    }
    ctx->pc = 0x48E2B4u;
    // 0x48e2b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x48e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48e2b8: 0x50e200b0  beql        $a3, $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x48E2B8u;
    {
        const bool branch_taken_0x48e2b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x48e2b8) {
            ctx->pc = 0x48E2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48E2B8u;
            // 0x48e2bc: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E2C0u;
    // 0x48e2c0: 0xc123b78  jal         func_48EDE0
    ctx->pc = 0x48E2C0u;
    SET_GPR_U32(ctx, 31, 0x48E2C8u);
    ctx->pc = 0x48E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E2C0u;
    // 0x48e2c4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EDE0u, 0x48E2C0u, 0x48E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E2C8u;
label_48e2c8:
    // 0x48e2c8: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x48E2C8u;
    {
        const bool branch_taken_0x48e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E2C8u;
        // 0x48e2cc: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e2c8) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E2D0u;
label_48e2d0:
    // 0x48e2d0: 0xc140eda  jal         func_503B68
    ctx->pc = 0x48E2D0u;
    SET_GPR_U32(ctx, 31, 0x48E2D8u);
    ctx->pc = 0x503B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503B68u, 0x48E2D0u, 0x48E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E2D8u;
label_48e2d8:
    // 0x48e2d8: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x48E2D8u;
    {
        const bool branch_taken_0x48e2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E2D8u;
        // 0x48e2dc: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e2d8) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E2E0u;
label_48e2e0:
    // 0x48e2e0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x48e2e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e2e4: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x48e2e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x48e2e8: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x48E2E8u;
    {
        const bool branch_taken_0x48e2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E2E8u;
        // 0x48e2ec: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e2e8) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E2F0u;
    // 0x48e2f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x48e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48e2f4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e2f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48e2fc: 0x8c639f40  lw          $v1, -0x60C0($v1)
    ctx->pc = 0x48e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942528)));
    // 0x48e300: 0x600008  jr          $v1
    ctx->pc = 0x48E300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48E308u: goto label_48e308;
            case 0x48E318u: goto label_48e318;
            case 0x48E328u: goto label_48e328;
            case 0x48E338u: goto label_48e338;
            case 0x48E348u: goto label_48e348;
            case 0x48E358u: goto label_48e358;
            case 0x48E368u: goto label_48e368;
            case 0x48E378u: goto label_48e378;
            case 0x48E388u: goto label_48e388;
            case 0x48E398u: goto label_48e398;
            case 0x48E3A8u: goto label_48e3a8;
            case 0x48E3B8u: goto label_48e3b8;
            case 0x48E3C8u: goto label_48e3c8;
            case 0x48E3D8u: goto label_48e3d8;
            case 0x48E3F0u: goto label_48e3f0;
            case 0x48E400u: goto label_48e400;
            case 0x48E418u: goto label_48e418;
            case 0x48E428u: goto label_48e428;
            case 0x48E438u: goto label_48e438;
            case 0x48E448u: goto label_48e448;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E300u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48E308u;
label_48e308:
    // 0x48e308: 0xc125e94  jal         func_497A50
    ctx->pc = 0x48E308u;
    SET_GPR_U32(ctx, 31, 0x48E310u);
    ctx->pc = 0x497A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497A50u, 0x48E308u, 0x48E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E310u;
label_48e310:
    // 0x48e310: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x48E310u;
    {
        const bool branch_taken_0x48e310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E310u;
        // 0x48e314: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e310) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E318u;
label_48e318:
    // 0x48e318: 0xc125e90  jal         func_497A40
    ctx->pc = 0x48E318u;
    SET_GPR_U32(ctx, 31, 0x48E320u);
    ctx->pc = 0x497A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497A40u, 0x48E318u, 0x48E320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E320u;
label_48e320:
    // 0x48e320: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x48E320u;
    {
        const bool branch_taken_0x48e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E320u;
        // 0x48e324: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e320) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E328u;
label_48e328:
    // 0x48e328: 0xc129b36  jal         func_4A6CD8
    ctx->pc = 0x48E328u;
    SET_GPR_U32(ctx, 31, 0x48E330u);
    ctx->pc = 0x4A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6CD8u, 0x48E328u, 0x48E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E330u;
label_48e330:
    // 0x48e330: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x48E330u;
    {
        const bool branch_taken_0x48e330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E330u;
        // 0x48e334: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e330) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E338u;
label_48e338:
    // 0x48e338: 0x24c3d680  addiu       $v1, $a2, -0x2980
    ctx->pc = 0x48e338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48e33c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x48E33Cu;
    {
        const bool branch_taken_0x48e33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E33Cu;
        // 0x48e340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e33c) {
            ctx->pc = 0x48E408u;
            goto label_48e408;
        }
    }
    ctx->pc = 0x48E344u;
    // 0x48e344: 0x0  nop
    ctx->pc = 0x48e344u;
    // NOP
label_48e348:
    // 0x48e348: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x48E348u;
    SET_GPR_U32(ctx, 31, 0x48E350u);
    ctx->pc = 0x48E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E348u;
    // 0x48e34c: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x48E348u, 0x48E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E350u;
label_48e350:
    // 0x48e350: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x48E350u;
    {
        const bool branch_taken_0x48e350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E350u;
        // 0x48e354: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e350) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E358u;
label_48e358:
    // 0x48e358: 0x24c3d680  addiu       $v1, $a2, -0x2980
    ctx->pc = 0x48e358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48e35c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e360: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x48E360u;
    {
        const bool branch_taken_0x48e360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E360u;
        // 0x48e364: 0xa462007e  sh          $v0, 0x7E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 126), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e360) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E368u;
label_48e368:
    // 0x48e368: 0xc126098  jal         func_498260
    ctx->pc = 0x48E368u;
    SET_GPR_U32(ctx, 31, 0x48E370u);
    ctx->pc = 0x498260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498260u, 0x48E368u, 0x48E370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E370u;
label_48e370:
    // 0x48e370: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x48E370u;
    {
        const bool branch_taken_0x48e370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E370u;
        // 0x48e374: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e370) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E378u;
label_48e378:
    // 0x48e378: 0xc128028  jal         func_4A00A0
    ctx->pc = 0x48E378u;
    SET_GPR_U32(ctx, 31, 0x48E380u);
    ctx->pc = 0x48E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E378u;
    // 0x48e37c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A00A0u, 0x48E378u, 0x48E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E380u;
label_48e380:
    // 0x48e380: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x48E380u;
    {
        const bool branch_taken_0x48e380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E380u;
        // 0x48e384: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e380) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E388u;
label_48e388:
    // 0x48e388: 0xc128028  jal         func_4A00A0
    ctx->pc = 0x48E388u;
    SET_GPR_U32(ctx, 31, 0x48E390u);
    ctx->pc = 0x48E38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E388u;
    // 0x48e38c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A00A0u, 0x48E388u, 0x48E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E390u;
label_48e390:
    // 0x48e390: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x48E390u;
    {
        const bool branch_taken_0x48e390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E390u;
        // 0x48e394: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e390) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E398u;
label_48e398:
    // 0x48e398: 0xc1298d6  jal         func_4A6358
    ctx->pc = 0x48E398u;
    SET_GPR_U32(ctx, 31, 0x48E3A0u);
    ctx->pc = 0x4A6358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6358u, 0x48E398u, 0x48E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E3A0u;
label_48e3a0:
    // 0x48e3a0: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x48E3A0u;
    {
        const bool branch_taken_0x48e3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E3A0u;
        // 0x48e3a4: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e3a0) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E3A8u;
label_48e3a8:
    // 0x48e3a8: 0xc1298c6  jal         func_4A6318
    ctx->pc = 0x48E3A8u;
    SET_GPR_U32(ctx, 31, 0x48E3B0u);
    ctx->pc = 0x4A6318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6318u, 0x48E3A8u, 0x48E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E3B0u;
label_48e3b0:
    // 0x48e3b0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x48E3B0u;
    {
        const bool branch_taken_0x48e3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E3B0u;
        // 0x48e3b4: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e3b0) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E3B8u;
label_48e3b8:
    // 0x48e3b8: 0xc127b98  jal         func_49EE60
    ctx->pc = 0x48E3B8u;
    SET_GPR_U32(ctx, 31, 0x48E3C0u);
    ctx->pc = 0x49EE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EE60u, 0x48E3B8u, 0x48E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E3C0u;
label_48e3c0:
    // 0x48e3c0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x48E3C0u;
    {
        const bool branch_taken_0x48e3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E3C0u;
        // 0x48e3c4: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e3c0) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E3C8u;
label_48e3c8:
    // 0x48e3c8: 0xc127b92  jal         func_49EE48
    ctx->pc = 0x48E3C8u;
    SET_GPR_U32(ctx, 31, 0x48E3D0u);
    ctx->pc = 0x49EE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EE48u, 0x48E3C8u, 0x48E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E3D0u;
label_48e3d0:
    // 0x48e3d0: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x48E3D0u;
    {
        const bool branch_taken_0x48e3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E3D0u;
        // 0x48e3d4: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e3d0) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E3D8u;
label_48e3d8:
    // 0x48e3d8: 0x24c3d680  addiu       $v1, $a2, -0x2980
    ctx->pc = 0x48e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48e3dc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x48e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48e3e0: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x48e3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x48e3e4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x48E3E4u;
    {
        const bool branch_taken_0x48e3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E3E4u;
        // 0x48e3e8: 0xa460220a  sh          $zero, 0x220A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8714), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e3e4) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E3ECu;
    // 0x48e3ec: 0x0  nop
    ctx->pc = 0x48e3ecu;
    // NOP
label_48e3f0:
    // 0x48e3f0: 0xc127782  jal         func_49DE08
    ctx->pc = 0x48E3F0u;
    SET_GPR_U32(ctx, 31, 0x48E3F8u);
    ctx->pc = 0x49DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DE08u, 0x48E3F0u, 0x48E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E3F8u;
label_48e3f8:
    // 0x48e3f8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x48E3F8u;
    {
        const bool branch_taken_0x48e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E3F8u;
        // 0x48e3fc: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e3f8) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E400u;
label_48e400:
    // 0x48e400: 0x24c3d680  addiu       $v1, $a2, -0x2980
    ctx->pc = 0x48e400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48e404: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x48e404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_48e408:
    // 0x48e408: 0xc122cc6  jal         func_48B318
    ctx->pc = 0x48E408u;
    SET_GPR_U32(ctx, 31, 0x48E410u);
    ctx->pc = 0x48E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E408u;
    // 0x48e40c: 0xa4620096  sh          $v0, 0x96($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B318u, 0x48E408u, 0x48E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E410u;
label_48e410:
    // 0x48e410: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x48E410u;
    {
        const bool branch_taken_0x48e410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E410u;
        // 0x48e414: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e410) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E418u;
label_48e418:
    // 0x48e418: 0x24c3d680  addiu       $v1, $a2, -0x2980
    ctx->pc = 0x48e418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48e41c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x48e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x48e420: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x48E420u;
    {
        const bool branch_taken_0x48e420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E420u;
        // 0x48e424: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e420) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E428u;
label_48e428:
    // 0x48e428: 0xc1287a8  jal         func_4A1EA0
    ctx->pc = 0x48E428u;
    SET_GPR_U32(ctx, 31, 0x48E430u);
    ctx->pc = 0x4A1EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1EA0u, 0x48E428u, 0x48E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E430u;
label_48e430:
    // 0x48e430: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x48E430u;
    {
        const bool branch_taken_0x48e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E430u;
        // 0x48e434: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e430) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E438u;
label_48e438:
    // 0x48e438: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x48E438u;
    SET_GPR_U32(ctx, 31, 0x48E440u);
    ctx->pc = 0x48E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E438u;
    // 0x48e43c: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x48E438u, 0x48E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E440u;
label_48e440:
    // 0x48e440: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x48E440u;
    {
        const bool branch_taken_0x48e440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E440u;
        // 0x48e444: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e440) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E448u;
label_48e448:
    // 0x48e448: 0xc1289c4  jal         func_4A2710
    ctx->pc = 0x48E448u;
    SET_GPR_U32(ctx, 31, 0x48E450u);
    ctx->pc = 0x4A2710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2710u, 0x48E448u, 0x48E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E450u;
label_48e450:
    // 0x48e450: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x48E450u;
    {
        const bool branch_taken_0x48e450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E450u;
        // 0x48e454: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e450) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E458u;
label_48e458:
    // 0x48e458: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x48e458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e45c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x48e45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x48e460: 0x24c2d680  addiu       $v0, $a2, -0x2980
    ctx->pc = 0x48e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48e464: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x48E464u;
    {
        const bool branch_taken_0x48e464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E464u;
        // 0x48e468: 0xa4432292  sh          $v1, 0x2292($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8850), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e464) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E46Cu;
    // 0x48e46c: 0x0  nop
    ctx->pc = 0x48e46cu;
    // NOP
label_48e470:
    // 0x48e470: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x48e470u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e474: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x48e474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x48e478: 0x24c2d680  addiu       $v0, $a2, -0x2980
    ctx->pc = 0x48e478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48e47c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x48E47Cu;
    {
        const bool branch_taken_0x48e47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E47Cu;
        // 0x48e480: 0xa443232a  sh          $v1, 0x232A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 9002), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e47c) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E484u;
    // 0x48e484: 0x0  nop
    ctx->pc = 0x48e484u;
    // NOP
label_48e488:
    // 0x48e488: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x48e488u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e48c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x48e48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x48e490: 0x24c2d680  addiu       $v0, $a2, -0x2980
    ctx->pc = 0x48e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48e494: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x48E494u;
    {
        const bool branch_taken_0x48e494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E494u;
        // 0x48e498: 0xa443220c  sh          $v1, 0x220C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8716), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e494) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E49Cu;
    // 0x48e49c: 0x0  nop
    ctx->pc = 0x48e49cu;
    // NOP
label_48e4a0:
    // 0x48e4a0: 0x24c4d680  addiu       $a0, $a2, -0x2980
    ctx->pc = 0x48e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48e4a4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x48e4a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e4a8: 0x848222b8  lh          $v0, 0x22B8($a0)
    ctx->pc = 0x48e4a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8888)));
    // 0x48e4ac: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x48E4ACu;
    {
        const bool branch_taken_0x48e4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x48E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E4ACu;
        // 0x48e4b0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e4ac) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E4B4u;
    // 0x48e4b4: 0x24028fff  addiu       $v0, $zero, -0x7001
    ctx->pc = 0x48e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294938623));
    // 0x48e4b8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x48E4B8u;
    {
        const bool branch_taken_0x48e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E4B8u;
        // 0x48e4bc: 0xa4822292  sh          $v0, 0x2292($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8850), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e4b8) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E4C0u;
label_48e4c0:
    // 0x48e4c0: 0x24c3d680  addiu       $v1, $a2, -0x2980
    ctx->pc = 0x48e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48e4c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x48e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x48e4c8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x48E4C8u;
    {
        const bool branch_taken_0x48e4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E4C8u;
        // 0x48e4cc: 0xa4622268  sh          $v0, 0x2268($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8808), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e4c8) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E4D0u;
label_48e4d0:
    // 0x48e4d0: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x48e4d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e4d4: 0xc1296be  jal         func_4A5AF8
    ctx->pc = 0x48E4D4u;
    SET_GPR_U32(ctx, 31, 0x48E4DCu);
    ctx->pc = 0x48E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E4D4u;
    // 0x48e4d8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5AF8u, 0x48E4D4u, 0x48E4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E4DCu;
label_48e4dc:
    // 0x48e4dc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x48E4DCu;
    {
        const bool branch_taken_0x48e4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E4DCu;
        // 0x48e4e0: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e4dc) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E4E4u;
    // 0x48e4e4: 0x0  nop
    ctx->pc = 0x48e4e4u;
    // NOP
label_48e4e8:
    // 0x48e4e8: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x48e4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e4ec: 0xc126670  jal         func_4999C0
    ctx->pc = 0x48E4ECu;
    SET_GPR_U32(ctx, 31, 0x48E4F4u);
    ctx->pc = 0x48E4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E4ECu;
    // 0x48e4f0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4999C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4999C0u, 0x48E4ECu, 0x48E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E4F4u;
label_48e4f4:
    // 0x48e4f4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x48E4F4u;
    {
        const bool branch_taken_0x48e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E4F4u;
        // 0x48e4f8: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e4f4) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E4FCu;
    // 0x48e4fc: 0x0  nop
    ctx->pc = 0x48e4fcu;
    // NOP
label_48e500:
    // 0x48e500: 0xc1232f6  jal         func_48CBD8
    ctx->pc = 0x48E500u;
    SET_GPR_U32(ctx, 31, 0x48E508u);
    ctx->pc = 0x48CBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBD8u, 0x48E500u, 0x48E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E508u;
label_48e508:
    // 0x48e508: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x48e508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e50c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x48e50cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x48e510: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x48e510u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x48e514: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x48e514u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e518: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x48e518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x48e51c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x48E51Cu;
    {
        const bool branch_taken_0x48e51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E51Cu;
        // 0x48e520: 0xa444002e  sh          $a0, 0x2E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e51c) {
            ctx->pc = 0x48E578u;
            return;
        }
    }
    ctx->pc = 0x48E524u;
    // 0x48e524: 0x0  nop
    ctx->pc = 0x48e524u;
    // NOP
label_48e528:
    // 0x48e528: 0xc1248ca  jal         func_492328
    ctx->pc = 0x48E528u;
    SET_GPR_U32(ctx, 31, 0x48E530u);
    ctx->pc = 0x492328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492328u, 0x48E528u, 0x48E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E530u;
label_48e530:
    // 0x48e530: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x48E530u;
    {
        const bool branch_taken_0x48e530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E530u;
        // 0x48e534: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e530) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E538u;
label_48e538:
    // 0x48e538: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x48e538u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e53c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e540: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48E540u;
    {
        const bool branch_taken_0x48e540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E540u;
        // 0x48e544: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e540) {
            ctx->pc = 0x48E560u;
            goto label_48e560;
        }
    }
    ctx->pc = 0x48E548u;
    // 0x48e548: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48e548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48e54c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48E54Cu;
    {
        const bool branch_taken_0x48e54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E54Cu;
        // 0x48e550: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e54c) {
            ctx->pc = 0x48E570u;
            goto label_48e570;
        }
    }
    ctx->pc = 0x48E554u;
    // 0x48e554: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x48E554u;
    {
        const bool branch_taken_0x48e554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E554u;
        // 0x48e558: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e554) {
            ctx->pc = 0x48E580u;
            return;
        }
    }
    ctx->pc = 0x48E55Cu;
    // 0x48e55c: 0x0  nop
    ctx->pc = 0x48e55cu;
    // NOP
label_48e560:
    // 0x48e560: 0xc144edc  jal         func_513B70
    ctx->pc = 0x48E560u;
    SET_GPR_U32(ctx, 31, 0x48E568u);
    ctx->pc = 0x513B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513B70u, 0x48E560u, 0x48E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E568u;
label_48e568:
    // 0x48e568: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48E568u;
    {
        const bool branch_taken_0x48e568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E568u;
        // 0x48e56c: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e568) {
            ctx->pc = 0x48E57Cu;
            return;
        }
    }
    ctx->pc = 0x48E570u;
label_48e570:
    // 0x48e570: 0xc144ee0  jal         func_513B80
    ctx->pc = 0x48E570u;
    SET_GPR_U32(ctx, 31, 0x48E578u);
    ctx->pc = 0x513B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513B80u, 0x48E570u, 0x48E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E578u;
}
