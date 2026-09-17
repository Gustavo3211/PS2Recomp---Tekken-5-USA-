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

// Function: sub_002D9E70
// Address: 0x2d9e70 - 0x2da728
void sub_002D9E70_0x2d9e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9E70_0x2d9e70");
#endif

    switch (ctx->pc) {
        case 0x2da704u: goto label_2da704;
        default: break;
    }

    ctx->pc = 0x2d9e70u;

    // 0x2d9e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9e74: 0x2c820086  sltiu       $v0, $a0, 0x86
    ctx->pc = 0x2d9e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)134) ? 1 : 0);
    // 0x2d9e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d9e7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d9e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d9e80: 0x1040020f  beqz        $v0, . + 4 + (0x20F << 2)
    ctx->pc = 0x2D9E80u;
    {
        const bool branch_taken_0x2d9e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E80u;
        // 0x2d9e84: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e80) {
            ctx->pc = 0x2DA6C0u;
            goto label_2da6c0;
        }
    }
    ctx->pc = 0x2D9E88u;
    // 0x2d9e88: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2d9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d9e8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2d9e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2d9e90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d9e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d9e94: 0x8c63efa0  lw          $v1, -0x1060($v1)
    ctx->pc = 0x2d9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963104)));
    // 0x2d9e98: 0x600008  jr          $v1
    ctx->pc = 0x2D9E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D9EA0u: goto label_2d9ea0;
            case 0x2D9EB0u: goto label_2d9eb0;
            case 0x2D9EC0u: goto label_2d9ec0;
            case 0x2D9ED0u: goto label_2d9ed0;
            case 0x2D9EE0u: goto label_2d9ee0;
            case 0x2D9EF0u: goto label_2d9ef0;
            case 0x2D9F00u: goto label_2d9f00;
            case 0x2D9F10u: goto label_2d9f10;
            case 0x2D9F20u: goto label_2d9f20;
            case 0x2D9F30u: goto label_2d9f30;
            case 0x2D9F40u: goto label_2d9f40;
            case 0x2D9F50u: goto label_2d9f50;
            case 0x2D9F60u: goto label_2d9f60;
            case 0x2D9F70u: goto label_2d9f70;
            case 0x2D9F80u: goto label_2d9f80;
            case 0x2D9F90u: goto label_2d9f90;
            case 0x2D9FA0u: goto label_2d9fa0;
            case 0x2D9FB0u: goto label_2d9fb0;
            case 0x2D9FC0u: goto label_2d9fc0;
            case 0x2D9FD0u: goto label_2d9fd0;
            case 0x2D9FE0u: goto label_2d9fe0;
            case 0x2D9FF0u: goto label_2d9ff0;
            case 0x2DA000u: goto label_2da000;
            case 0x2DA010u: goto label_2da010;
            case 0x2DA020u: goto label_2da020;
            case 0x2DA030u: goto label_2da030;
            case 0x2DA040u: goto label_2da040;
            case 0x2DA050u: goto label_2da050;
            case 0x2DA060u: goto label_2da060;
            case 0x2DA070u: goto label_2da070;
            case 0x2DA080u: goto label_2da080;
            case 0x2DA090u: goto label_2da090;
            case 0x2DA0A0u: goto label_2da0a0;
            case 0x2DA0B0u: goto label_2da0b0;
            case 0x2DA0C0u: goto label_2da0c0;
            case 0x2DA0D0u: goto label_2da0d0;
            case 0x2DA0E0u: goto label_2da0e0;
            case 0x2DA0F0u: goto label_2da0f0;
            case 0x2DA100u: goto label_2da100;
            case 0x2DA110u: goto label_2da110;
            case 0x2DA120u: goto label_2da120;
            case 0x2DA130u: goto label_2da130;
            case 0x2DA140u: goto label_2da140;
            case 0x2DA150u: goto label_2da150;
            case 0x2DA160u: goto label_2da160;
            case 0x2DA170u: goto label_2da170;
            case 0x2DA180u: goto label_2da180;
            case 0x2DA190u: goto label_2da190;
            case 0x2DA1A0u: goto label_2da1a0;
            case 0x2DA1B0u: goto label_2da1b0;
            case 0x2DA1C0u: goto label_2da1c0;
            case 0x2DA1D0u: goto label_2da1d0;
            case 0x2DA1E0u: goto label_2da1e0;
            case 0x2DA1F0u: goto label_2da1f0;
            case 0x2DA200u: goto label_2da200;
            case 0x2DA210u: goto label_2da210;
            case 0x2DA220u: goto label_2da220;
            case 0x2DA230u: goto label_2da230;
            case 0x2DA240u: goto label_2da240;
            case 0x2DA250u: goto label_2da250;
            case 0x2DA260u: goto label_2da260;
            case 0x2DA270u: goto label_2da270;
            case 0x2DA280u: goto label_2da280;
            case 0x2DA290u: goto label_2da290;
            case 0x2DA2A0u: goto label_2da2a0;
            case 0x2DA2B0u: goto label_2da2b0;
            case 0x2DA2C0u: goto label_2da2c0;
            case 0x2DA2D0u: goto label_2da2d0;
            case 0x2DA2E0u: goto label_2da2e0;
            case 0x2DA2F0u: goto label_2da2f0;
            case 0x2DA300u: goto label_2da300;
            case 0x2DA310u: goto label_2da310;
            case 0x2DA320u: goto label_2da320;
            case 0x2DA330u: goto label_2da330;
            case 0x2DA340u: goto label_2da340;
            case 0x2DA350u: goto label_2da350;
            case 0x2DA360u: goto label_2da360;
            case 0x2DA370u: goto label_2da370;
            case 0x2DA380u: goto label_2da380;
            case 0x2DA390u: goto label_2da390;
            case 0x2DA3A0u: goto label_2da3a0;
            case 0x2DA3B0u: goto label_2da3b0;
            case 0x2DA3C0u: goto label_2da3c0;
            case 0x2DA3D0u: goto label_2da3d0;
            case 0x2DA3E0u: goto label_2da3e0;
            case 0x2DA3F0u: goto label_2da3f0;
            case 0x2DA400u: goto label_2da400;
            case 0x2DA410u: goto label_2da410;
            case 0x2DA420u: goto label_2da420;
            case 0x2DA430u: goto label_2da430;
            case 0x2DA440u: goto label_2da440;
            case 0x2DA450u: goto label_2da450;
            case 0x2DA460u: goto label_2da460;
            case 0x2DA470u: goto label_2da470;
            case 0x2DA480u: goto label_2da480;
            case 0x2DA490u: goto label_2da490;
            case 0x2DA4A0u: goto label_2da4a0;
            case 0x2DA4B0u: goto label_2da4b0;
            case 0x2DA4C0u: goto label_2da4c0;
            case 0x2DA4D0u: goto label_2da4d0;
            case 0x2DA4E0u: goto label_2da4e0;
            case 0x2DA4F0u: goto label_2da4f0;
            case 0x2DA500u: goto label_2da500;
            case 0x2DA510u: goto label_2da510;
            case 0x2DA520u: goto label_2da520;
            case 0x2DA530u: goto label_2da530;
            case 0x2DA540u: goto label_2da540;
            case 0x2DA550u: goto label_2da550;
            case 0x2DA560u: goto label_2da560;
            case 0x2DA570u: goto label_2da570;
            case 0x2DA580u: goto label_2da580;
            case 0x2DA590u: goto label_2da590;
            case 0x2DA5A0u: goto label_2da5a0;
            case 0x2DA5B0u: goto label_2da5b0;
            case 0x2DA5C0u: goto label_2da5c0;
            case 0x2DA5D0u: goto label_2da5d0;
            case 0x2DA5E0u: goto label_2da5e0;
            case 0x2DA5F0u: goto label_2da5f0;
            case 0x2DA600u: goto label_2da600;
            case 0x2DA610u: goto label_2da610;
            case 0x2DA620u: goto label_2da620;
            case 0x2DA630u: goto label_2da630;
            case 0x2DA640u: goto label_2da640;
            case 0x2DA650u: goto label_2da650;
            case 0x2DA660u: goto label_2da660;
            case 0x2DA670u: goto label_2da670;
            case 0x2DA680u: goto label_2da680;
            case 0x2DA690u: goto label_2da690;
            case 0x2DA6A0u: goto label_2da6a0;
            case 0x2DA6B0u: goto label_2da6b0;
            case 0x2DA6C0u: goto label_2da6c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9E98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D9EA0u;
label_2d9ea0:
    // 0x2d9ea0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2d9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2d9ea4: 0x10000207  b           . + 4 + (0x207 << 2)
    ctx->pc = 0x2D9EA4u;
    {
        const bool branch_taken_0x2d9ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EA4u;
        // 0x2d9ea8: 0x2405055e  addiu       $a1, $zero, 0x55E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ea4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9EACu;
    // 0x2d9eac: 0x0  nop
    ctx->pc = 0x2d9eacu;
    // NOP
label_2d9eb0:
    // 0x2d9eb0: 0x240200e8  addiu       $v0, $zero, 0xE8
    ctx->pc = 0x2d9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2d9eb4: 0x2405055f  addiu       $a1, $zero, 0x55F
    ctx->pc = 0x2d9eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1375));
    // 0x2d9eb8: 0x10000202  b           . + 4 + (0x202 << 2)
    ctx->pc = 0x2D9EB8u;
    {
        const bool branch_taken_0x2d9eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EB8u;
        // 0x2d9ebc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9eb8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9EC0u;
label_2d9ec0:
    // 0x2d9ec0: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2d9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2d9ec4: 0x24050560  addiu       $a1, $zero, 0x560
    ctx->pc = 0x2d9ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x2d9ec8: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x2D9EC8u;
    {
        const bool branch_taken_0x2d9ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EC8u;
        // 0x2d9ecc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ec8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9ED0u;
label_2d9ed0:
    // 0x2d9ed0: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x2d9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x2d9ed4: 0x24050561  addiu       $a1, $zero, 0x561
    ctx->pc = 0x2d9ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1377));
    // 0x2d9ed8: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x2D9ED8u;
    {
        const bool branch_taken_0x2d9ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9ED8u;
        // 0x2d9edc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ed8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9EE0u;
label_2d9ee0:
    // 0x2d9ee0: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x2d9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2d9ee4: 0x24050562  addiu       $a1, $zero, 0x562
    ctx->pc = 0x2d9ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1378));
    // 0x2d9ee8: 0x100001f6  b           . + 4 + (0x1F6 << 2)
    ctx->pc = 0x2D9EE8u;
    {
        const bool branch_taken_0x2d9ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EE8u;
        // 0x2d9eec: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ee8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9EF0u;
label_2d9ef0:
    // 0x2d9ef0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2d9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2d9ef4: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x2D9EF4u;
    {
        const bool branch_taken_0x2d9ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EF4u;
        // 0x2d9ef8: 0x24050563  addiu       $a1, $zero, 0x563 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ef4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9EFCu;
    // 0x2d9efc: 0x0  nop
    ctx->pc = 0x2d9efcu;
    // NOP
label_2d9f00:
    // 0x2d9f00: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2d9f00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2d9f04: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x2D9F04u;
    {
        const bool branch_taken_0x2d9f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F04u;
        // 0x2d9f08: 0x24050564  addiu       $a1, $zero, 0x564 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f04) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9F0Cu;
    // 0x2d9f0c: 0x0  nop
    ctx->pc = 0x2d9f0cu;
    // NOP
label_2d9f10:
    // 0x2d9f10: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2d9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2d9f14: 0x24050565  addiu       $a1, $zero, 0x565
    ctx->pc = 0x2d9f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1381));
    // 0x2d9f18: 0x100001ea  b           . + 4 + (0x1EA << 2)
    ctx->pc = 0x2D9F18u;
    {
        const bool branch_taken_0x2d9f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F18u;
        // 0x2d9f1c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f18) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9F20u;
label_2d9f20:
    // 0x2d9f20: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2d9f20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2d9f24: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x2D9F24u;
    {
        const bool branch_taken_0x2d9f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F24u;
        // 0x2d9f28: 0x24050566  addiu       $a1, $zero, 0x566 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1382));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f24) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9F2Cu;
    // 0x2d9f2c: 0x0  nop
    ctx->pc = 0x2d9f2cu;
    // NOP
label_2d9f30:
    // 0x2d9f30: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x2d9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x2d9f34: 0x24050567  addiu       $a1, $zero, 0x567
    ctx->pc = 0x2d9f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
    // 0x2d9f38: 0x100001e2  b           . + 4 + (0x1E2 << 2)
    ctx->pc = 0x2D9F38u;
    {
        const bool branch_taken_0x2d9f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F38u;
        // 0x2d9f3c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f38) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9F40u;
label_2d9f40:
    // 0x2d9f40: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2d9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2d9f44: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x2D9F44u;
    {
        const bool branch_taken_0x2d9f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F44u;
        // 0x2d9f48: 0x24050568  addiu       $a1, $zero, 0x568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f44) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9F4Cu;
    // 0x2d9f4c: 0x0  nop
    ctx->pc = 0x2d9f4cu;
    // NOP
label_2d9f50:
    // 0x2d9f50: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2d9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2d9f54: 0x24050569  addiu       $a1, $zero, 0x569
    ctx->pc = 0x2d9f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1385));
    // 0x2d9f58: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x2D9F58u;
    {
        const bool branch_taken_0x2d9f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F58u;
        // 0x2d9f5c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f58) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9F60u;
label_2d9f60:
    // 0x2d9f60: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2d9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2d9f64: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x2D9F64u;
    {
        const bool branch_taken_0x2d9f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F64u;
        // 0x2d9f68: 0x2405056a  addiu       $a1, $zero, 0x56A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1386));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f64) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9F6Cu;
    // 0x2d9f6c: 0x0  nop
    ctx->pc = 0x2d9f6cu;
    // NOP
label_2d9f70:
    // 0x2d9f70: 0x24020094  addiu       $v0, $zero, 0x94
    ctx->pc = 0x2d9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2d9f74: 0x2405056b  addiu       $a1, $zero, 0x56B
    ctx->pc = 0x2d9f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1387));
    // 0x2d9f78: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x2D9F78u;
    {
        const bool branch_taken_0x2d9f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F78u;
        // 0x2d9f7c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f78) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9F80u;
label_2d9f80:
    // 0x2d9f80: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2d9f80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2d9f84: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x2D9F84u;
    {
        const bool branch_taken_0x2d9f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F84u;
        // 0x2d9f88: 0x2405056c  addiu       $a1, $zero, 0x56C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f84) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9F8Cu;
    // 0x2d9f8c: 0x0  nop
    ctx->pc = 0x2d9f8cu;
    // NOP
label_2d9f90:
    // 0x2d9f90: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2d9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2d9f94: 0x2405056d  addiu       $a1, $zero, 0x56D
    ctx->pc = 0x2d9f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1389));
    // 0x2d9f98: 0x100001ca  b           . + 4 + (0x1CA << 2)
    ctx->pc = 0x2D9F98u;
    {
        const bool branch_taken_0x2d9f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F98u;
        // 0x2d9f9c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f98) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9FA0u;
label_2d9fa0:
    // 0x2d9fa0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2d9fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2d9fa4: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x2D9FA4u;
    {
        const bool branch_taken_0x2d9fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FA4u;
        // 0x2d9fa8: 0x2405056e  addiu       $a1, $zero, 0x56E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fa4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9FACu;
    // 0x2d9fac: 0x0  nop
    ctx->pc = 0x2d9facu;
    // NOP
label_2d9fb0:
    // 0x2d9fb0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2d9fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2d9fb4: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x2D9FB4u;
    {
        const bool branch_taken_0x2d9fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FB4u;
        // 0x2d9fb8: 0x2405056f  addiu       $a1, $zero, 0x56F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1391));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fb4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9FBCu;
    // 0x2d9fbc: 0x0  nop
    ctx->pc = 0x2d9fbcu;
    // NOP
label_2d9fc0:
    // 0x2d9fc0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2d9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2d9fc4: 0x24050570  addiu       $a1, $zero, 0x570
    ctx->pc = 0x2d9fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x2d9fc8: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x2D9FC8u;
    {
        const bool branch_taken_0x2d9fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FC8u;
        // 0x2d9fcc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fc8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9FD0u;
label_2d9fd0:
    // 0x2d9fd0: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2d9fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2d9fd4: 0x24050571  addiu       $a1, $zero, 0x571
    ctx->pc = 0x2d9fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1393));
    // 0x2d9fd8: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x2D9FD8u;
    {
        const bool branch_taken_0x2d9fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FD8u;
        // 0x2d9fdc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fd8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9FE0u;
label_2d9fe0:
    // 0x2d9fe0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2d9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2d9fe4: 0x24050572  addiu       $a1, $zero, 0x572
    ctx->pc = 0x2d9fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1394));
    // 0x2d9fe8: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x2D9FE8u;
    {
        const bool branch_taken_0x2d9fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FE8u;
        // 0x2d9fec: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fe8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2D9FF0u;
label_2d9ff0:
    // 0x2d9ff0: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x2d9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2d9ff4: 0x24050573  addiu       $a1, $zero, 0x573
    ctx->pc = 0x2d9ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1395));
    // 0x2d9ff8: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x2D9FF8u;
    {
        const bool branch_taken_0x2d9ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FF8u;
        // 0x2d9ffc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ff8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA000u;
label_2da000:
    // 0x2da000: 0x2402007c  addiu       $v0, $zero, 0x7C
    ctx->pc = 0x2da000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2da004: 0x24050574  addiu       $a1, $zero, 0x574
    ctx->pc = 0x2da004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1396));
    // 0x2da008: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x2DA008u;
    {
        const bool branch_taken_0x2da008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA008u;
        // 0x2da00c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da008) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA010u;
label_2da010:
    // 0x2da010: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da014: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x2DA014u;
    {
        const bool branch_taken_0x2da014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA014u;
        // 0x2da018: 0x24050575  addiu       $a1, $zero, 0x575 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1397));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da014) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA01Cu;
    // 0x2da01c: 0x0  nop
    ctx->pc = 0x2da01cu;
    // NOP
label_2da020:
    // 0x2da020: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x2da020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x2da024: 0x24050576  addiu       $a1, $zero, 0x576
    ctx->pc = 0x2da024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1398));
    // 0x2da028: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x2DA028u;
    {
        const bool branch_taken_0x2da028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA028u;
        // 0x2da02c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da028) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA030u;
label_2da030:
    // 0x2da030: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da034: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x2DA034u;
    {
        const bool branch_taken_0x2da034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA034u;
        // 0x2da038: 0x24050577  addiu       $a1, $zero, 0x577 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1399));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da034) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA03Cu;
    // 0x2da03c: 0x0  nop
    ctx->pc = 0x2da03cu;
    // NOP
label_2da040:
    // 0x2da040: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da044: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x2DA044u;
    {
        const bool branch_taken_0x2da044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA044u;
        // 0x2da048: 0x24050578  addiu       $a1, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da044) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA04Cu;
    // 0x2da04c: 0x0  nop
    ctx->pc = 0x2da04cu;
    // NOP
label_2da050:
    // 0x2da050: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da050u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da054: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x2DA054u;
    {
        const bool branch_taken_0x2da054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA054u;
        // 0x2da058: 0x24050579  addiu       $a1, $zero, 0x579 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1401));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da054) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA05Cu;
    // 0x2da05c: 0x0  nop
    ctx->pc = 0x2da05cu;
    // NOP
label_2da060:
    // 0x2da060: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2da060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2da064: 0x2405057a  addiu       $a1, $zero, 0x57A
    ctx->pc = 0x2da064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1402));
    // 0x2da068: 0x10000196  b           . + 4 + (0x196 << 2)
    ctx->pc = 0x2DA068u;
    {
        const bool branch_taken_0x2da068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA068u;
        // 0x2da06c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da068) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA070u;
label_2da070:
    // 0x2da070: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da074: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x2DA074u;
    {
        const bool branch_taken_0x2da074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA074u;
        // 0x2da078: 0x2405057b  addiu       $a1, $zero, 0x57B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1403));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da074) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA07Cu;
    // 0x2da07c: 0x0  nop
    ctx->pc = 0x2da07cu;
    // NOP
label_2da080:
    // 0x2da080: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x2da080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2da084: 0x2405057c  addiu       $a1, $zero, 0x57C
    ctx->pc = 0x2da084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1404));
    // 0x2da088: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x2DA088u;
    {
        const bool branch_taken_0x2da088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA088u;
        // 0x2da08c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da088) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA090u;
label_2da090:
    // 0x2da090: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2da090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2da094: 0x2405057d  addiu       $a1, $zero, 0x57D
    ctx->pc = 0x2da094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1405));
    // 0x2da098: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x2DA098u;
    {
        const bool branch_taken_0x2da098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA098u;
        // 0x2da09c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da098) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA0A0u;
label_2da0a0:
    // 0x2da0a0: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x2da0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x2da0a4: 0x2405057e  addiu       $a1, $zero, 0x57E
    ctx->pc = 0x2da0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1406));
    // 0x2da0a8: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x2DA0A8u;
    {
        const bool branch_taken_0x2da0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0A8u;
        // 0x2da0ac: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0a8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA0B0u;
label_2da0b0:
    // 0x2da0b0: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x2da0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x2da0b4: 0x2405057f  addiu       $a1, $zero, 0x57F
    ctx->pc = 0x2da0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1407));
    // 0x2da0b8: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x2DA0B8u;
    {
        const bool branch_taken_0x2da0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0B8u;
        // 0x2da0bc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0b8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA0C0u;
label_2da0c0:
    // 0x2da0c0: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x2da0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2da0c4: 0x24050580  addiu       $a1, $zero, 0x580
    ctx->pc = 0x2da0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x2da0c8: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x2DA0C8u;
    {
        const bool branch_taken_0x2da0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0C8u;
        // 0x2da0cc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0c8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA0D0u;
label_2da0d0:
    // 0x2da0d0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2da0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2da0d4: 0x24050581  addiu       $a1, $zero, 0x581
    ctx->pc = 0x2da0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1409));
    // 0x2da0d8: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x2DA0D8u;
    {
        const bool branch_taken_0x2da0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0D8u;
        // 0x2da0dc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0d8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA0E0u;
label_2da0e0:
    // 0x2da0e0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2da0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2da0e4: 0x24050582  addiu       $a1, $zero, 0x582
    ctx->pc = 0x2da0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1410));
    // 0x2da0e8: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x2DA0E8u;
    {
        const bool branch_taken_0x2da0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0E8u;
        // 0x2da0ec: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0e8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA0F0u;
label_2da0f0:
    // 0x2da0f0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2da0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2da0f4: 0x24050583  addiu       $a1, $zero, 0x583
    ctx->pc = 0x2da0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1411));
    // 0x2da0f8: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x2DA0F8u;
    {
        const bool branch_taken_0x2da0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0F8u;
        // 0x2da0fc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0f8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA100u;
label_2da100:
    // 0x2da100: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x2da100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2da104: 0x24050584  addiu       $a1, $zero, 0x584
    ctx->pc = 0x2da104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1412));
    // 0x2da108: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x2DA108u;
    {
        const bool branch_taken_0x2da108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA108u;
        // 0x2da10c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da108) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA110u;
label_2da110:
    // 0x2da110: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da114: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x2DA114u;
    {
        const bool branch_taken_0x2da114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA114u;
        // 0x2da118: 0x24050585  addiu       $a1, $zero, 0x585 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da114) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA11Cu;
    // 0x2da11c: 0x0  nop
    ctx->pc = 0x2da11cu;
    // NOP
label_2da120:
    // 0x2da120: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2da120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2da124: 0x24050586  addiu       $a1, $zero, 0x586
    ctx->pc = 0x2da124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1414));
    // 0x2da128: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x2DA128u;
    {
        const bool branch_taken_0x2da128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA128u;
        // 0x2da12c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da128) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA130u;
label_2da130:
    // 0x2da130: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da134: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x2DA134u;
    {
        const bool branch_taken_0x2da134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA134u;
        // 0x2da138: 0x24050587  addiu       $a1, $zero, 0x587 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1415));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da134) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA13Cu;
    // 0x2da13c: 0x0  nop
    ctx->pc = 0x2da13cu;
    // NOP
label_2da140:
    // 0x2da140: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2da140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2da144: 0x2405058a  addiu       $a1, $zero, 0x58A
    ctx->pc = 0x2da144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1418));
    // 0x2da148: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x2DA148u;
    {
        const bool branch_taken_0x2da148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA148u;
        // 0x2da14c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da148) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA150u;
label_2da150:
    // 0x2da150: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x2da150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2da154: 0x24050588  addiu       $a1, $zero, 0x588
    ctx->pc = 0x2da154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1416));
    // 0x2da158: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x2DA158u;
    {
        const bool branch_taken_0x2da158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA158u;
        // 0x2da15c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da158) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA160u;
label_2da160:
    // 0x2da160: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2da160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2da164: 0x24050589  addiu       $a1, $zero, 0x589
    ctx->pc = 0x2da164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1417));
    // 0x2da168: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x2DA168u;
    {
        const bool branch_taken_0x2da168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA168u;
        // 0x2da16c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da168) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA170u;
label_2da170:
    // 0x2da170: 0x24020192  addiu       $v0, $zero, 0x192
    ctx->pc = 0x2da170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 402));
    // 0x2da174: 0x2405058b  addiu       $a1, $zero, 0x58B
    ctx->pc = 0x2da174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1419));
    // 0x2da178: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x2DA178u;
    {
        const bool branch_taken_0x2da178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA178u;
        // 0x2da17c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da178) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA180u;
label_2da180:
    // 0x2da180: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2da180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2da184: 0x2405058c  addiu       $a1, $zero, 0x58C
    ctx->pc = 0x2da184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1420));
    // 0x2da188: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x2DA188u;
    {
        const bool branch_taken_0x2da188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA188u;
        // 0x2da18c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da188) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA190u;
label_2da190:
    // 0x2da190: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da194: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x2DA194u;
    {
        const bool branch_taken_0x2da194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA194u;
        // 0x2da198: 0x2405058d  addiu       $a1, $zero, 0x58D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1421));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da194) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA19Cu;
    // 0x2da19c: 0x0  nop
    ctx->pc = 0x2da19cu;
    // NOP
label_2da1a0:
    // 0x2da1a0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2da1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2da1a4: 0x2405058e  addiu       $a1, $zero, 0x58E
    ctx->pc = 0x2da1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1422));
    // 0x2da1a8: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x2DA1A8u;
    {
        const bool branch_taken_0x2da1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1A8u;
        // 0x2da1ac: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1a8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA1B0u;
label_2da1b0:
    // 0x2da1b0: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x2da1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2da1b4: 0x2405058f  addiu       $a1, $zero, 0x58F
    ctx->pc = 0x2da1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1423));
    // 0x2da1b8: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x2DA1B8u;
    {
        const bool branch_taken_0x2da1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1B8u;
        // 0x2da1bc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1b8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA1C0u;
label_2da1c0:
    // 0x2da1c0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da1c4: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x2DA1C4u;
    {
        const bool branch_taken_0x2da1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1C4u;
        // 0x2da1c8: 0x24050590  addiu       $a1, $zero, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1c4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA1CCu;
    // 0x2da1cc: 0x0  nop
    ctx->pc = 0x2da1ccu;
    // NOP
label_2da1d0:
    // 0x2da1d0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da1d4: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x2DA1D4u;
    {
        const bool branch_taken_0x2da1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1D4u;
        // 0x2da1d8: 0x24050591  addiu       $a1, $zero, 0x591 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1425));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1d4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA1DCu;
    // 0x2da1dc: 0x0  nop
    ctx->pc = 0x2da1dcu;
    // NOP
label_2da1e0:
    // 0x2da1e0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2da1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2da1e4: 0x24050592  addiu       $a1, $zero, 0x592
    ctx->pc = 0x2da1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1426));
    // 0x2da1e8: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x2DA1E8u;
    {
        const bool branch_taken_0x2da1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1E8u;
        // 0x2da1ec: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1e8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA1F0u;
label_2da1f0:
    // 0x2da1f0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da1f4: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x2DA1F4u;
    {
        const bool branch_taken_0x2da1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1F4u;
        // 0x2da1f8: 0x24050593  addiu       $a1, $zero, 0x593 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1427));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1f4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA1FCu;
    // 0x2da1fc: 0x0  nop
    ctx->pc = 0x2da1fcu;
    // NOP
label_2da200:
    // 0x2da200: 0x240200be  addiu       $v0, $zero, 0xBE
    ctx->pc = 0x2da200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x2da204: 0x24050594  addiu       $a1, $zero, 0x594
    ctx->pc = 0x2da204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
    // 0x2da208: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x2DA208u;
    {
        const bool branch_taken_0x2da208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA208u;
        // 0x2da20c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da208) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA210u;
label_2da210:
    // 0x2da210: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da214: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x2DA214u;
    {
        const bool branch_taken_0x2da214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA214u;
        // 0x2da218: 0x24050595  addiu       $a1, $zero, 0x595 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da214) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA21Cu;
    // 0x2da21c: 0x0  nop
    ctx->pc = 0x2da21cu;
    // NOP
label_2da220:
    // 0x2da220: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2da220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2da224: 0x24050596  addiu       $a1, $zero, 0x596
    ctx->pc = 0x2da224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1430));
    // 0x2da228: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x2DA228u;
    {
        const bool branch_taken_0x2da228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA228u;
        // 0x2da22c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da228) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA230u;
label_2da230:
    // 0x2da230: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da230u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da234: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x2DA234u;
    {
        const bool branch_taken_0x2da234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA234u;
        // 0x2da238: 0x24050597  addiu       $a1, $zero, 0x597 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1431));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da234) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA23Cu;
    // 0x2da23c: 0x0  nop
    ctx->pc = 0x2da23cu;
    // NOP
label_2da240:
    // 0x2da240: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da244: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x2DA244u;
    {
        const bool branch_taken_0x2da244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA244u;
        // 0x2da248: 0x24050598  addiu       $a1, $zero, 0x598 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da244) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA24Cu;
    // 0x2da24c: 0x0  nop
    ctx->pc = 0x2da24cu;
    // NOP
label_2da250:
    // 0x2da250: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x2da250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2da254: 0x24050599  addiu       $a1, $zero, 0x599
    ctx->pc = 0x2da254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1433));
    // 0x2da258: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x2DA258u;
    {
        const bool branch_taken_0x2da258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA258u;
        // 0x2da25c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da258) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA260u;
label_2da260:
    // 0x2da260: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da264: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x2DA264u;
    {
        const bool branch_taken_0x2da264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA264u;
        // 0x2da268: 0x2405059a  addiu       $a1, $zero, 0x59A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1434));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da264) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA26Cu;
    // 0x2da26c: 0x0  nop
    ctx->pc = 0x2da26cu;
    // NOP
label_2da270:
    // 0x2da270: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x2da270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x2da274: 0x2405059b  addiu       $a1, $zero, 0x59B
    ctx->pc = 0x2da274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1435));
    // 0x2da278: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x2DA278u;
    {
        const bool branch_taken_0x2da278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA278u;
        // 0x2da27c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da278) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA280u;
label_2da280:
    // 0x2da280: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x2da280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2da284: 0x2405059c  addiu       $a1, $zero, 0x59C
    ctx->pc = 0x2da284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1436));
    // 0x2da288: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x2DA288u;
    {
        const bool branch_taken_0x2da288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA288u;
        // 0x2da28c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da288) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA290u;
label_2da290:
    // 0x2da290: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2da290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2da294: 0x2405059d  addiu       $a1, $zero, 0x59D
    ctx->pc = 0x2da294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1437));
    // 0x2da298: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x2DA298u;
    {
        const bool branch_taken_0x2da298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA298u;
        // 0x2da29c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da298) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA2A0u;
label_2da2a0:
    // 0x2da2a0: 0x240200a6  addiu       $v0, $zero, 0xA6
    ctx->pc = 0x2da2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x2da2a4: 0x2405059e  addiu       $a1, $zero, 0x59E
    ctx->pc = 0x2da2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1438));
    // 0x2da2a8: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x2DA2A8u;
    {
        const bool branch_taken_0x2da2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2A8u;
        // 0x2da2ac: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2a8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA2B0u;
label_2da2b0:
    // 0x2da2b0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da2b4: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x2DA2B4u;
    {
        const bool branch_taken_0x2da2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2B4u;
        // 0x2da2b8: 0x2405059f  addiu       $a1, $zero, 0x59F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1439));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2b4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA2BCu;
    // 0x2da2bc: 0x0  nop
    ctx->pc = 0x2da2bcu;
    // NOP
label_2da2c0:
    // 0x2da2c0: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x2da2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2da2c4: 0x240505a0  addiu       $a1, $zero, 0x5A0
    ctx->pc = 0x2da2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
    // 0x2da2c8: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x2DA2C8u;
    {
        const bool branch_taken_0x2da2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2C8u;
        // 0x2da2cc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2c8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA2D0u;
label_2da2d0:
    // 0x2da2d0: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2da2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2da2d4: 0x240505a1  addiu       $a1, $zero, 0x5A1
    ctx->pc = 0x2da2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1441));
    // 0x2da2d8: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x2DA2D8u;
    {
        const bool branch_taken_0x2da2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2D8u;
        // 0x2da2dc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2d8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA2E0u;
label_2da2e0:
    // 0x2da2e0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2da2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2da2e4: 0x240505a2  addiu       $a1, $zero, 0x5A2
    ctx->pc = 0x2da2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1442));
    // 0x2da2e8: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x2DA2E8u;
    {
        const bool branch_taken_0x2da2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2E8u;
        // 0x2da2ec: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2e8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA2F0u;
label_2da2f0:
    // 0x2da2f0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da2f4: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x2DA2F4u;
    {
        const bool branch_taken_0x2da2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2F4u;
        // 0x2da2f8: 0x240505a3  addiu       $a1, $zero, 0x5A3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1443));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2f4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA2FCu;
    // 0x2da2fc: 0x0  nop
    ctx->pc = 0x2da2fcu;
    // NOP
label_2da300:
    // 0x2da300: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da300u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da304: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x2DA304u;
    {
        const bool branch_taken_0x2da304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA304u;
        // 0x2da308: 0x240505a4  addiu       $a1, $zero, 0x5A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da304) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA30Cu;
    // 0x2da30c: 0x0  nop
    ctx->pc = 0x2da30cu;
    // NOP
label_2da310:
    // 0x2da310: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2da310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2da314: 0x240505a5  addiu       $a1, $zero, 0x5A5
    ctx->pc = 0x2da314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1445));
    // 0x2da318: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x2DA318u;
    {
        const bool branch_taken_0x2da318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA318u;
        // 0x2da31c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da318) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA320u;
label_2da320:
    // 0x2da320: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x2da320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2da324: 0x240505a6  addiu       $a1, $zero, 0x5A6
    ctx->pc = 0x2da324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1446));
    // 0x2da328: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x2DA328u;
    {
        const bool branch_taken_0x2da328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA328u;
        // 0x2da32c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da328) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA330u;
label_2da330:
    // 0x2da330: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da330u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da334: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x2DA334u;
    {
        const bool branch_taken_0x2da334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA334u;
        // 0x2da338: 0x240505a7  addiu       $a1, $zero, 0x5A7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da334) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA33Cu;
    // 0x2da33c: 0x0  nop
    ctx->pc = 0x2da33cu;
    // NOP
label_2da340:
    // 0x2da340: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da340u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da344: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x2DA344u;
    {
        const bool branch_taken_0x2da344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA344u;
        // 0x2da348: 0x240505a8  addiu       $a1, $zero, 0x5A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da344) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA34Cu;
    // 0x2da34c: 0x0  nop
    ctx->pc = 0x2da34cu;
    // NOP
label_2da350:
    // 0x2da350: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da350u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da354: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2DA354u;
    {
        const bool branch_taken_0x2da354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA354u;
        // 0x2da358: 0x240505a9  addiu       $a1, $zero, 0x5A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1449));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da354) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA35Cu;
    // 0x2da35c: 0x0  nop
    ctx->pc = 0x2da35cu;
    // NOP
label_2da360:
    // 0x2da360: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da360u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da364: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x2DA364u;
    {
        const bool branch_taken_0x2da364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA364u;
        // 0x2da368: 0x240505aa  addiu       $a1, $zero, 0x5AA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1450));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da364) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA36Cu;
    // 0x2da36c: 0x0  nop
    ctx->pc = 0x2da36cu;
    // NOP
label_2da370:
    // 0x2da370: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da370u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da374: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x2DA374u;
    {
        const bool branch_taken_0x2da374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA374u;
        // 0x2da378: 0x240505ab  addiu       $a1, $zero, 0x5AB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1451));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da374) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA37Cu;
    // 0x2da37c: 0x0  nop
    ctx->pc = 0x2da37cu;
    // NOP
label_2da380:
    // 0x2da380: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2da380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2da384: 0x240505ac  addiu       $a1, $zero, 0x5AC
    ctx->pc = 0x2da384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1452));
    // 0x2da388: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x2DA388u;
    {
        const bool branch_taken_0x2da388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA388u;
        // 0x2da38c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da388) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA390u;
label_2da390:
    // 0x2da390: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2da390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2da394: 0x240505ad  addiu       $a1, $zero, 0x5AD
    ctx->pc = 0x2da394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1453));
    // 0x2da398: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x2DA398u;
    {
        const bool branch_taken_0x2da398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA398u;
        // 0x2da39c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da398) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA3A0u;
label_2da3a0:
    // 0x2da3a0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2da3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2da3a4: 0x240505ae  addiu       $a1, $zero, 0x5AE
    ctx->pc = 0x2da3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1454));
    // 0x2da3a8: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x2DA3A8u;
    {
        const bool branch_taken_0x2da3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3A8u;
        // 0x2da3ac: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3a8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA3B0u;
label_2da3b0:
    // 0x2da3b0: 0x240200e2  addiu       $v0, $zero, 0xE2
    ctx->pc = 0x2da3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x2da3b4: 0x240505af  addiu       $a1, $zero, 0x5AF
    ctx->pc = 0x2da3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1455));
    // 0x2da3b8: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2DA3B8u;
    {
        const bool branch_taken_0x2da3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3B8u;
        // 0x2da3bc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3b8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA3C0u;
label_2da3c0:
    // 0x2da3c0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da3c4: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2DA3C4u;
    {
        const bool branch_taken_0x2da3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3C4u;
        // 0x2da3c8: 0x240505b0  addiu       $a1, $zero, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3c4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA3CCu;
    // 0x2da3cc: 0x0  nop
    ctx->pc = 0x2da3ccu;
    // NOP
label_2da3d0:
    // 0x2da3d0: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x2da3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2da3d4: 0x240505b1  addiu       $a1, $zero, 0x5B1
    ctx->pc = 0x2da3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1457));
    // 0x2da3d8: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x2DA3D8u;
    {
        const bool branch_taken_0x2da3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3D8u;
        // 0x2da3dc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3d8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA3E0u;
label_2da3e0:
    // 0x2da3e0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da3e4: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2DA3E4u;
    {
        const bool branch_taken_0x2da3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3E4u;
        // 0x2da3e8: 0x240505b2  addiu       $a1, $zero, 0x5B2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1458));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3e4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA3ECu;
    // 0x2da3ec: 0x0  nop
    ctx->pc = 0x2da3ecu;
    // NOP
label_2da3f0:
    // 0x2da3f0: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x2da3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x2da3f4: 0x240505b3  addiu       $a1, $zero, 0x5B3
    ctx->pc = 0x2da3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1459));
    // 0x2da3f8: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x2DA3F8u;
    {
        const bool branch_taken_0x2da3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3F8u;
        // 0x2da3fc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3f8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA400u;
label_2da400:
    // 0x2da400: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x2da400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2da404: 0x240505b4  addiu       $a1, $zero, 0x5B4
    ctx->pc = 0x2da404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1460));
    // 0x2da408: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2DA408u;
    {
        const bool branch_taken_0x2da408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA408u;
        // 0x2da40c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da408) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA410u;
label_2da410:
    // 0x2da410: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da414: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x2DA414u;
    {
        const bool branch_taken_0x2da414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA414u;
        // 0x2da418: 0x240505b5  addiu       $a1, $zero, 0x5B5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1461));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da414) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA41Cu;
    // 0x2da41c: 0x0  nop
    ctx->pc = 0x2da41cu;
    // NOP
label_2da420:
    // 0x2da420: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2da420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2da424: 0x240505b6  addiu       $a1, $zero, 0x5B6
    ctx->pc = 0x2da424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1462));
    // 0x2da428: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2DA428u;
    {
        const bool branch_taken_0x2da428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA428u;
        // 0x2da42c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da428) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA430u;
label_2da430:
    // 0x2da430: 0x2402010e  addiu       $v0, $zero, 0x10E
    ctx->pc = 0x2da430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x2da434: 0x240505b7  addiu       $a1, $zero, 0x5B7
    ctx->pc = 0x2da434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1463));
    // 0x2da438: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2DA438u;
    {
        const bool branch_taken_0x2da438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA438u;
        // 0x2da43c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da438) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA440u;
label_2da440:
    // 0x2da440: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da444: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2DA444u;
    {
        const bool branch_taken_0x2da444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA444u;
        // 0x2da448: 0x240505b8  addiu       $a1, $zero, 0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da444) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA44Cu;
    // 0x2da44c: 0x0  nop
    ctx->pc = 0x2da44cu;
    // NOP
label_2da450:
    // 0x2da450: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2da450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2da454: 0x240505b9  addiu       $a1, $zero, 0x5B9
    ctx->pc = 0x2da454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1465));
    // 0x2da458: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x2DA458u;
    {
        const bool branch_taken_0x2da458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA458u;
        // 0x2da45c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da458) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA460u;
label_2da460:
    // 0x2da460: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da460u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da464: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x2DA464u;
    {
        const bool branch_taken_0x2da464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA464u;
        // 0x2da468: 0x240505ba  addiu       $a1, $zero, 0x5BA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1466));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da464) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA46Cu;
    // 0x2da46c: 0x0  nop
    ctx->pc = 0x2da46cu;
    // NOP
label_2da470:
    // 0x2da470: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2da470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2da474: 0x240505bb  addiu       $a1, $zero, 0x5BB
    ctx->pc = 0x2da474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1467));
    // 0x2da478: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2DA478u;
    {
        const bool branch_taken_0x2da478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA478u;
        // 0x2da47c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da478) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA480u;
label_2da480:
    // 0x2da480: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da484: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2DA484u;
    {
        const bool branch_taken_0x2da484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA484u;
        // 0x2da488: 0x240505bc  addiu       $a1, $zero, 0x5BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1468));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da484) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA48Cu;
    // 0x2da48c: 0x0  nop
    ctx->pc = 0x2da48cu;
    // NOP
label_2da490:
    // 0x2da490: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2da490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2da494: 0x240505bd  addiu       $a1, $zero, 0x5BD
    ctx->pc = 0x2da494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1469));
    // 0x2da498: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2DA498u;
    {
        const bool branch_taken_0x2da498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA498u;
        // 0x2da49c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da498) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA4A0u;
label_2da4a0:
    // 0x2da4a0: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x2da4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x2da4a4: 0x240505be  addiu       $a1, $zero, 0x5BE
    ctx->pc = 0x2da4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1470));
    // 0x2da4a8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2DA4A8u;
    {
        const bool branch_taken_0x2da4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4A8u;
        // 0x2da4ac: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4a8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA4B0u;
label_2da4b0:
    // 0x2da4b0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da4b4: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x2DA4B4u;
    {
        const bool branch_taken_0x2da4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4B4u;
        // 0x2da4b8: 0x240505bf  addiu       $a1, $zero, 0x5BF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1471));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4b4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA4BCu;
    // 0x2da4bc: 0x0  nop
    ctx->pc = 0x2da4bcu;
    // NOP
label_2da4c0:
    // 0x2da4c0: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2da4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2da4c4: 0x240505c0  addiu       $a1, $zero, 0x5C0
    ctx->pc = 0x2da4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1472));
    // 0x2da4c8: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2DA4C8u;
    {
        const bool branch_taken_0x2da4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4C8u;
        // 0x2da4cc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4c8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA4D0u;
label_2da4d0:
    // 0x2da4d0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2da4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2da4d4: 0x240505c1  addiu       $a1, $zero, 0x5C1
    ctx->pc = 0x2da4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1473));
    // 0x2da4d8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2DA4D8u;
    {
        const bool branch_taken_0x2da4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4D8u;
        // 0x2da4dc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4d8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA4E0u;
label_2da4e0:
    // 0x2da4e0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da4e4: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2DA4E4u;
    {
        const bool branch_taken_0x2da4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4E4u;
        // 0x2da4e8: 0x240505c2  addiu       $a1, $zero, 0x5C2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1474));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4e4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA4ECu;
    // 0x2da4ec: 0x0  nop
    ctx->pc = 0x2da4ecu;
    // NOP
label_2da4f0:
    // 0x2da4f0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da4f4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2DA4F4u;
    {
        const bool branch_taken_0x2da4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4F4u;
        // 0x2da4f8: 0x240505c3  addiu       $a1, $zero, 0x5C3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1475));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4f4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA4FCu;
    // 0x2da4fc: 0x0  nop
    ctx->pc = 0x2da4fcu;
    // NOP
label_2da500:
    // 0x2da500: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x2da500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x2da504: 0x240505c4  addiu       $a1, $zero, 0x5C4
    ctx->pc = 0x2da504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1476));
    // 0x2da508: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2DA508u;
    {
        const bool branch_taken_0x2da508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA508u;
        // 0x2da50c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da508) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA510u;
label_2da510:
    // 0x2da510: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x2da510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2da514: 0x240505c5  addiu       $a1, $zero, 0x5C5
    ctx->pc = 0x2da514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1477));
    // 0x2da518: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2DA518u;
    {
        const bool branch_taken_0x2da518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA518u;
        // 0x2da51c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da518) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA520u;
label_2da520:
    // 0x2da520: 0x24020111  addiu       $v0, $zero, 0x111
    ctx->pc = 0x2da520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x2da524: 0x240505c6  addiu       $a1, $zero, 0x5C6
    ctx->pc = 0x2da524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1478));
    // 0x2da528: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2DA528u;
    {
        const bool branch_taken_0x2da528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA528u;
        // 0x2da52c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da528) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA530u;
label_2da530:
    // 0x2da530: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x2da530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2da534: 0x240505c7  addiu       $a1, $zero, 0x5C7
    ctx->pc = 0x2da534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1479));
    // 0x2da538: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2DA538u;
    {
        const bool branch_taken_0x2da538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA538u;
        // 0x2da53c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da538) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA540u;
label_2da540:
    // 0x2da540: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da544: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2DA544u;
    {
        const bool branch_taken_0x2da544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA544u;
        // 0x2da548: 0x240505c8  addiu       $a1, $zero, 0x5C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da544) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA54Cu;
    // 0x2da54c: 0x0  nop
    ctx->pc = 0x2da54cu;
    // NOP
label_2da550:
    // 0x2da550: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x2da550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2da554: 0x240505c9  addiu       $a1, $zero, 0x5C9
    ctx->pc = 0x2da554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1481));
    // 0x2da558: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2DA558u;
    {
        const bool branch_taken_0x2da558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA558u;
        // 0x2da55c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da558) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA560u;
label_2da560:
    // 0x2da560: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2da560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2da564: 0x240505ca  addiu       $a1, $zero, 0x5CA
    ctx->pc = 0x2da564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1482));
    // 0x2da568: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2DA568u;
    {
        const bool branch_taken_0x2da568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA568u;
        // 0x2da56c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da568) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA570u;
label_2da570:
    // 0x2da570: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x2da570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x2da574: 0x240505cb  addiu       $a1, $zero, 0x5CB
    ctx->pc = 0x2da574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1483));
    // 0x2da578: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2DA578u;
    {
        const bool branch_taken_0x2da578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA578u;
        // 0x2da57c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da578) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA580u;
label_2da580:
    // 0x2da580: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x2da580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2da584: 0x240505cc  addiu       $a1, $zero, 0x5CC
    ctx->pc = 0x2da584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1484));
    // 0x2da588: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2DA588u;
    {
        const bool branch_taken_0x2da588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA588u;
        // 0x2da58c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da588) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA590u;
label_2da590:
    // 0x2da590: 0x2402009d  addiu       $v0, $zero, 0x9D
    ctx->pc = 0x2da590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x2da594: 0x240505cd  addiu       $a1, $zero, 0x5CD
    ctx->pc = 0x2da594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1485));
    // 0x2da598: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2DA598u;
    {
        const bool branch_taken_0x2da598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA598u;
        // 0x2da59c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da598) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA5A0u;
label_2da5a0:
    // 0x2da5a0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da5a4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2DA5A4u;
    {
        const bool branch_taken_0x2da5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5A4u;
        // 0x2da5a8: 0x240505ce  addiu       $a1, $zero, 0x5CE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1486));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5a4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA5ACu;
    // 0x2da5ac: 0x0  nop
    ctx->pc = 0x2da5acu;
    // NOP
label_2da5b0:
    // 0x2da5b0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da5b4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2DA5B4u;
    {
        const bool branch_taken_0x2da5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5B4u;
        // 0x2da5b8: 0x240505cf  addiu       $a1, $zero, 0x5CF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1487));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5b4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA5BCu;
    // 0x2da5bc: 0x0  nop
    ctx->pc = 0x2da5bcu;
    // NOP
label_2da5c0:
    // 0x2da5c0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da5c4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2DA5C4u;
    {
        const bool branch_taken_0x2da5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5C4u;
        // 0x2da5c8: 0x240505d0  addiu       $a1, $zero, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5c4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA5CCu;
    // 0x2da5cc: 0x0  nop
    ctx->pc = 0x2da5ccu;
    // NOP
label_2da5d0:
    // 0x2da5d0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da5d4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2DA5D4u;
    {
        const bool branch_taken_0x2da5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5D4u;
        // 0x2da5d8: 0x240505d1  addiu       $a1, $zero, 0x5D1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1489));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5d4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA5DCu;
    // 0x2da5dc: 0x0  nop
    ctx->pc = 0x2da5dcu;
    // NOP
label_2da5e0:
    // 0x2da5e0: 0x240200be  addiu       $v0, $zero, 0xBE
    ctx->pc = 0x2da5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x2da5e4: 0x240505d2  addiu       $a1, $zero, 0x5D2
    ctx->pc = 0x2da5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1490));
    // 0x2da5e8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2DA5E8u;
    {
        const bool branch_taken_0x2da5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5E8u;
        // 0x2da5ec: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5e8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA5F0u;
label_2da5f0:
    // 0x2da5f0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da5f4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2DA5F4u;
    {
        const bool branch_taken_0x2da5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5F4u;
        // 0x2da5f8: 0x240505d3  addiu       $a1, $zero, 0x5D3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1491));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5f4) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA5FCu;
    // 0x2da5fc: 0x0  nop
    ctx->pc = 0x2da5fcu;
    // NOP
label_2da600:
    // 0x2da600: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x2da600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2da604: 0x240505d4  addiu       $a1, $zero, 0x5D4
    ctx->pc = 0x2da604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1492));
    // 0x2da608: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2DA608u;
    {
        const bool branch_taken_0x2da608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA608u;
        // 0x2da60c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da608) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA610u;
label_2da610:
    // 0x2da610: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da610u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da614: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2DA614u;
    {
        const bool branch_taken_0x2da614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA614u;
        // 0x2da618: 0x240505d6  addiu       $a1, $zero, 0x5D6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1494));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da614) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA61Cu;
    // 0x2da61c: 0x0  nop
    ctx->pc = 0x2da61cu;
    // NOP
label_2da620:
    // 0x2da620: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2da620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2da624: 0x240505d5  addiu       $a1, $zero, 0x5D5
    ctx->pc = 0x2da624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1493));
    // 0x2da628: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2DA628u;
    {
        const bool branch_taken_0x2da628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA628u;
        // 0x2da62c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da628) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA630u;
label_2da630:
    // 0x2da630: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da634: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2DA634u;
    {
        const bool branch_taken_0x2da634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA634u;
        // 0x2da638: 0x240505d7  addiu       $a1, $zero, 0x5D7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1495));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da634) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA63Cu;
    // 0x2da63c: 0x0  nop
    ctx->pc = 0x2da63cu;
    // NOP
label_2da640:
    // 0x2da640: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
    // 0x2da644: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2DA644u;
    {
        const bool branch_taken_0x2da644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA644u;
        // 0x2da648: 0x240505d8  addiu       $a1, $zero, 0x5D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da644) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA64Cu;
    // 0x2da64c: 0x0  nop
    ctx->pc = 0x2da64cu;
    // NOP
label_2da650:
    // 0x2da650: 0x2402006a  addiu       $v0, $zero, 0x6A
    ctx->pc = 0x2da650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x2da654: 0x240505d9  addiu       $a1, $zero, 0x5D9
    ctx->pc = 0x2da654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1497));
    // 0x2da658: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2DA658u;
    {
        const bool branch_taken_0x2da658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA658u;
        // 0x2da65c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da658) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA660u;
label_2da660:
    // 0x2da660: 0x24020166  addiu       $v0, $zero, 0x166
    ctx->pc = 0x2da660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x2da664: 0x240505da  addiu       $a1, $zero, 0x5DA
    ctx->pc = 0x2da664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1498));
    // 0x2da668: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2DA668u;
    {
        const bool branch_taken_0x2da668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA668u;
        // 0x2da66c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da668) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA670u;
label_2da670:
    // 0x2da670: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x2da670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x2da674: 0x240505db  addiu       $a1, $zero, 0x5DB
    ctx->pc = 0x2da674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1499));
    // 0x2da678: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2DA678u;
    {
        const bool branch_taken_0x2da678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA678u;
        // 0x2da67c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da678) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA680u;
label_2da680:
    // 0x2da680: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2da680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2da684: 0x240505dc  addiu       $a1, $zero, 0x5DC
    ctx->pc = 0x2da684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x2da688: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DA688u;
    {
        const bool branch_taken_0x2da688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA688u;
        // 0x2da68c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da688) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA690u;
label_2da690:
    // 0x2da690: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2da690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2da694: 0x240505dd  addiu       $a1, $zero, 0x5DD
    ctx->pc = 0x2da694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1501));
    // 0x2da698: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DA698u;
    {
        const bool branch_taken_0x2da698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA698u;
        // 0x2da69c: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da698) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA6A0u;
label_2da6a0:
    // 0x2da6a0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2da6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2da6a4: 0x240505de  addiu       $a1, $zero, 0x5DE
    ctx->pc = 0x2da6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1502));
    // 0x2da6a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA6A8u;
    {
        const bool branch_taken_0x2da6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA6A8u;
        // 0x2da6ac: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da6a8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA6B0u;
label_2da6b0:
    // 0x2da6b0: 0x24020111  addiu       $v0, $zero, 0x111
    ctx->pc = 0x2da6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x2da6b4: 0x240505df  addiu       $a1, $zero, 0x5DF
    ctx->pc = 0x2da6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1503));
    // 0x2da6b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA6B8u;
    {
        const bool branch_taken_0x2da6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA6B8u;
        // 0x2da6bc: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da6b8) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA6C0u;
label_2da6c0:
    // 0x2da6c0: 0xaf80bbd8  sw          $zero, -0x4428($gp)
    ctx->pc = 0x2da6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 0));
label_2da6c4:
    // 0x2da6c4: 0x8f82bbd8  lw          $v0, -0x4428($gp)
    ctx->pc = 0x2da6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949848)));
    // 0x2da6c8: 0xaf85bbe4  sw          $a1, -0x441C($gp)
    ctx->pc = 0x2da6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949860), GPR_U32(ctx, 5));
    // 0x2da6cc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2da6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2da6d0: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA6D0u;
    {
        const bool branch_taken_0x2da6d0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2DA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA6D0u;
        // 0x2da6d4: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da6d0) {
            ctx->pc = 0x2DA6E8u;
            goto label_2da6e8;
        }
    }
    ctx->pc = 0x2DA6D8u;
    // 0x2da6d8: 0xaf80bbd0  sw          $zero, -0x4430($gp)
    ctx->pc = 0x2da6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949840), GPR_U32(ctx, 0));
    // 0x2da6dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DA6DCu;
    {
        const bool branch_taken_0x2da6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA6DCu;
        // 0x2da6e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da6dc) {
            ctx->pc = 0x2DA714u;
            goto label_2da714;
        }
    }
    ctx->pc = 0x2DA6E4u;
    // 0x2da6e4: 0x0  nop
    ctx->pc = 0x2da6e4u;
    // NOP
label_2da6e8:
    // 0x2da6e8: 0x3c100018  lui         $s0, 0x18
    ctx->pc = 0x2da6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24 << 16));
    // 0x2da6ec: 0x24a5faa2  addiu       $a1, $a1, -0x55E
    ctx->pc = 0x2da6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965922));
    // 0x2da6f0: 0x2610c780  addiu       $s0, $s0, -0x3880
    ctx->pc = 0x2da6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952832));
    // 0x2da6f4: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x2da6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2da6f8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2da6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6fc: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2DA6FCu;
    SET_GPR_U32(ctx, 31, 0x2DA704u);
    ctx->pc = 0x2DA700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA6FCu;
    // 0x2da700: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2DA6FCu, 0x2DA704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA704u;
label_2da704:
    // 0x2da704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da708: 0xaf90bbd0  sw          $s0, -0x4430($gp)
    ctx->pc = 0x2da708u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949840), GPR_U32(ctx, 16));
    // 0x2da70c: 0xaf82bbdc  sw          $v0, -0x4424($gp)
    ctx->pc = 0x2da70cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949852), GPR_U32(ctx, 2));
    // 0x2da710: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2da710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da714:
    // 0x2da714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2da714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2da718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2da71c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA71Cu;
        // 0x2da720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA724u;
    // 0x2da724: 0x0  nop
    ctx->pc = 0x2da724u;
    // NOP
    ctx->pc = 0x2da728u;
}
