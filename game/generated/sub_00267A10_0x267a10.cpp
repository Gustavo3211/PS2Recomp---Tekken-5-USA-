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

// Function: sub_00267A10
// Address: 0x267a10 - 0x267cc0
void sub_00267A10_0x267a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267A10_0x267a10");
#endif

    switch (ctx->pc) {
        case 0x267a34u: goto label_267a34;
        case 0x267a44u: goto label_267a44;
        case 0x267accu: goto label_267acc;
        case 0x267af0u: goto label_267af0;
        case 0x267b08u: goto label_267b08;
        case 0x267b18u: goto label_267b18;
        case 0x267b28u: goto label_267b28;
        case 0x267b38u: goto label_267b38;
        case 0x267b50u: goto label_267b50;
        case 0x267b60u: goto label_267b60;
        case 0x267bb0u: goto label_267bb0;
        case 0x267c60u: goto label_267c60;
        case 0x267c68u: goto label_267c68;
        case 0x267ca0u: goto label_267ca0;
        default: break;
    }

    ctx->pc = 0x267a10u;

    // 0x267a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x267a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x267a14: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x267a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x267a18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x267a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x267a1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x267a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x267a20: 0x84430148  lh          $v1, 0x148($v0)
    ctx->pc = 0x267a20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x267a24: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x267A24u;
    {
        const bool branch_taken_0x267a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x267A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A24u;
        // 0x267a28: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a24) {
            ctx->pc = 0x267A78u;
            goto label_267a78;
        }
    }
    ctx->pc = 0x267A2Cu;
    // 0x267a2c: 0xc099bf0  jal         func_266FC0
    ctx->pc = 0x267A2Cu;
    SET_GPR_U32(ctx, 31, 0x267A34u);
    ctx->pc = 0x266FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266FC0u, 0x267A2Cu, 0x267A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A34u;
label_267a34:
    // 0x267a34: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x267A34u;
    {
        const bool branch_taken_0x267a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A34u;
        // 0x267a38: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a34) {
            ctx->pc = 0x267A78u;
            goto label_267a78;
        }
    }
    ctx->pc = 0x267A3Cu;
    // 0x267a3c: 0xc099c04  jal         func_267010
    ctx->pc = 0x267A3Cu;
    SET_GPR_U32(ctx, 31, 0x267A44u);
    ctx->pc = 0x267010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267010u, 0x267A3Cu, 0x267A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A44u;
label_267a44:
    // 0x267a44: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x267A44u;
    {
        const bool branch_taken_0x267a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A44u;
        // 0x267a48: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a44) {
            ctx->pc = 0x267A78u;
            goto label_267a78;
        }
    }
    ctx->pc = 0x267A4Cu;
    // 0x267a4c: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x267a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267a50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x267a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x267a54: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x267a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x267a58: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267a5c: 0xac6000f4  sw          $zero, 0xF4($v1)
    ctx->pc = 0x267a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 0));
    // 0x267a60: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x267a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267a64: 0xac85011c  sw          $a1, 0x11C($a0)
    ctx->pc = 0x267a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 5));
    // 0x267a68: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267a6c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x267A6Cu;
    {
        const bool branch_taken_0x267a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A6Cu;
        // 0x267a70: 0xac600120  sw          $zero, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a6c) {
            ctx->pc = 0x267CB0u;
            goto label_267cb0;
        }
    }
    ctx->pc = 0x267A74u;
    // 0x267a74: 0x0  nop
    ctx->pc = 0x267a74u;
    // NOP
label_267a78:
    // 0x267a78: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x267a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x267a7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x267a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x267a80: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x267a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x267a84: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x267a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267a88: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x267a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x267a8c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267a90: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x267a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x267a94: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x267a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267a98: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x267a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
    // 0x267a9c: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x267a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x267aa0: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x267aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267aa4: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x267aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x267aa8: 0x8cc30100  lw          $v1, 0x100($a2)
    ctx->pc = 0x267aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 256)));
    // 0x267aac: 0x84a40148  lh          $a0, 0x148($a1)
    ctx->pc = 0x267aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x267ab0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x267ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x267ab4: 0x18800016  blez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x267AB4u;
    {
        const bool branch_taken_0x267ab4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x267AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AB4u;
        // 0x267ab8: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ab4) {
            ctx->pc = 0x267B10u;
            goto label_267b10;
        }
    }
    ctx->pc = 0x267ABCu;
    // 0x267abc: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x267ABCu;
    {
        const bool branch_taken_0x267abc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x267abc) {
            ctx->pc = 0x267AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267ABCu;
            // 0x267ac0: 0x84a30096  lh          $v1, 0x96($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267AD8u;
            goto label_267ad8;
        }
    }
    ctx->pc = 0x267AC4u;
    // 0x267ac4: 0xc099e3e  jal         func_2678F8
    ctx->pc = 0x267AC4u;
    SET_GPR_U32(ctx, 31, 0x267ACCu);
    ctx->pc = 0x2678F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2678F8u, 0x267AC4u, 0x267ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267ACCu;
label_267acc:
    // 0x267acc: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x267accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x267ad0: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x267ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267ad4: 0x84a30096  lh          $v1, 0x96($a1)
    ctx->pc = 0x267ad4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
label_267ad8:
    // 0x267ad8: 0x8cc2011c  lw          $v0, 0x11C($a2)
    ctx->pc = 0x267ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
    // 0x267adc: 0x54620073  bnel        $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x267ADCu;
    {
        const bool branch_taken_0x267adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x267adc) {
            ctx->pc = 0x267AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267ADCu;
            // 0x267ae0: 0xa4c00006  sh          $zero, 0x6($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267CACu;
            goto label_267cac;
        }
    }
    ctx->pc = 0x267AE4u;
    // 0x267ae4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x267ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ae8: 0xc0990ca  jal         func_264328
    ctx->pc = 0x267AE8u;
    SET_GPR_U32(ctx, 31, 0x267AF0u);
    ctx->pc = 0x267AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267AE8u;
    // 0x267aec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x267AE8u, 0x267AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267AF0u;
label_267af0:
    // 0x267af0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267af4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x267af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267af8: 0x8c620120  lw          $v0, 0x120($v1)
    ctx->pc = 0x267af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x267afc: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x267afcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x267b00: 0xc09981c  jal         func_266070
    ctx->pc = 0x267B00u;
    SET_GPR_U32(ctx, 31, 0x267B08u);
    ctx->pc = 0x267B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B00u;
    // 0x267b04: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266070u, 0x267B00u, 0x267B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B08u;
label_267b08:
    // 0x267b08: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x267B08u;
    {
        const bool branch_taken_0x267b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B08u;
        // 0x267b0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b08) {
            ctx->pc = 0x267CB0u;
            goto label_267cb0;
        }
    }
    ctx->pc = 0x267B10u;
label_267b10:
    // 0x267b10: 0xc099bf0  jal         func_266FC0
    ctx->pc = 0x267B10u;
    SET_GPR_U32(ctx, 31, 0x267B18u);
    ctx->pc = 0x266FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266FC0u, 0x267B10u, 0x267B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B18u;
label_267b18:
    // 0x267b18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x267B18u;
    {
        const bool branch_taken_0x267b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b18) {
            ctx->pc = 0x267B48u;
            goto label_267b48;
        }
    }
    ctx->pc = 0x267B20u;
    // 0x267b20: 0xc099c18  jal         func_267060
    ctx->pc = 0x267B20u;
    SET_GPR_U32(ctx, 31, 0x267B28u);
    ctx->pc = 0x267060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267060u, 0x267B20u, 0x267B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B28u;
label_267b28:
    // 0x267b28: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x267B28u;
    {
        const bool branch_taken_0x267b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B28u;
        // 0x267b2c: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b28) {
            ctx->pc = 0x267C4Cu;
            goto label_267c4c;
        }
    }
    ctx->pc = 0x267B30u;
    // 0x267b30: 0xc099c46  jal         func_267118
    ctx->pc = 0x267B30u;
    SET_GPR_U32(ctx, 31, 0x267B38u);
    ctx->pc = 0x267118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267118u, 0x267B30u, 0x267B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B38u;
label_267b38:
    // 0x267b38: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x267B38u;
    {
        const bool branch_taken_0x267b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B38u;
        // 0x267b3c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b38) {
            ctx->pc = 0x267C48u;
            goto label_267c48;
        }
    }
    ctx->pc = 0x267B40u;
    // 0x267b40: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x267B40u;
    {
        const bool branch_taken_0x267b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B40u;
        // 0x267b44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b40) {
            ctx->pc = 0x267C98u;
            goto label_267c98;
        }
    }
    ctx->pc = 0x267B48u;
label_267b48:
    // 0x267b48: 0xc099c04  jal         func_267010
    ctx->pc = 0x267B48u;
    SET_GPR_U32(ctx, 31, 0x267B50u);
    ctx->pc = 0x267010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267010u, 0x267B48u, 0x267B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B50u;
label_267b50:
    // 0x267b50: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x267B50u;
    {
        const bool branch_taken_0x267b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b50) {
            ctx->pc = 0x267C40u;
            goto label_267c40;
        }
    }
    ctx->pc = 0x267B58u;
    // 0x267b58: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x267B58u;
    SET_GPR_U32(ctx, 31, 0x267B60u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x267B58u, 0x267B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B60u;
label_267b60:
    // 0x267b60: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267b64: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x267b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x267b68: 0x8464034a  lh          $a0, 0x34A($v1)
    ctx->pc = 0x267b68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 842)));
    // 0x267b6c: 0x24850051  addiu       $a1, $a0, 0x51
    ctx->pc = 0x267b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 81));
    // 0x267b70: 0x24841050  addiu       $a0, $a0, 0x1050
    ctx->pc = 0x267b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
    // 0x267b74: 0x28a60000  slti        $a2, $a1, 0x0
    ctx->pc = 0x267b74u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x267b78: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x267b78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b7c: 0x86180b  movn        $v1, $a0, $a2
    ctx->pc = 0x267b7cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x267b80: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x267b80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x267b84: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x267b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x267b88: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x267b88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x267b8c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x267b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x267b90: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x267B90u;
    {
        const bool branch_taken_0x267b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B90u;
        // 0x267b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b90) {
            ctx->pc = 0x267CB0u;
            goto label_267cb0;
        }
    }
    ctx->pc = 0x267B98u;
    // 0x267b98: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x267b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x267b9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x267b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x267ba0: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x267BA0u;
    {
        const bool branch_taken_0x267ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BA0u;
        // 0x267ba4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ba0) {
            ctx->pc = 0x267CB0u;
            goto label_267cb0;
        }
    }
    ctx->pc = 0x267BA8u;
    // 0x267ba8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x267BA8u;
    SET_GPR_U32(ctx, 31, 0x267BB0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x267BA8u, 0x267BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267BB0u;
label_267bb0:
    // 0x267bb0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x267bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x267bb4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x267bb4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x267bb8: 0x1810  mfhi        $v1
    ctx->pc = 0x267bb8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x267bbc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x267bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x267bc0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x267BC0u;
    {
        const bool branch_taken_0x267bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BC0u;
        // 0x267bc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267bc0) {
            ctx->pc = 0x267CB0u;
            goto label_267cb0;
        }
    }
    ctx->pc = 0x267BC8u;
    // 0x267bc8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x267bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x267bcc: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x267bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x267bd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x267bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267bd4: 0x8c632ba0  lw          $v1, 0x2BA0($v1)
    ctx->pc = 0x267bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11168)));
    // 0x267bd8: 0x600008  jr          $v1
    ctx->pc = 0x267BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x267BE0u: goto label_267be0;
            case 0x267BF0u: goto label_267bf0;
            case 0x267C00u: goto label_267c00;
            case 0x267C10u: goto label_267c10;
            case 0x267C20u: goto label_267c20;
            case 0x267C30u: goto label_267c30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267BD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x267BE0u;
label_267be0:
    // 0x267be0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x267be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267be4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x267BE4u;
    {
        const bool branch_taken_0x267be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BE4u;
        // 0x267be8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267be4) {
            ctx->pc = 0x267C98u;
            goto label_267c98;
        }
    }
    ctx->pc = 0x267BECu;
    // 0x267bec: 0x0  nop
    ctx->pc = 0x267becu;
    // NOP
label_267bf0:
    // 0x267bf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x267bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bf4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x267BF4u;
    {
        const bool branch_taken_0x267bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BF4u;
        // 0x267bf8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267bf4) {
            ctx->pc = 0x267C98u;
            goto label_267c98;
        }
    }
    ctx->pc = 0x267BFCu;
    // 0x267bfc: 0x0  nop
    ctx->pc = 0x267bfcu;
    // NOP
label_267c00:
    // 0x267c00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x267c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c04: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x267C04u;
    {
        const bool branch_taken_0x267c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C04u;
        // 0x267c08: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c04) {
            ctx->pc = 0x267C98u;
            goto label_267c98;
        }
    }
    ctx->pc = 0x267C0Cu;
    // 0x267c0c: 0x0  nop
    ctx->pc = 0x267c0cu;
    // NOP
label_267c10:
    // 0x267c10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x267c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c14: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x267C14u;
    {
        const bool branch_taken_0x267c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C14u;
        // 0x267c18: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c14) {
            ctx->pc = 0x267C98u;
            goto label_267c98;
        }
    }
    ctx->pc = 0x267C1Cu;
    // 0x267c1c: 0x0  nop
    ctx->pc = 0x267c1cu;
    // NOP
label_267c20:
    // 0x267c20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x267c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x267C24u;
    {
        const bool branch_taken_0x267c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C24u;
        // 0x267c28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c24) {
            ctx->pc = 0x267C98u;
            goto label_267c98;
        }
    }
    ctx->pc = 0x267C2Cu;
    // 0x267c2c: 0x0  nop
    ctx->pc = 0x267c2cu;
    // NOP
label_267c30:
    // 0x267c30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x267c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c34: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x267C34u;
    {
        const bool branch_taken_0x267c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C34u;
        // 0x267c38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c34) {
            ctx->pc = 0x267C98u;
            goto label_267c98;
        }
    }
    ctx->pc = 0x267C3Cu;
    // 0x267c3c: 0x0  nop
    ctx->pc = 0x267c3cu;
    // NOP
label_267c40:
    // 0x267c40: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x267C40u;
    {
        const bool branch_taken_0x267c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x267c40) {
            ctx->pc = 0x267C58u;
            goto label_267c58;
        }
    }
    ctx->pc = 0x267C48u;
label_267c48:
    // 0x267c48: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x267c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_267c4c:
    // 0x267c4c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x267C4Cu;
    {
        const bool branch_taken_0x267c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C4Cu;
        // 0x267c50: 0xa4400006  sh          $zero, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c4c) {
            ctx->pc = 0x267CACu;
            goto label_267cac;
        }
    }
    ctx->pc = 0x267C54u;
    // 0x267c54: 0x0  nop
    ctx->pc = 0x267c54u;
    // NOP
label_267c58:
    // 0x267c58: 0xc0998f6  jal         func_2663D8
    ctx->pc = 0x267C58u;
    SET_GPR_U32(ctx, 31, 0x267C60u);
    ctx->pc = 0x2663D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2663D8u, 0x267C58u, 0x267C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C60u;
label_267c60:
    // 0x267c60: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x267C60u;
    SET_GPR_U32(ctx, 31, 0x267C68u);
    ctx->pc = 0x267C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C60u;
    // 0x267c64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x267C60u, 0x267C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C68u;
label_267c68:
    // 0x267c68: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x267c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267c6c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x267c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x267c70: 0x8483034a  lh          $v1, 0x34A($a0)
    ctx->pc = 0x267c70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 842)));
    // 0x267c74: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x267c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x267c78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x267C78u;
    {
        const bool branch_taken_0x267c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C78u;
        // 0x267c7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c78) {
            ctx->pc = 0x267CB0u;
            goto label_267cb0;
        }
    }
    ctx->pc = 0x267C80u;
    // 0x267c80: 0x34028007  ori         $v0, $zero, 0x8007
    ctx->pc = 0x267c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32775);
    // 0x267c84: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x267C84u;
    {
        const bool branch_taken_0x267c84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x267C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C84u;
        // 0x267c88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c84) {
            ctx->pc = 0x267CB0u;
            goto label_267cb0;
        }
    }
    ctx->pc = 0x267C8Cu;
    // 0x267c8c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267C8Cu;
    {
        const bool branch_taken_0x267c8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C8Cu;
        // 0x267c90: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c8c) {
            ctx->pc = 0x267CA8u;
            goto label_267ca8;
        }
    }
    ctx->pc = 0x267C94u;
    // 0x267c94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x267c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267c98:
    // 0x267c98: 0xc09981c  jal         func_266070
    ctx->pc = 0x267C98u;
    SET_GPR_U32(ctx, 31, 0x267CA0u);
    ctx->pc = 0x267C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C98u;
    // 0x267c9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266070u, 0x267C98u, 0x267CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267CA0u;
label_267ca0:
    // 0x267ca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267CA0u;
    {
        const bool branch_taken_0x267ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CA0u;
        // 0x267ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ca0) {
            ctx->pc = 0x267CB0u;
            goto label_267cb0;
        }
    }
    ctx->pc = 0x267CA8u;
label_267ca8:
    // 0x267ca8: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x267ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
label_267cac:
    // 0x267cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267cb0:
    // 0x267cb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x267cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267cb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x267cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x267cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x267CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CB8u;
        // 0x267cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267CC0u;
}
