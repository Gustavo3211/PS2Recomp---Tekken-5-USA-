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

// Function: sub_003189C8
// Address: 0x3189c8 - 0x318bcc
void sub_003189C8_0x3189c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003189C8_0x3189c8");
#endif

    switch (ctx->pc) {
        case 0x3189ecu: goto label_3189ec;
        case 0x318a0cu: goto label_318a0c;
        case 0x318a6cu: goto label_318a6c;
        case 0x318ab0u: goto label_318ab0;
        case 0x318accu: goto label_318acc;
        case 0x318ae4u: goto label_318ae4;
        case 0x318b00u: goto label_318b00;
        case 0x318bb4u: goto label_318bb4;
        default: break;
    }

    ctx->pc = 0x3189c8u;

    // 0x3189c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3189c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3189cc: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3189ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3189d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3189d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3189d4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3189d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3189d8: 0xafc40004  sw          $a0, 0x4($fp)
    ctx->pc = 0x3189d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
    // 0x3189dc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3189dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3189e0: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x3189e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x3189e4: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x3189E4u;
    SET_GPR_U32(ctx, 31, 0x3189ECu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3189E4u, 0x3189ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3189ECu;
label_3189ec:
    // 0x3189ec: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x3189ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3189f0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x3189f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x3189f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3189F4u;
    {
        const bool branch_taken_0x3189f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3189f4) {
            ctx->pc = 0x318A14u;
            goto label_318a14;
        }
    }
    ctx->pc = 0x3189FCu;
    // 0x3189fc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3189fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318a00: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x318a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x318a04: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x318A04u;
    SET_GPR_U32(ctx, 31, 0x318A0Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x318A04u, 0x318A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A0Cu;
label_318a0c:
    // 0x318a0c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x318A0Cu;
    {
        const bool branch_taken_0x318a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a0c) {
            ctx->pc = 0x318BB4u;
            goto label_318bb4;
        }
    }
    ctx->pc = 0x318A14u;
label_318a14:
    // 0x318a14: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x318a14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x318a18: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318a1c: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x318a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x318a20: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x318a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x318a24: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318a28: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x318a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x318a2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x318a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318a30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x318a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318a34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x318A34u;
    {
        const bool branch_taken_0x318a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a34) {
            ctx->pc = 0x318A54u;
            goto label_318a54;
        }
    }
    ctx->pc = 0x318A3Cu;
    // 0x318a3c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318a40: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x318a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x318a44: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318A44u;
    {
        const bool branch_taken_0x318a44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x318a44) {
            ctx->pc = 0x318A54u;
            goto label_318a54;
        }
    }
    ctx->pc = 0x318A4Cu;
    // 0x318a4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x318a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318a50: 0xafc40008  sw          $a0, 0x8($fp)
    ctx->pc = 0x318a50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 4));
label_318a54:
    // 0x318a54: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x318a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x318a58: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x318a58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x318a5c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318a60: 0x8c644188  lw          $a0, 0x4188($v1)
    ctx->pc = 0x318a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16776)));
    // 0x318a64: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x318A64u;
    SET_GPR_U32(ctx, 31, 0x318A6Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x318A64u, 0x318A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A6Cu;
label_318a6c:
    // 0x318a6c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x318a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x318a70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318A70u;
    {
        const bool branch_taken_0x318a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318a70) {
            ctx->pc = 0x318A80u;
            goto label_318a80;
        }
    }
    ctx->pc = 0x318A78u;
    // 0x318a78: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x318A78u;
    {
        const bool branch_taken_0x318a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a78) {
            ctx->pc = 0x318BB4u;
            goto label_318bb4;
        }
    }
    ctx->pc = 0x318A80u;
label_318a80:
    // 0x318a80: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318a84: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x318a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x318a88: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x318a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x318a8c: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318a90: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x318a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x318a94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x318a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318a98: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318a9c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x318a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x318aa0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318aa4: 0x8c4600a4  lw          $a2, 0xA4($v0)
    ctx->pc = 0x318aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x318aa8: 0xc041108  jal         func_104420
    ctx->pc = 0x318AA8u;
    SET_GPR_U32(ctx, 31, 0x318AB0u);
    ctx->pc = 0x104420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104420u, 0x318AA8u, 0x318AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318AB0u;
label_318ab0:
    // 0x318ab0: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318ab4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x318ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x318ab8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x318AB8u;
    {
        const bool branch_taken_0x318ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318ab8) {
            ctx->pc = 0x318AD4u;
            goto label_318ad4;
        }
    }
    ctx->pc = 0x318AC0u;
    // 0x318ac0: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318ac4: 0xc0c5eaf  jal         func_317ABC
    ctx->pc = 0x318AC4u;
    SET_GPR_U32(ctx, 31, 0x318ACCu);
    ctx->pc = 0x317ABCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317ABCu, 0x318AC4u, 0x318ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318ACCu;
label_318acc:
    // 0x318acc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x318ACCu;
    {
        const bool branch_taken_0x318acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318acc) {
            ctx->pc = 0x318BB4u;
            goto label_318bb4;
        }
    }
    ctx->pc = 0x318AD4u;
label_318ad4:
    // 0x318ad4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318ad8: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x318ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x318adc: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x318ADCu;
    SET_GPR_U32(ctx, 31, 0x318AE4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x318ADCu, 0x318AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318AE4u;
label_318ae4:
    // 0x318ae4: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318ae8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x318ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x318aec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x318AECu;
    {
        const bool branch_taken_0x318aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318aec) {
            ctx->pc = 0x318B0Cu;
            goto label_318b0c;
        }
    }
    ctx->pc = 0x318AF4u;
    // 0x318af4: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318af8: 0xc041150  jal         func_104540
    ctx->pc = 0x318AF8u;
    SET_GPR_U32(ctx, 31, 0x318B00u);
    ctx->pc = 0x104540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104540u, 0x318AF8u, 0x318B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318B00u;
label_318b00:
    // 0x318b00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x318b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x318b04: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318b08: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x318b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_318b0c:
    // 0x318b0c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318b10: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x318b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x318b14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x318b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x318b18: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318b1c: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x318b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x318b20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x318b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318b24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x318b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x318b28: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318b2c: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x318b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x318b30: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x318b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x318b34: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318b38: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x318b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x318b3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318b44: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x318b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x318b48: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318b4c: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x318b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x318b50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x318b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x318b54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x318b54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318b58: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318b5c: 0xac8300a8  sw          $v1, 0xA8($a0)
    ctx->pc = 0x318b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 3));
    // 0x318b60: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318b64: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x318b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x318b68: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x318b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x318b6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318B6Cu;
    {
        const bool branch_taken_0x318b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318b6c) {
            ctx->pc = 0x318B7Cu;
            goto label_318b7c;
        }
    }
    ctx->pc = 0x318B74u;
    // 0x318b74: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318b78: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x318b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 0));
label_318b7c:
    // 0x318b7c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318b80: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x318b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x318b84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318b88: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318b8c: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x318b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
    // 0x318b90: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318b94: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x318b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x318b98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x318b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x318b9c: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318ba0: 0xac82009c  sw          $v0, 0x9C($a0)
    ctx->pc = 0x318ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
    // 0x318ba4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318ba8: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x318ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x318bac: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x318BACu;
    SET_GPR_U32(ctx, 31, 0x318BB4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x318BACu, 0x318BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318BB4u;
label_318bb4:
    // 0x318bb4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x318bb4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318bb8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x318bb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318bbc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x318bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x318bc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x318bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x318BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318BCCu;
}
