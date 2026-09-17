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

// Function: sub_002721E8
// Address: 0x2721e8 - 0x2726c8
void sub_002721E8_0x2721e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002721E8_0x2721e8");
#endif

    switch (ctx->pc) {
        case 0x272220u: goto label_272220;
        case 0x272240u: goto label_272240;
        case 0x2722a0u: goto label_2722a0;
        case 0x27231cu: goto label_27231c;
        case 0x272334u: goto label_272334;
        case 0x272344u: goto label_272344;
        case 0x272354u: goto label_272354;
        case 0x2723c4u: goto label_2723c4;
        case 0x2723fcu: goto label_2723fc;
        case 0x27240cu: goto label_27240c;
        case 0x272448u: goto label_272448;
        case 0x272478u: goto label_272478;
        case 0x272488u: goto label_272488;
        case 0x2724c0u: goto label_2724c0;
        case 0x2724d0u: goto label_2724d0;
        case 0x272508u: goto label_272508;
        case 0x27250cu: goto label_27250c;
        case 0x27252cu: goto label_27252c;
        case 0x272540u: goto label_272540;
        case 0x272550u: goto label_272550;
        case 0x272588u: goto label_272588;
        case 0x27259cu: goto label_27259c;
        case 0x2725b8u: goto label_2725b8;
        case 0x2725f0u: goto label_2725f0;
        case 0x27261cu: goto label_27261c;
        case 0x27262cu: goto label_27262c;
        case 0x272664u: goto label_272664;
        case 0x27269cu: goto label_27269c;
        case 0x2726c0u: goto label_2726c0;
        default: break;
    }

    ctx->pc = 0x2721e8u;

    // 0x2721e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2721e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2721ec: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x2721ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2721f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2721f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2721f4: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x2721f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2721f8: 0x4610139  bgez        $v1, . + 4 + (0x139 << 2)
    ctx->pc = 0x2721F8u;
    {
        const bool branch_taken_0x2721f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2721FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721F8u;
        // 0x2721fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721f8) {
            ctx->pc = 0x2726E0u;
            return;
        }
    }
    ctx->pc = 0x272200u;
    // 0x272200: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x272200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x272204: 0x442005c  bltzl       $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x272204u;
    {
        const bool branch_taken_0x272204 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x272204) {
            ctx->pc = 0x272208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272204u;
            // 0x272208: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272378u;
            goto label_272378;
        }
    }
    ctx->pc = 0x27220Cu;
    // 0x27220c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x27220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x272210: 0x5840000e  blezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x272210u;
    {
        const bool branch_taken_0x272210 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x272210) {
            ctx->pc = 0x272214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272210u;
            // 0x272214: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27224Cu;
            goto label_27224c;
        }
    }
    ctx->pc = 0x272218u;
    // 0x272218: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272218u;
    SET_GPR_U32(ctx, 31, 0x272220u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272218u, 0x272220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272220u;
label_272220:
    // 0x272220: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x272220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272224: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x272224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x272228: 0x84830380  lh          $v1, 0x380($a0)
    ctx->pc = 0x272228u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x27222c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27222cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x272230: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x272230u;
    {
        const bool branch_taken_0x272230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272230) {
            ctx->pc = 0x272234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272230u;
            // 0x272234: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27227Cu;
            goto label_27227c;
        }
    }
    ctx->pc = 0x272238u;
    // 0x272238: 0xc09aed2  jal         func_26BB48
    ctx->pc = 0x272238u;
    SET_GPR_U32(ctx, 31, 0x272240u);
    ctx->pc = 0x27223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272238u;
    // 0x27223c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BB48u, 0x272238u, 0x272240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272240u;
label_272240:
    // 0x272240: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x272240u;
    {
        const bool branch_taken_0x272240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272240u;
        // 0x272244: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272240) {
            ctx->pc = 0x272278u;
            goto label_272278;
        }
    }
    ctx->pc = 0x272248u;
    // 0x272248: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x272248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_27224c:
    // 0x27224c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x27224cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x272250: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x272250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272254: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x272254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272258: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x272258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x27225c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x27225cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272260: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x272260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x272264: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x272264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272268: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x272268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
    // 0x27226c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x27226Cu;
    {
        const bool branch_taken_0x27226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27226Cu;
        // 0x272270: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27226c) {
            ctx->pc = 0x2723A4u;
            goto label_2723a4;
        }
    }
    ctx->pc = 0x272274u;
    // 0x272274: 0x0  nop
    ctx->pc = 0x272274u;
    // NOP
label_272278:
    // 0x272278: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x272278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_27227c:
    // 0x27227c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27227cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272280: 0x5443001d  bnel        $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x272280u;
    {
        const bool branch_taken_0x272280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x272280) {
            ctx->pc = 0x272284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272280u;
            // 0x272284: 0x8c82008c  lw          $v0, 0x8C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2722F8u;
            goto label_2722f8;
        }
    }
    ctx->pc = 0x272288u;
    // 0x272288: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x272288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x27228c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x27228cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x272290: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x272290u;
    {
        const bool branch_taken_0x272290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272290u;
        // 0x272294: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272290) {
            ctx->pc = 0x2722ECu;
            goto label_2722ec;
        }
    }
    ctx->pc = 0x272298u;
    // 0x272298: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272298u;
    SET_GPR_U32(ctx, 31, 0x2722A0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272298u, 0x2722A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2722A0u;
label_2722a0:
    // 0x2722a0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2722a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2722a4: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x2722a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2722a8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2722A8u;
    {
        const bool branch_taken_0x2722a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2722a8) {
            ctx->pc = 0x2722ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2722A8u;
            // 0x2722ac: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2722E8u;
            goto label_2722e8;
        }
    }
    ctx->pc = 0x2722B0u;
    // 0x2722b0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2722b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2722b4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2722b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2722b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2722b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2722bc: 0x24068000  addiu       $a2, $zero, -0x8000
    ctx->pc = 0x2722bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x2722c0: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x2722c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x2722c4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2722c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2722c8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2722c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x2722cc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2722ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2722d0: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x2722d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x2722d4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2722d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2722d8: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x2722d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
    // 0x2722dc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2722dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2722e0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2722E0u;
    {
        const bool branch_taken_0x2722e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2722E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722E0u;
        // 0x2722e4: 0xa4660006  sh          $a2, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722e0) {
            ctx->pc = 0x272354u;
            goto label_272354;
        }
    }
    ctx->pc = 0x2722E8u;
label_2722e8:
    // 0x2722e8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2722e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2722ec:
    // 0x2722ec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2722ECu;
    {
        const bool branch_taken_0x2722ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2722F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722ECu;
        // 0x2722f0: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722ec) {
            ctx->pc = 0x272354u;
            goto label_272354;
        }
    }
    ctx->pc = 0x2722F4u;
    // 0x2722f4: 0x0  nop
    ctx->pc = 0x2722f4u;
    // NOP
label_2722f8:
    // 0x2722f8: 0x28420024  slti        $v0, $v0, 0x24
    ctx->pc = 0x2722f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x2722fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2722fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x272300: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x272300u;
    {
        const bool branch_taken_0x272300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272300) {
            ctx->pc = 0x272304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272300u;
            // 0x272304: 0x94830008  lhu         $v1, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272364u;
            goto label_272364;
        }
    }
    ctx->pc = 0x272308u;
    // 0x272308: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x272308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x27230c: 0x54430015  bnel        $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x27230Cu;
    {
        const bool branch_taken_0x27230c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27230c) {
            ctx->pc = 0x272310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27230Cu;
            // 0x272310: 0x94830008  lhu         $v1, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272364u;
            goto label_272364;
        }
    }
    ctx->pc = 0x272314u;
    // 0x272314: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272314u;
    SET_GPR_U32(ctx, 31, 0x27231Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272314u, 0x27231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27231Cu;
label_27231c:
    // 0x27231c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x27231cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x272320: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x272320u;
    {
        const bool branch_taken_0x272320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272320) {
            ctx->pc = 0x272324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272320u;
            // 0x272324: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272360u;
            goto label_272360;
        }
    }
    ctx->pc = 0x272328u;
    // 0x272328: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x272328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x27232c: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x27232Cu;
    SET_GPR_U32(ctx, 31, 0x272334u);
    ctx->pc = 0x272330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27232Cu;
    // 0x272330: 0x2484c7c0  addiu       $a0, $a0, -0x3840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x27232Cu, 0x272334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272334u;
label_272334:
    // 0x272334: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x272334u;
    {
        const bool branch_taken_0x272334 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x272338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272334u;
        // 0x272338: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272334) {
            ctx->pc = 0x272360u;
            goto label_272360;
        }
    }
    ctx->pc = 0x27233Cu;
    // 0x27233c: 0xc09b492  jal         func_26D248
    ctx->pc = 0x27233Cu;
    SET_GPR_U32(ctx, 31, 0x272344u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x27233Cu, 0x272344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272344u;
label_272344:
    // 0x272344: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x272344u;
    {
        const bool branch_taken_0x272344 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x272348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272344u;
        // 0x272348: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272344) {
            ctx->pc = 0x272360u;
            goto label_272360;
        }
    }
    ctx->pc = 0x27234Cu;
    // 0x27234c: 0xc09935e  jal         func_264D78
    ctx->pc = 0x27234Cu;
    SET_GPR_U32(ctx, 31, 0x272354u);
    ctx->pc = 0x272350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27234Cu;
    // 0x272350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D78u, 0x27234Cu, 0x272354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272354u;
label_272354:
    // 0x272354: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x272354u;
    {
        const bool branch_taken_0x272354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272354u;
        // 0x272358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272354) {
            ctx->pc = 0x2726E0u;
            return;
        }
    }
    ctx->pc = 0x27235Cu;
    // 0x27235c: 0x0  nop
    ctx->pc = 0x27235cu;
    // NOP
label_272360:
    // 0x272360: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x272360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_272364:
    // 0x272364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272368: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x272368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x27236c: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x27236Cu;
    {
        const bool branch_taken_0x27236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27236Cu;
        // 0x272370: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27236c) {
            ctx->pc = 0x2726E0u;
            return;
        }
    }
    ctx->pc = 0x272374u;
    // 0x272374: 0x0  nop
    ctx->pc = 0x272374u;
    // NOP
label_272378:
    // 0x272378: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x272378u;
    {
        const bool branch_taken_0x272378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272378u;
        // 0x27237c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272378) {
            ctx->pc = 0x2726E0u;
            return;
        }
    }
    ctx->pc = 0x272380u;
    // 0x272380: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x272380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x272384: 0x44100d6  bgez        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x272384u;
    {
        const bool branch_taken_0x272384 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x272388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272384u;
        // 0x272388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272384) {
            ctx->pc = 0x2726E0u;
            return;
        }
    }
    ctx->pc = 0x27238Cu;
    // 0x27238c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x27238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x272390: 0x44100d3  bgez        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x272390u;
    {
        const bool branch_taken_0x272390 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x272394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272390u;
        // 0x272394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272390) {
            ctx->pc = 0x2726E0u;
            return;
        }
    }
    ctx->pc = 0x272398u;
    // 0x272398: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x272398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x27239c: 0x44100d0  bgez        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x27239Cu;
    {
        const bool branch_taken_0x27239c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2723A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27239Cu;
        // 0x2723a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27239c) {
            ctx->pc = 0x2726E0u;
            return;
        }
    }
    ctx->pc = 0x2723A4u;
label_2723a4:
    // 0x2723a4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2723a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2723a8: 0x44100cd  bgez        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x2723A8u;
    {
        const bool branch_taken_0x2723a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2723ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723A8u;
        // 0x2723ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723a8) {
            ctx->pc = 0x2726E0u;
            return;
        }
    }
    ctx->pc = 0x2723B0u;
    // 0x2723b0: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2723b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2723b4: 0x44100ca  bgez        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x2723B4u;
    {
        const bool branch_taken_0x2723b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2723B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723B4u;
        // 0x2723b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723b4) {
            ctx->pc = 0x2726E0u;
            return;
        }
    }
    ctx->pc = 0x2723BCu;
    // 0x2723bc: 0xc09c7a2  jal         func_271E88
    ctx->pc = 0x2723BCu;
    SET_GPR_U32(ctx, 31, 0x2723C4u);
    ctx->pc = 0x271E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271E88u, 0x2723BCu, 0x2723C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2723C4u;
label_2723c4:
    // 0x2723c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2723c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723c8: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x2723c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2723cc: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2723CCu;
    {
        const bool branch_taken_0x2723cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2723D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723CCu;
        // 0x2723d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723cc) {
            ctx->pc = 0x2726E0u;
            return;
        }
    }
    ctx->pc = 0x2723D4u;
    // 0x2723d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2723d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2723d8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2723d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2723dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2723dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2723e0: 0x8c632c00  lw          $v1, 0x2C00($v1)
    ctx->pc = 0x2723e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11264)));
    // 0x2723e4: 0x600008  jr          $v1
    ctx->pc = 0x2723E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2723F0u: goto label_2723f0;
            case 0x272418u: goto label_272418;
            case 0x272520u: goto label_272520;
            case 0x272548u: goto label_272548;
            case 0x272590u: goto label_272590;
            case 0x2725B0u: goto label_2725b0;
            case 0x272610u: goto label_272610;
            case 0x272670u: goto label_272670;
            case 0x2726A8u: goto label_2726a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2723E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2723ECu;
    // 0x2723ec: 0x0  nop
    ctx->pc = 0x2723ecu;
    // NOP
label_2723f0:
    // 0x2723f0: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2723f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2723f4: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x2723F4u;
    SET_GPR_U32(ctx, 31, 0x2723FCu);
    ctx->pc = 0x2723F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2723F4u;
    // 0x2723f8: 0x2484c7c0  addiu       $a0, $a0, -0x3840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x2723F4u, 0x2723FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2723FCu;
label_2723fc:
    // 0x2723fc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2723FCu;
    {
        const bool branch_taken_0x2723fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x272400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723FCu;
        // 0x272400: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723fc) {
            ctx->pc = 0x27241Cu;
            goto label_27241c;
        }
    }
    ctx->pc = 0x272404u;
    // 0x272404: 0xc09935e  jal         func_264D78
    ctx->pc = 0x272404u;
    SET_GPR_U32(ctx, 31, 0x27240Cu);
    ctx->pc = 0x272408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272404u;
    // 0x272408: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D78u, 0x272404u, 0x27240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27240Cu;
label_27240c:
    // 0x27240c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x27240Cu;
    {
        const bool branch_taken_0x27240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27240c) {
            ctx->pc = 0x2726D0u;
            return;
        }
    }
    ctx->pc = 0x272414u;
    // 0x272414: 0x0  nop
    ctx->pc = 0x272414u;
    // NOP
label_272418:
    // 0x272418: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x272418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_27241c:
    // 0x27241c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x27241cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x272420: 0x4600029  bltz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x272420u;
    {
        const bool branch_taken_0x272420 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x272424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272420u;
        // 0x272424: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272420) {
            ctx->pc = 0x2724C8u;
            goto label_2724c8;
        }
    }
    ctx->pc = 0x272428u;
    // 0x272428: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272428u;
    {
        const bool branch_taken_0x272428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272428u;
        // 0x27242c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272428) {
            ctx->pc = 0x272440u;
            goto label_272440;
        }
    }
    ctx->pc = 0x272430u;
    // 0x272430: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x272430u;
    {
        const bool branch_taken_0x272430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x272430) {
            ctx->pc = 0x272480u;
            goto label_272480;
        }
    }
    ctx->pc = 0x272438u;
    // 0x272438: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x272438u;
    {
        const bool branch_taken_0x272438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272438) {
            ctx->pc = 0x2724C8u;
            goto label_2724c8;
        }
    }
    ctx->pc = 0x272440u;
label_272440:
    // 0x272440: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272440u;
    SET_GPR_U32(ctx, 31, 0x272448u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272440u, 0x272448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272448u;
label_272448:
    // 0x272448: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x272448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x27244c: 0x24c68858  addiu       $a2, $a2, -0x77A8
    ctx->pc = 0x27244cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x272450: 0x8cc30064  lw          $v1, 0x64($a2)
    ctx->pc = 0x272450u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x272454: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x272454u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x272458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27245c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x27245cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x272460: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x272460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x272464: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x272464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x272468: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x272468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x27246c: 0xacc50064  sw          $a1, 0x64($a2)
    ctx->pc = 0x27246cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 5));
    // 0x272470: 0xc09935e  jal         func_264D78
    ctx->pc = 0x272470u;
    SET_GPR_U32(ctx, 31, 0x272478u);
    ctx->pc = 0x272474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272470u;
    // 0x272474: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D78u, 0x272470u, 0x272478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272478u;
label_272478:
    // 0x272478: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x272478u;
    {
        const bool branch_taken_0x272478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272478u;
        // 0x27247c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272478) {
            ctx->pc = 0x27250Cu;
            goto label_27250c;
        }
    }
    ctx->pc = 0x272480u;
label_272480:
    // 0x272480: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272480u;
    SET_GPR_U32(ctx, 31, 0x272488u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272480u, 0x272488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272488u;
label_272488:
    // 0x272488: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x272488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x27248c: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x27248cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x272490: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x272490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x272494: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x272494u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x272498: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x272498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27249c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27249cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2724a0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2724a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2724a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2724a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2724a8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2724a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2724ac: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2724acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2724b0: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x2724b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x2724b4: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x2724b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x2724b8: 0xc09935e  jal         func_264D78
    ctx->pc = 0x2724B8u;
    SET_GPR_U32(ctx, 31, 0x2724C0u);
    ctx->pc = 0x2724BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2724B8u;
    // 0x2724bc: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D78u, 0x2724B8u, 0x2724C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2724C0u;
label_2724c0:
    // 0x2724c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2724C0u;
    {
        const bool branch_taken_0x2724c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724C0u;
        // 0x2724c4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724c0) {
            ctx->pc = 0x27250Cu;
            goto label_27250c;
        }
    }
    ctx->pc = 0x2724C8u;
label_2724c8:
    // 0x2724c8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2724C8u;
    SET_GPR_U32(ctx, 31, 0x2724D0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2724C8u, 0x2724D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2724D0u;
label_2724d0:
    // 0x2724d0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2724d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2724d4: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x2724d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x2724d8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2724d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2724dc: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x2724dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x2724e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2724e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2724e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2724e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2724e8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2724e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2724ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2724ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2724f0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2724f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2724f4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2724f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2724f8: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x2724f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x2724fc: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x2724fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x272500: 0xc09935e  jal         func_264D78
    ctx->pc = 0x272500u;
    SET_GPR_U32(ctx, 31, 0x272508u);
    ctx->pc = 0x272504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272500u;
    // 0x272504: 0x2444000f  addiu       $a0, $v0, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D78u, 0x272500u, 0x272508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272508u;
label_272508:
    // 0x272508: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x272508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_27250c:
    // 0x27250c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x27250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x272510: 0x1c40003c  bgtz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x272510u;
    {
        const bool branch_taken_0x272510 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x272514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272510u;
        // 0x272514: 0x24046000  addiu       $a0, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272510) {
            ctx->pc = 0x272604u;
            goto label_272604;
        }
    }
    ctx->pc = 0x272518u;
    // 0x272518: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x272518u;
    {
        const bool branch_taken_0x272518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272518u;
        // 0x27251c: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272518) {
            ctx->pc = 0x272604u;
            goto label_272604;
        }
    }
    ctx->pc = 0x272520u;
label_272520:
    // 0x272520: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x272520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x272524: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x272524u;
    SET_GPR_U32(ctx, 31, 0x27252Cu);
    ctx->pc = 0x272528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272524u;
    // 0x272528: 0x2484c7c0  addiu       $a0, $a0, -0x3840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x272524u, 0x27252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27252Cu;
label_27252c:
    // 0x27252c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27252Cu;
    {
        const bool branch_taken_0x27252c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27252c) {
            ctx->pc = 0x272548u;
            goto label_272548;
        }
    }
    ctx->pc = 0x272534u;
    // 0x272534: 0x240400fa  addiu       $a0, $zero, 0xFA
    ctx->pc = 0x272534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x272538: 0xc099356  jal         func_264D58
    ctx->pc = 0x272538u;
    SET_GPR_U32(ctx, 31, 0x272540u);
    ctx->pc = 0x27253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272538u;
    // 0x27253c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D58u, 0x272538u, 0x272540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272540u;
label_272540:
    // 0x272540: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x272540u;
    {
        const bool branch_taken_0x272540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272540) {
            ctx->pc = 0x2726D0u;
            return;
        }
    }
    ctx->pc = 0x272548u;
label_272548:
    // 0x272548: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272548u;
    SET_GPR_U32(ctx, 31, 0x272550u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272548u, 0x272550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272550u;
label_272550:
    // 0x272550: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x272550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x272554: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x272554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x272558: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x272558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27255c: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x27255cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x272560: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x272560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x272564: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x272564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x272568: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x272568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x27256c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27256cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x272570: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x272570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x272574: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x272574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x272578: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x272578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x27257c: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x27257cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x272580: 0xc09935e  jal         func_264D78
    ctx->pc = 0x272580u;
    SET_GPR_U32(ctx, 31, 0x272588u);
    ctx->pc = 0x272584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272580u;
    // 0x272584: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D78u, 0x272580u, 0x272588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272588u;
label_272588:
    // 0x272588: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x272588u;
    {
        const bool branch_taken_0x272588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272588u;
        // 0x27258c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272588) {
            ctx->pc = 0x27250Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27250c;
        }
    }
    ctx->pc = 0x272590u;
label_272590:
    // 0x272590: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x272590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x272594: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x272594u;
    SET_GPR_U32(ctx, 31, 0x27259Cu);
    ctx->pc = 0x272598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272594u;
    // 0x272598: 0x2484c7d8  addiu       $a0, $a0, -0x3828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x272594u, 0x27259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27259Cu;
label_27259c:
    // 0x27259c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27259Cu;
    {
        const bool branch_taken_0x27259c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2725A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27259Cu;
        // 0x2725a0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27259c) {
            ctx->pc = 0x2725B0u;
            goto label_2725b0;
        }
    }
    ctx->pc = 0x2725A4u;
    // 0x2725a4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2725a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2725a8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2725A8u;
    {
        const bool branch_taken_0x2725a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725A8u;
        // 0x2725ac: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725a8) {
            ctx->pc = 0x2726D0u;
            return;
        }
    }
    ctx->pc = 0x2725B0u;
label_2725b0:
    // 0x2725b0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2725B0u;
    SET_GPR_U32(ctx, 31, 0x2725B8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2725B0u, 0x2725B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725B8u;
label_2725b8:
    // 0x2725b8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2725b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2725bc: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x2725bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x2725c0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2725c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2725c4: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x2725c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x2725c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2725c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2725cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2725ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2725d0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2725d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2725d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2725d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2725d8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2725d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2725dc: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2725dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2725e0: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x2725e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x2725e4: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x2725e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x2725e8: 0xc09935e  jal         func_264D78
    ctx->pc = 0x2725E8u;
    SET_GPR_U32(ctx, 31, 0x2725F0u);
    ctx->pc = 0x2725ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2725E8u;
    // 0x2725ec: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D78u, 0x2725E8u, 0x2725F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725F0u;
label_2725f0:
    // 0x2725f0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2725f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2725f4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2725f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2725f8: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2725F8u;
    {
        const bool branch_taken_0x2725f8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2725FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725F8u;
        // 0x2725fc: 0x2404c000  addiu       $a0, $zero, -0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725f8) {
            ctx->pc = 0x272604u;
            goto label_272604;
        }
    }
    ctx->pc = 0x272600u;
    // 0x272600: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x272600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_272604:
    // 0x272604: 0x1000ff53  b           . + 4 + (-0xAD << 2)
    ctx->pc = 0x272604u;
    {
        const bool branch_taken_0x272604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272604u;
        // 0x272608: 0xa4640006  sh          $a0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272604) {
            ctx->pc = 0x272354u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272354;
        }
    }
    ctx->pc = 0x27260Cu;
    // 0x27260c: 0x0  nop
    ctx->pc = 0x27260cu;
    // NOP
label_272610:
    // 0x272610: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x272610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x272614: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x272614u;
    SET_GPR_U32(ctx, 31, 0x27261Cu);
    ctx->pc = 0x272618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272614u;
    // 0x272618: 0x2484c7f0  addiu       $a0, $a0, -0x3810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x272614u, 0x27261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27261Cu;
label_27261c:
    // 0x27261c: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x27261Cu;
    {
        const bool branch_taken_0x27261c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x272620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27261Cu;
        // 0x272620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27261c) {
            ctx->pc = 0x2726E0u;
            return;
        }
    }
    ctx->pc = 0x272624u;
    // 0x272624: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272624u;
    SET_GPR_U32(ctx, 31, 0x27262Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272624u, 0x27262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27262Cu;
label_27262c:
    // 0x27262c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x27262cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x272630: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x272630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x272634: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x272634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x272638: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x272638u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x27263c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x272640: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x272640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x272644: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x272644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x272648: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x272648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27264c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x27264cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x272650: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x272650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x272654: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x272654u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x272658: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x272658u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x27265c: 0xc09935e  jal         func_264D78
    ctx->pc = 0x27265Cu;
    SET_GPR_U32(ctx, 31, 0x272664u);
    ctx->pc = 0x272660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27265Cu;
    // 0x272660: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D78u, 0x27265Cu, 0x272664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272664u;
label_272664:
    // 0x272664: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x272664u;
    {
        const bool branch_taken_0x272664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272664) {
            ctx->pc = 0x2726D0u;
            return;
        }
    }
    ctx->pc = 0x27266Cu;
    // 0x27266c: 0x0  nop
    ctx->pc = 0x27266cu;
    // NOP
label_272670:
    // 0x272670: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x272670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272674: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x272674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x272678: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x272678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27267c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27267Cu;
    {
        const bool branch_taken_0x27267c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27267c) {
            ctx->pc = 0x272694u;
            goto label_272694;
        }
    }
    ctx->pc = 0x272684u;
    // 0x272684: 0x8c620298  lw          $v0, 0x298($v1)
    ctx->pc = 0x272684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 664)));
    // 0x272688: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x272688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x27268c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27268Cu;
    {
        const bool branch_taken_0x27268c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27268c) {
            ctx->pc = 0x2726D0u;
            return;
        }
    }
    ctx->pc = 0x272694u;
label_272694:
    // 0x272694: 0xc09d14c  jal         func_274530
    ctx->pc = 0x272694u;
    SET_GPR_U32(ctx, 31, 0x27269Cu);
    ctx->pc = 0x272698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272694u;
    // 0x272698: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274530u, 0x272694u, 0x27269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27269Cu;
label_27269c:
    // 0x27269c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27269Cu;
    {
        const bool branch_taken_0x27269c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2726A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27269Cu;
        // 0x2726a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27269c) {
            ctx->pc = 0x2726E0u;
            return;
        }
    }
    ctx->pc = 0x2726A4u;
    // 0x2726a4: 0x0  nop
    ctx->pc = 0x2726a4u;
    // NOP
label_2726a8:
    // 0x2726a8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2726a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2726ac: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2726acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2726b0: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2726B0u;
    {
        const bool branch_taken_0x2726b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2726B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726B0u;
        // 0x2726b4: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726b0) {
            ctx->pc = 0x2726D0u;
            return;
        }
    }
    ctx->pc = 0x2726B8u;
    // 0x2726b8: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x2726B8u;
    SET_GPR_U32(ctx, 31, 0x2726C0u);
    ctx->pc = 0x2726BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2726B8u;
    // 0x2726bc: 0x2484c818  addiu       $a0, $a0, -0x37E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x2726B8u, 0x2726C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2726C0u;
label_2726c0:
    // 0x2726c0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2726C0u;
    {
        const bool branch_taken_0x2726c0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2726c0) {
            ctx->pc = 0x2726D0u;
            return;
        }
    }
    ctx->pc = 0x2726C8u;
}
