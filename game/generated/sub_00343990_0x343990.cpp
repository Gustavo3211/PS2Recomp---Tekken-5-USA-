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

// Function: sub_00343990
// Address: 0x343990 - 0x343b78
void sub_00343990_0x343990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343990_0x343990");
#endif

    switch (ctx->pc) {
        case 0x343990u: goto label_343990;
        case 0x343994u: goto label_343994;
        case 0x343998u: goto label_343998;
        case 0x34399cu: goto label_34399c;
        case 0x3439a0u: goto label_3439a0;
        case 0x3439a4u: goto label_3439a4;
        case 0x3439a8u: goto label_3439a8;
        case 0x3439acu: goto label_3439ac;
        case 0x3439b0u: goto label_3439b0;
        case 0x3439b4u: goto label_3439b4;
        case 0x3439b8u: goto label_3439b8;
        case 0x3439bcu: goto label_3439bc;
        case 0x3439c0u: goto label_3439c0;
        case 0x3439c4u: goto label_3439c4;
        case 0x3439c8u: goto label_3439c8;
        case 0x3439ccu: goto label_3439cc;
        case 0x3439d0u: goto label_3439d0;
        case 0x3439d4u: goto label_3439d4;
        case 0x3439d8u: goto label_3439d8;
        case 0x3439dcu: goto label_3439dc;
        case 0x3439e0u: goto label_3439e0;
        case 0x3439e4u: goto label_3439e4;
        case 0x3439e8u: goto label_3439e8;
        case 0x3439ecu: goto label_3439ec;
        case 0x3439f0u: goto label_3439f0;
        case 0x3439f4u: goto label_3439f4;
        case 0x3439f8u: goto label_3439f8;
        case 0x3439fcu: goto label_3439fc;
        case 0x343a00u: goto label_343a00;
        case 0x343a04u: goto label_343a04;
        case 0x343a08u: goto label_343a08;
        case 0x343a0cu: goto label_343a0c;
        case 0x343a10u: goto label_343a10;
        case 0x343a14u: goto label_343a14;
        case 0x343a18u: goto label_343a18;
        case 0x343a1cu: goto label_343a1c;
        case 0x343a20u: goto label_343a20;
        case 0x343a24u: goto label_343a24;
        case 0x343a28u: goto label_343a28;
        case 0x343a2cu: goto label_343a2c;
        case 0x343a30u: goto label_343a30;
        case 0x343a34u: goto label_343a34;
        case 0x343a38u: goto label_343a38;
        case 0x343a3cu: goto label_343a3c;
        case 0x343a40u: goto label_343a40;
        case 0x343a44u: goto label_343a44;
        case 0x343a48u: goto label_343a48;
        case 0x343a4cu: goto label_343a4c;
        case 0x343a50u: goto label_343a50;
        case 0x343a54u: goto label_343a54;
        case 0x343a58u: goto label_343a58;
        case 0x343a5cu: goto label_343a5c;
        case 0x343a60u: goto label_343a60;
        case 0x343a64u: goto label_343a64;
        case 0x343a68u: goto label_343a68;
        case 0x343a6cu: goto label_343a6c;
        case 0x343a70u: goto label_343a70;
        case 0x343a74u: goto label_343a74;
        case 0x343a78u: goto label_343a78;
        case 0x343a7cu: goto label_343a7c;
        case 0x343a80u: goto label_343a80;
        case 0x343a84u: goto label_343a84;
        case 0x343a88u: goto label_343a88;
        case 0x343a8cu: goto label_343a8c;
        case 0x343a90u: goto label_343a90;
        case 0x343a94u: goto label_343a94;
        case 0x343a98u: goto label_343a98;
        case 0x343a9cu: goto label_343a9c;
        case 0x343aa0u: goto label_343aa0;
        case 0x343aa4u: goto label_343aa4;
        case 0x343aa8u: goto label_343aa8;
        case 0x343aacu: goto label_343aac;
        case 0x343ab0u: goto label_343ab0;
        case 0x343ab4u: goto label_343ab4;
        case 0x343ab8u: goto label_343ab8;
        case 0x343abcu: goto label_343abc;
        case 0x343ac0u: goto label_343ac0;
        case 0x343ac4u: goto label_343ac4;
        case 0x343ac8u: goto label_343ac8;
        case 0x343accu: goto label_343acc;
        case 0x343ad0u: goto label_343ad0;
        case 0x343ad4u: goto label_343ad4;
        case 0x343ad8u: goto label_343ad8;
        case 0x343adcu: goto label_343adc;
        case 0x343ae0u: goto label_343ae0;
        case 0x343ae4u: goto label_343ae4;
        case 0x343ae8u: goto label_343ae8;
        case 0x343aecu: goto label_343aec;
        case 0x343af0u: goto label_343af0;
        case 0x343af4u: goto label_343af4;
        case 0x343af8u: goto label_343af8;
        case 0x343afcu: goto label_343afc;
        case 0x343b00u: goto label_343b00;
        case 0x343b04u: goto label_343b04;
        case 0x343b08u: goto label_343b08;
        case 0x343b0cu: goto label_343b0c;
        case 0x343b10u: goto label_343b10;
        case 0x343b14u: goto label_343b14;
        case 0x343b18u: goto label_343b18;
        case 0x343b1cu: goto label_343b1c;
        case 0x343b20u: goto label_343b20;
        case 0x343b24u: goto label_343b24;
        case 0x343b28u: goto label_343b28;
        case 0x343b2cu: goto label_343b2c;
        case 0x343b30u: goto label_343b30;
        case 0x343b34u: goto label_343b34;
        case 0x343b38u: goto label_343b38;
        case 0x343b3cu: goto label_343b3c;
        case 0x343b40u: goto label_343b40;
        case 0x343b44u: goto label_343b44;
        case 0x343b48u: goto label_343b48;
        case 0x343b4cu: goto label_343b4c;
        case 0x343b50u: goto label_343b50;
        case 0x343b54u: goto label_343b54;
        case 0x343b58u: goto label_343b58;
        case 0x343b5cu: goto label_343b5c;
        case 0x343b60u: goto label_343b60;
        case 0x343b64u: goto label_343b64;
        case 0x343b68u: goto label_343b68;
        case 0x343b6cu: goto label_343b6c;
        case 0x343b70u: goto label_343b70;
        case 0x343b74u: goto label_343b74;
        default: break;
    }

    ctx->pc = 0x343990u;

label_343990:
    // 0x343990: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x343990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_343994:
    // 0x343994: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x343994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_343998:
    // 0x343998: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x343998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34399c:
    // 0x34399c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x34399cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_3439a0:
    // 0x3439a0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3439a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3439a4:
    // 0x3439a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3439a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3439a8:
    // 0x3439a8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3439a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3439ac:
    // 0x3439ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3439b0:
    if (ctx->pc == 0x3439B0u) {
        ctx->pc = 0x3439B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439ACu;
        // 0x3439b0: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3439B4u;
        goto label_3439b4;
    }
    ctx->pc = 0x3439ACu;
    {
        const bool branch_taken_0x3439ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3439ac) {
            ctx->pc = 0x3439B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3439ACu;
            // 0x3439b0: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3439C4u;
            goto label_3439c4;
        }
    }
    ctx->pc = 0x3439B4u;
label_3439b4:
    // 0x3439b4: 0xc0d0f2e  jal         func_343CB8
label_3439b8:
    if (ctx->pc == 0x3439B8u) {
        ctx->pc = 0x3439BCu;
        goto label_3439bc;
    }
    ctx->pc = 0x3439B4u;
    SET_GPR_U32(ctx, 31, 0x3439BCu);
    ctx->pc = 0x343CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343CB8u, 0x3439B4u, 0x3439BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439BCu;
label_3439bc:
    // 0x3439bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3439bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3439c0:
    // 0x3439c0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3439c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3439c4:
    // 0x3439c4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_3439c8:
    if (ctx->pc == 0x3439C8u) {
        ctx->pc = 0x3439C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439C4u;
        // 0x3439c8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3439CCu;
        goto label_3439cc;
    }
    ctx->pc = 0x3439C4u;
    {
        const bool branch_taken_0x3439c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3439c4) {
            ctx->pc = 0x3439C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3439C4u;
            // 0x3439c8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343A14u;
            goto label_343a14;
        }
    }
    ctx->pc = 0x3439CCu;
label_3439cc:
    // 0x3439cc: 0xc0c8864  jal         func_322190
label_3439d0:
    if (ctx->pc == 0x3439D0u) {
        ctx->pc = 0x3439D4u;
        goto label_3439d4;
    }
    ctx->pc = 0x3439CCu;
    SET_GPR_U32(ctx, 31, 0x3439D4u);
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x3439CCu, 0x3439D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439D4u;
label_3439d4:
    // 0x3439d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3439d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3439d8:
    // 0x3439d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3439d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3439dc:
    // 0x3439dc: 0x246300b8  addiu       $v1, $v1, 0xB8
    ctx->pc = 0x3439dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
label_3439e0:
    // 0x3439e0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3439e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3439e4:
    // 0x3439e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3439e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3439e8:
    // 0x3439e8: 0x40f809  jalr        $v0
label_3439ec:
    if (ctx->pc == 0x3439ECu) {
        ctx->pc = 0x3439ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439E8u;
        // 0x3439ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3439F0u;
        goto label_3439f0;
    }
    ctx->pc = 0x3439E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3439F0u);
        ctx->pc = 0x3439ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439E8u;
        // 0x3439ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3439E8u, 0x3439F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3439F0u;
label_3439f0:
    // 0x3439f0: 0xc0d0f7c  jal         func_343DF0
label_3439f4:
    if (ctx->pc == 0x3439F4u) {
        ctx->pc = 0x3439F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439F0u;
        // 0x3439f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3439F8u;
        goto label_3439f8;
    }
    ctx->pc = 0x3439F0u;
    SET_GPR_U32(ctx, 31, 0x3439F8u);
    ctx->pc = 0x3439F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439F0u;
    // 0x3439f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343DF0u, 0x3439F0u, 0x3439F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439F8u;
label_3439f8:
    // 0x3439f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3439f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3439fc:
    // 0x3439fc: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x3439fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_343a00:
    // 0x343a00: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x343a00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_343a04:
    // 0x343a04: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_343a08:
    // 0x343a08: 0x40f809  jalr        $v0
label_343a0c:
    if (ctx->pc == 0x343A0Cu) {
        ctx->pc = 0x343A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A08u;
        // 0x343a0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343A10u;
        goto label_343a10;
    }
    ctx->pc = 0x343A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343A10u);
        ctx->pc = 0x343A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A08u;
        // 0x343a0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343A08u, 0x343A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343A10u;
label_343a10:
    // 0x343a10: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x343a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_343a14:
    // 0x343a14: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x343a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_343a18:
    // 0x343a18: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x343a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_343a1c:
    // 0x343a1c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x343a1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_343a20:
    // 0x343a20: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_343a24:
    // 0x343a24: 0x40f809  jalr        $v0
label_343a28:
    if (ctx->pc == 0x343A28u) {
        ctx->pc = 0x343A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A24u;
        // 0x343a28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343A2Cu;
        goto label_343a2c;
    }
    ctx->pc = 0x343A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343A2Cu);
        ctx->pc = 0x343A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A24u;
        // 0x343a28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343A24u, 0x343A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343A2Cu;
label_343a2c:
    // 0x343a2c: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x343a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_343a30:
    // 0x343a30: 0x24c2fe10  addiu       $v0, $a2, -0x1F0
    ctx->pc = 0x343a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966800));
label_343a34:
    // 0x343a34: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x343a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_343a38:
    // 0x343a38: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x343a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_343a3c:
    // 0x343a3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x343a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_343a40:
    // 0x343a40: 0xafb10060  sw          $s1, 0x60($sp)
    ctx->pc = 0x343a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 17));
label_343a44:
    // 0x343a44: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x343a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_343a48:
    // 0x343a48: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x343a48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_343a4c:
    // 0x343a4c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x343a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_343a50:
    // 0x343a50: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
label_343a54:
    if (ctx->pc == 0x343A54u) {
        ctx->pc = 0x343A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A50u;
        // 0x343a54: 0x27ae0060  addiu       $t6, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343A58u;
        goto label_343a58;
    }
    ctx->pc = 0x343A50u;
    {
        const bool branch_taken_0x343a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x343A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A50u;
        // 0x343a54: 0x27ae0060  addiu       $t6, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343a50) {
            ctx->pc = 0x343B5Cu;
            goto label_343b5c;
        }
    }
    ctx->pc = 0x343A58u;
label_343a58:
    // 0x343a58: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x343a58u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_343a5c:
    // 0x343a5c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x343a5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_343a60:
    // 0x343a60: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x343a60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_343a64:
    // 0x343a64: 0x27ab0040  addiu       $t3, $sp, 0x40
    ctx->pc = 0x343a64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_343a68:
    // 0x343a68: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x343a68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_343a6c:
    // 0x343a6c: 0x0  nop
    ctx->pc = 0x343a6cu;
    // NOP
label_343a70:
    // 0x343a70: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x343a70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
label_343a74:
    // 0x343a74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x343a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_343a78:
    // 0x343a78: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x343a78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_343a7c:
    // 0x343a7c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x343a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_343a80:
    // 0x343a80: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x343a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_343a84:
    // 0x343a84: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x343a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_343a88:
    // 0x343a88: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
label_343a8c:
    if (ctx->pc == 0x343A8Cu) {
        ctx->pc = 0x343A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A88u;
        // 0x343a8c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343A90u;
        goto label_343a90;
    }
    ctx->pc = 0x343A88u;
    {
        const bool branch_taken_0x343a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x343A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A88u;
        // 0x343a8c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343a88) {
            ctx->pc = 0x343B4Cu;
            goto label_343b4c;
        }
    }
    ctx->pc = 0x343A90u;
label_343a90:
    // 0x343a90: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x343a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_343a94:
    // 0x343a94: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x343a94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
label_343a98:
    // 0x343a98: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x343a98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_343a9c:
    // 0x343a9c: 0x25a7fe10  addiu       $a3, $t5, -0x1F0
    ctx->pc = 0x343a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 4294966800));
label_343aa0:
    // 0x343aa0: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x343aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_343aa4:
    // 0x343aa4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x343aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_343aa8:
    // 0x343aa8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x343aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_343aac:
    // 0x343aac: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x343aacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_343ab0:
    // 0x343ab0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x343ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_343ab4:
    // 0x343ab4: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_343ab8:
    if (ctx->pc == 0x343AB8u) {
        ctx->pc = 0x343AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AB4u;
        // 0x343ab8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343ABCu;
        goto label_343abc;
    }
    ctx->pc = 0x343AB4u;
    {
        const bool branch_taken_0x343ab4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x343ab4) {
            ctx->pc = 0x343AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343AB4u;
            // 0x343ab8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343AD0u;
            goto label_343ad0;
        }
    }
    ctx->pc = 0x343ABCu;
label_343abc:
    // 0x343abc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x343abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_343ac0:
    // 0x343ac0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x343ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_343ac4:
    // 0x343ac4: 0x1000000d  b           . + 4 + (0xD << 2)
label_343ac8:
    if (ctx->pc == 0x343AC8u) {
        ctx->pc = 0x343AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AC4u;
        // 0x343ac8: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343ACCu;
        goto label_343acc;
    }
    ctx->pc = 0x343AC4u;
    {
        const bool branch_taken_0x343ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AC4u;
        // 0x343ac8: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ac4) {
            ctx->pc = 0x343AFCu;
            goto label_343afc;
        }
    }
    ctx->pc = 0x343ACCu;
label_343acc:
    // 0x343acc: 0x0  nop
    ctx->pc = 0x343accu;
    // NOP
label_343ad0:
    // 0x343ad0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_343ad4:
    if (ctx->pc == 0x343AD4u) {
        ctx->pc = 0x343AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AD0u;
        // 0x343ad4: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343AD8u;
        goto label_343ad8;
    }
    ctx->pc = 0x343AD0u;
    {
        const bool branch_taken_0x343ad0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x343AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AD0u;
        // 0x343ad4: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ad0) {
            ctx->pc = 0x343AE8u;
            goto label_343ae8;
        }
    }
    ctx->pc = 0x343AD8u;
label_343ad8:
    // 0x343ad8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x343ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_343adc:
    // 0x343adc: 0x10000007  b           . + 4 + (0x7 << 2)
label_343ae0:
    if (ctx->pc == 0x343AE0u) {
        ctx->pc = 0x343AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343ADCu;
        // 0x343ae0: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343AE4u;
        goto label_343ae4;
    }
    ctx->pc = 0x343ADCu;
    {
        const bool branch_taken_0x343adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343ADCu;
        // 0x343ae0: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343adc) {
            ctx->pc = 0x343AFCu;
            goto label_343afc;
        }
    }
    ctx->pc = 0x343AE4u;
label_343ae4:
    // 0x343ae4: 0x0  nop
    ctx->pc = 0x343ae4u;
    // NOP
label_343ae8:
    // 0x343ae8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x343ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_343aec:
    // 0x343aec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x343aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_343af0:
    // 0x343af0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x343af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_343af4:
    // 0x343af4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x343af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_343af8:
    // 0x343af8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x343af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_343afc:
    // 0x343afc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x343afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_343b00:
    // 0x343b00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x343b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_343b04:
    // 0x343b04: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x343b04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_343b08:
    // 0x343b08: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x343b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_343b0c:
    // 0x343b0c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_343b10:
    if (ctx->pc == 0x343B10u) {
        ctx->pc = 0x343B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B0Cu;
        // 0x343b10: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343B14u;
        goto label_343b14;
    }
    ctx->pc = 0x343B0Cu;
    {
        const bool branch_taken_0x343b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343b0c) {
            ctx->pc = 0x343B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343B0Cu;
            // 0x343b10: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343B20u;
            goto label_343b20;
        }
    }
    ctx->pc = 0x343B14u;
label_343b14:
    // 0x343b14: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x343b14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_343b18:
    // 0x343b18: 0x10000004  b           . + 4 + (0x4 << 2)
label_343b1c:
    if (ctx->pc == 0x343B1Cu) {
        ctx->pc = 0x343B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B18u;
        // 0x343b1c: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343B20u;
        goto label_343b20;
    }
    ctx->pc = 0x343B18u;
    {
        const bool branch_taken_0x343b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B18u;
        // 0x343b1c: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b18) {
            ctx->pc = 0x343B2Cu;
            goto label_343b2c;
        }
    }
    ctx->pc = 0x343B20u;
label_343b20:
    // 0x343b20: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x343b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_343b24:
    // 0x343b24: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x343b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_343b28:
    // 0x343b28: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x343b28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_343b2c:
    // 0x343b2c: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x343b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
label_343b30:
    // 0x343b30: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x343b30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_343b34:
    // 0x343b34: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x343b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_343b38:
    // 0x343b38: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x343b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_343b3c:
    // 0x343b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x343b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_343b40:
    // 0x343b40: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x343b40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_343b44:
    // 0x343b44: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x343b44u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_343b48:
    // 0x343b48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x343b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_343b4c:
    // 0x343b4c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x343b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_343b50:
    // 0x343b50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x343b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343b54:
    // 0x343b54: 0x1443ffc6  bne         $v0, $v1, . + 4 + (-0x3A << 2)
label_343b58:
    if (ctx->pc == 0x343B58u) {
        ctx->pc = 0x343B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B54u;
        // 0x343b58: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343B5Cu;
        goto label_343b5c;
    }
    ctx->pc = 0x343B54u;
    {
        const bool branch_taken_0x343b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x343B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B54u;
        // 0x343b58: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b54) {
            ctx->pc = 0x343A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343a70;
        }
    }
    ctx->pc = 0x343B5Cu;
label_343b5c:
    // 0x343b5c: 0xc0d0d94  jal         func_343650
label_343b60:
    if (ctx->pc == 0x343B60u) {
        ctx->pc = 0x343B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B5Cu;
        // 0x343b60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343B64u;
        goto label_343b64;
    }
    ctx->pc = 0x343B5Cu;
    SET_GPR_U32(ctx, 31, 0x343B64u);
    ctx->pc = 0x343B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B5Cu;
    // 0x343b60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343650u, 0x343B5Cu, 0x343B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B64u;
label_343b64:
    // 0x343b64: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x343b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_343b68:
    // 0x343b68: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x343b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_343b6c:
    // 0x343b6c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x343b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_343b70:
    // 0x343b70: 0x3e00008  jr          $ra
label_343b74:
    if (ctx->pc == 0x343B74u) {
        ctx->pc = 0x343B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B70u;
        // 0x343b74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343B78u;
        goto label_fallthrough_0x343b70;
    }
    ctx->pc = 0x343B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B70u;
        // 0x343b74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x343b70:
    ctx->pc = 0x343B78u;
}
