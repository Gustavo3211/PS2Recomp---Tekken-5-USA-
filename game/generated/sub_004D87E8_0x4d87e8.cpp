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

// Function: sub_004D87E8
// Address: 0x4d87e8 - 0x4d8b60
void sub_004D87E8_0x4d87e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D87E8_0x4d87e8");
#endif

    switch (ctx->pc) {
        case 0x4d87e8u: goto label_4d87e8;
        case 0x4d87ecu: goto label_4d87ec;
        case 0x4d87f0u: goto label_4d87f0;
        case 0x4d87f4u: goto label_4d87f4;
        case 0x4d87f8u: goto label_4d87f8;
        case 0x4d87fcu: goto label_4d87fc;
        case 0x4d8800u: goto label_4d8800;
        case 0x4d8804u: goto label_4d8804;
        case 0x4d8808u: goto label_4d8808;
        case 0x4d880cu: goto label_4d880c;
        case 0x4d8810u: goto label_4d8810;
        case 0x4d8814u: goto label_4d8814;
        case 0x4d8818u: goto label_4d8818;
        case 0x4d881cu: goto label_4d881c;
        case 0x4d8820u: goto label_4d8820;
        case 0x4d8824u: goto label_4d8824;
        case 0x4d8828u: goto label_4d8828;
        case 0x4d882cu: goto label_4d882c;
        case 0x4d8830u: goto label_4d8830;
        case 0x4d8834u: goto label_4d8834;
        case 0x4d8838u: goto label_4d8838;
        case 0x4d883cu: goto label_4d883c;
        case 0x4d8840u: goto label_4d8840;
        case 0x4d8844u: goto label_4d8844;
        case 0x4d8848u: goto label_4d8848;
        case 0x4d884cu: goto label_4d884c;
        case 0x4d8850u: goto label_4d8850;
        case 0x4d8854u: goto label_4d8854;
        case 0x4d8858u: goto label_4d8858;
        case 0x4d885cu: goto label_4d885c;
        case 0x4d8860u: goto label_4d8860;
        case 0x4d8864u: goto label_4d8864;
        case 0x4d8868u: goto label_4d8868;
        case 0x4d886cu: goto label_4d886c;
        case 0x4d8870u: goto label_4d8870;
        case 0x4d8874u: goto label_4d8874;
        case 0x4d8878u: goto label_4d8878;
        case 0x4d887cu: goto label_4d887c;
        case 0x4d8880u: goto label_4d8880;
        case 0x4d8884u: goto label_4d8884;
        case 0x4d8888u: goto label_4d8888;
        case 0x4d888cu: goto label_4d888c;
        case 0x4d8890u: goto label_4d8890;
        case 0x4d8894u: goto label_4d8894;
        case 0x4d8898u: goto label_4d8898;
        case 0x4d889cu: goto label_4d889c;
        case 0x4d88a0u: goto label_4d88a0;
        case 0x4d88a4u: goto label_4d88a4;
        case 0x4d88a8u: goto label_4d88a8;
        case 0x4d88acu: goto label_4d88ac;
        case 0x4d88b0u: goto label_4d88b0;
        case 0x4d88b4u: goto label_4d88b4;
        case 0x4d88b8u: goto label_4d88b8;
        case 0x4d88bcu: goto label_4d88bc;
        case 0x4d88c0u: goto label_4d88c0;
        case 0x4d88c4u: goto label_4d88c4;
        case 0x4d88c8u: goto label_4d88c8;
        case 0x4d88ccu: goto label_4d88cc;
        case 0x4d88d0u: goto label_4d88d0;
        case 0x4d88d4u: goto label_4d88d4;
        case 0x4d88d8u: goto label_4d88d8;
        case 0x4d88dcu: goto label_4d88dc;
        case 0x4d88e0u: goto label_4d88e0;
        case 0x4d88e4u: goto label_4d88e4;
        case 0x4d88e8u: goto label_4d88e8;
        case 0x4d88ecu: goto label_4d88ec;
        case 0x4d88f0u: goto label_4d88f0;
        case 0x4d88f4u: goto label_4d88f4;
        case 0x4d88f8u: goto label_4d88f8;
        case 0x4d88fcu: goto label_4d88fc;
        case 0x4d8900u: goto label_4d8900;
        case 0x4d8904u: goto label_4d8904;
        case 0x4d8908u: goto label_4d8908;
        case 0x4d890cu: goto label_4d890c;
        case 0x4d8910u: goto label_4d8910;
        case 0x4d8914u: goto label_4d8914;
        case 0x4d8918u: goto label_4d8918;
        case 0x4d891cu: goto label_4d891c;
        case 0x4d8920u: goto label_4d8920;
        case 0x4d8924u: goto label_4d8924;
        case 0x4d8928u: goto label_4d8928;
        case 0x4d892cu: goto label_4d892c;
        case 0x4d8930u: goto label_4d8930;
        case 0x4d8934u: goto label_4d8934;
        case 0x4d8938u: goto label_4d8938;
        case 0x4d893cu: goto label_4d893c;
        case 0x4d8940u: goto label_4d8940;
        case 0x4d8944u: goto label_4d8944;
        case 0x4d8948u: goto label_4d8948;
        case 0x4d894cu: goto label_4d894c;
        case 0x4d8950u: goto label_4d8950;
        case 0x4d8954u: goto label_4d8954;
        case 0x4d8958u: goto label_4d8958;
        case 0x4d895cu: goto label_4d895c;
        case 0x4d8960u: goto label_4d8960;
        case 0x4d8964u: goto label_4d8964;
        case 0x4d8968u: goto label_4d8968;
        case 0x4d896cu: goto label_4d896c;
        case 0x4d8970u: goto label_4d8970;
        case 0x4d8974u: goto label_4d8974;
        case 0x4d8978u: goto label_4d8978;
        case 0x4d897cu: goto label_4d897c;
        case 0x4d8980u: goto label_4d8980;
        case 0x4d8984u: goto label_4d8984;
        case 0x4d8988u: goto label_4d8988;
        case 0x4d898cu: goto label_4d898c;
        case 0x4d8990u: goto label_4d8990;
        case 0x4d8994u: goto label_4d8994;
        case 0x4d8998u: goto label_4d8998;
        case 0x4d899cu: goto label_4d899c;
        case 0x4d89a0u: goto label_4d89a0;
        case 0x4d89a4u: goto label_4d89a4;
        case 0x4d89a8u: goto label_4d89a8;
        case 0x4d89acu: goto label_4d89ac;
        case 0x4d89b0u: goto label_4d89b0;
        case 0x4d89b4u: goto label_4d89b4;
        case 0x4d89b8u: goto label_4d89b8;
        case 0x4d89bcu: goto label_4d89bc;
        case 0x4d89c0u: goto label_4d89c0;
        case 0x4d89c4u: goto label_4d89c4;
        case 0x4d89c8u: goto label_4d89c8;
        case 0x4d89ccu: goto label_4d89cc;
        case 0x4d89d0u: goto label_4d89d0;
        case 0x4d89d4u: goto label_4d89d4;
        case 0x4d89d8u: goto label_4d89d8;
        case 0x4d89dcu: goto label_4d89dc;
        case 0x4d89e0u: goto label_4d89e0;
        case 0x4d89e4u: goto label_4d89e4;
        case 0x4d89e8u: goto label_4d89e8;
        case 0x4d89ecu: goto label_4d89ec;
        case 0x4d89f0u: goto label_4d89f0;
        case 0x4d89f4u: goto label_4d89f4;
        case 0x4d89f8u: goto label_4d89f8;
        case 0x4d89fcu: goto label_4d89fc;
        case 0x4d8a00u: goto label_4d8a00;
        case 0x4d8a04u: goto label_4d8a04;
        case 0x4d8a08u: goto label_4d8a08;
        case 0x4d8a0cu: goto label_4d8a0c;
        case 0x4d8a10u: goto label_4d8a10;
        case 0x4d8a14u: goto label_4d8a14;
        case 0x4d8a18u: goto label_4d8a18;
        case 0x4d8a1cu: goto label_4d8a1c;
        case 0x4d8a20u: goto label_4d8a20;
        case 0x4d8a24u: goto label_4d8a24;
        case 0x4d8a28u: goto label_4d8a28;
        case 0x4d8a2cu: goto label_4d8a2c;
        case 0x4d8a30u: goto label_4d8a30;
        case 0x4d8a34u: goto label_4d8a34;
        case 0x4d8a38u: goto label_4d8a38;
        case 0x4d8a3cu: goto label_4d8a3c;
        case 0x4d8a40u: goto label_4d8a40;
        case 0x4d8a44u: goto label_4d8a44;
        case 0x4d8a48u: goto label_4d8a48;
        case 0x4d8a4cu: goto label_4d8a4c;
        case 0x4d8a50u: goto label_4d8a50;
        case 0x4d8a54u: goto label_4d8a54;
        case 0x4d8a58u: goto label_4d8a58;
        case 0x4d8a5cu: goto label_4d8a5c;
        case 0x4d8a60u: goto label_4d8a60;
        case 0x4d8a64u: goto label_4d8a64;
        case 0x4d8a68u: goto label_4d8a68;
        case 0x4d8a6cu: goto label_4d8a6c;
        case 0x4d8a70u: goto label_4d8a70;
        case 0x4d8a74u: goto label_4d8a74;
        case 0x4d8a78u: goto label_4d8a78;
        case 0x4d8a7cu: goto label_4d8a7c;
        case 0x4d8a80u: goto label_4d8a80;
        case 0x4d8a84u: goto label_4d8a84;
        case 0x4d8a88u: goto label_4d8a88;
        case 0x4d8a8cu: goto label_4d8a8c;
        case 0x4d8a90u: goto label_4d8a90;
        case 0x4d8a94u: goto label_4d8a94;
        case 0x4d8a98u: goto label_4d8a98;
        case 0x4d8a9cu: goto label_4d8a9c;
        case 0x4d8aa0u: goto label_4d8aa0;
        case 0x4d8aa4u: goto label_4d8aa4;
        case 0x4d8aa8u: goto label_4d8aa8;
        case 0x4d8aacu: goto label_4d8aac;
        case 0x4d8ab0u: goto label_4d8ab0;
        case 0x4d8ab4u: goto label_4d8ab4;
        case 0x4d8ab8u: goto label_4d8ab8;
        case 0x4d8abcu: goto label_4d8abc;
        case 0x4d8ac0u: goto label_4d8ac0;
        case 0x4d8ac4u: goto label_4d8ac4;
        case 0x4d8ac8u: goto label_4d8ac8;
        case 0x4d8accu: goto label_4d8acc;
        case 0x4d8ad0u: goto label_4d8ad0;
        case 0x4d8ad4u: goto label_4d8ad4;
        case 0x4d8ad8u: goto label_4d8ad8;
        case 0x4d8adcu: goto label_4d8adc;
        case 0x4d8ae0u: goto label_4d8ae0;
        case 0x4d8ae4u: goto label_4d8ae4;
        case 0x4d8ae8u: goto label_4d8ae8;
        case 0x4d8aecu: goto label_4d8aec;
        case 0x4d8af0u: goto label_4d8af0;
        case 0x4d8af4u: goto label_4d8af4;
        case 0x4d8af8u: goto label_4d8af8;
        case 0x4d8afcu: goto label_4d8afc;
        case 0x4d8b00u: goto label_4d8b00;
        case 0x4d8b04u: goto label_4d8b04;
        case 0x4d8b08u: goto label_4d8b08;
        case 0x4d8b0cu: goto label_4d8b0c;
        case 0x4d8b10u: goto label_4d8b10;
        case 0x4d8b14u: goto label_4d8b14;
        case 0x4d8b18u: goto label_4d8b18;
        case 0x4d8b1cu: goto label_4d8b1c;
        case 0x4d8b20u: goto label_4d8b20;
        case 0x4d8b24u: goto label_4d8b24;
        case 0x4d8b28u: goto label_4d8b28;
        case 0x4d8b2cu: goto label_4d8b2c;
        case 0x4d8b30u: goto label_4d8b30;
        case 0x4d8b34u: goto label_4d8b34;
        case 0x4d8b38u: goto label_4d8b38;
        case 0x4d8b3cu: goto label_4d8b3c;
        case 0x4d8b40u: goto label_4d8b40;
        case 0x4d8b44u: goto label_4d8b44;
        case 0x4d8b48u: goto label_4d8b48;
        case 0x4d8b4cu: goto label_4d8b4c;
        case 0x4d8b50u: goto label_4d8b50;
        case 0x4d8b54u: goto label_4d8b54;
        case 0x4d8b58u: goto label_4d8b58;
        case 0x4d8b5cu: goto label_4d8b5c;
        default: break;
    }

    ctx->pc = 0x4d87e8u;

label_4d87e8:
    // 0x4d87e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d87e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d87ec:
    // 0x4d87ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d87ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d87f0:
    // 0x4d87f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d87f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d87f4:
    // 0x4d87f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d87f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d87f8:
    // 0x4d87f8: 0x8136442  j           func_4D9108
label_4d87fc:
    if (ctx->pc == 0x4D87FCu) {
        ctx->pc = 0x4D87FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D87F8u;
        // 0x4d87fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8800u;
        goto label_4d8800;
    }
    ctx->pc = 0x4D87F8u;
    ctx->pc = 0x4D87FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D87F8u;
    // 0x4d87fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D9108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9108u, 0x4D87F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D8800u;
label_4d8800:
    // 0x4d8800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d8800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d8804:
    // 0x4d8804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d8804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d8808:
    // 0x4d8808: 0x3e00008  jr          $ra
label_4d880c:
    if (ctx->pc == 0x4D880Cu) {
        ctx->pc = 0x4D880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8808u;
        // 0x4d880c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8810u;
        goto label_4d8810;
    }
    ctx->pc = 0x4D8808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8808u;
        // 0x4d880c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D8810u;
label_4d8810:
    // 0x4d8810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d8810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d8814:
    // 0x4d8814: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d8814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4d8818:
    // 0x4d8818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d8818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d881c:
    // 0x4d881c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d881cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d8820:
    // 0x4d8820: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d8820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d8824:
    // 0x4d8824: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d8824u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4d8828:
    // 0x4d8828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d8828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d882c:
    // 0x4d882c: 0x246310d0  addiu       $v1, $v1, 0x10D0
    ctx->pc = 0x4d882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4304));
label_4d8830:
    // 0x4d8830: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4d8830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4d8834:
    // 0x4d8834: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d8834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d8838:
    // 0x4d8838: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d8838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4d883c:
    // 0x4d883c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4d883cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4d8840:
    // 0x4d8840: 0xc12b638  jal         func_4AD8E0
label_4d8844:
    if (ctx->pc == 0x4D8844u) {
        ctx->pc = 0x4D8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8840u;
        // 0x4d8844: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8848u;
        goto label_4d8848;
    }
    ctx->pc = 0x4D8840u;
    SET_GPR_U32(ctx, 31, 0x4D8848u);
    ctx->pc = 0x4D8844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8840u;
    // 0x4d8844: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4D8840u, 0x4D8848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8848u;
label_4d8848:
    // 0x4d8848: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_4d884c:
    if (ctx->pc == 0x4D884Cu) {
        ctx->pc = 0x4D884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8848u;
        // 0x4d884c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8850u;
        goto label_4d8850;
    }
    ctx->pc = 0x4D8848u;
    {
        const bool branch_taken_0x4d8848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8848u;
        // 0x4d884c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8848) {
            ctx->pc = 0x4D88A8u;
            goto label_4d88a8;
        }
    }
    ctx->pc = 0x4D8850u;
label_4d8850:
    // 0x4d8850: 0xc12b5dc  jal         func_4AD770
label_4d8854:
    if (ctx->pc == 0x4D8854u) {
        ctx->pc = 0x4D8858u;
        goto label_4d8858;
    }
    ctx->pc = 0x4D8850u;
    SET_GPR_U32(ctx, 31, 0x4D8858u);
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D8850u, 0x4D8858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8858u;
label_4d8858:
    // 0x4d8858: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x4d8858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_4d885c:
    // 0x4d885c: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4d885cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
label_4d8860:
    // 0x4d8860: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x4d8860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
label_4d8864:
    // 0x4d8864: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4d8864u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_4d8868:
    // 0x4d8868: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x4d8868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_4d886c:
    // 0x4d886c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d886cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d8870:
    // 0x4d8870: 0x260601bc  addiu       $a2, $s0, 0x1BC
    ctx->pc = 0x4d8870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
label_4d8874:
    // 0x4d8874: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d8874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d8878:
    // 0x4d8878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d8878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d887c:
    // 0x4d887c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d887cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d8880:
    // 0x4d8880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d8880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d8884:
    // 0x4d8884: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4d8884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4d8888:
    // 0x4d8888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d8888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d888c:
    // 0x4d888c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d888cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4d8890:
    // 0x4d8890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d8890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d8894:
    // 0x4d8894: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4d8894u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d8898:
    // 0x4d8898: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d8898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4d889c:
    // 0x4d889c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4d889cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_4d88a0:
    // 0x4d88a0: 0x8136230  j           func_4D88C0
label_4d88a4:
    if (ctx->pc == 0x4D88A4u) {
        ctx->pc = 0x4D88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D88A0u;
        // 0x4d88a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D88A8u;
        goto label_4d88a8;
    }
    ctx->pc = 0x4D88A0u;
    ctx->pc = 0x4D88A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D88A0u;
    // 0x4d88a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D88C0u;
    goto label_4d88c0;
    ctx->pc = 0x4D88A8u;
label_4d88a8:
    // 0x4d88a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d88a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d88ac:
    // 0x4d88ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d88acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d88b0:
    // 0x4d88b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d88b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d88b4:
    // 0x4d88b4: 0x3e00008  jr          $ra
label_4d88b8:
    if (ctx->pc == 0x4D88B8u) {
        ctx->pc = 0x4D88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D88B4u;
        // 0x4d88b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D88BCu;
        goto label_4d88bc;
    }
    ctx->pc = 0x4D88B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D88B4u;
        // 0x4d88b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D88B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D88BCu;
label_4d88bc:
    // 0x4d88bc: 0x0  nop
    ctx->pc = 0x4d88bcu;
    // NOP
label_4d88c0:
    // 0x4d88c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d88c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d88c4:
    // 0x4d88c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4d88c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d88c8:
    // 0x4d88c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d88c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4d88cc:
    // 0x4d88cc: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4d88ccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
label_4d88d0:
    // 0x4d88d0: 0x258a10d0  addiu       $t2, $t4, 0x10D0
    ctx->pc = 0x4d88d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 4304));
label_4d88d4:
    // 0x4d88d4: 0x24e90014  addiu       $t1, $a3, 0x14
    ctx->pc = 0x4d88d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_4d88d8:
    // 0x4d88d8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4d88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4d88dc:
    // 0x4d88dc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d88dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4d88e0:
    // 0x4d88e0: 0x85220002  lh          $v0, 0x2($t1)
    ctx->pc = 0x4d88e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_4d88e4:
    // 0x4d88e4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4d88e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4d88e8:
    // 0x4d88e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d88e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d88ec:
    // 0x4d88ec: 0x8c8510ec  lw          $a1, 0x10EC($a0)
    ctx->pc = 0x4d88ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4332)));
label_4d88f0:
    // 0x4d88f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d88f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4d88f4:
    // 0x4d88f4: 0x24eb01bc  addiu       $t3, $a3, 0x1BC
    ctx->pc = 0x4d88f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
label_4d88f8:
    // 0x4d88f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d88f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d88fc:
    // 0x4d88fc: 0x24e80164  addiu       $t0, $a3, 0x164
    ctx->pc = 0x4d88fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 356));
label_4d8900:
    // 0x4d8900: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4d8900u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_4d8904:
    // 0x4d8904: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4d8904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4d8908:
    // 0x4d8908: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4d8908u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4d890c:
    // 0x4d890c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4d890cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4d8910:
    // 0x4d8910: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d8910u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d8914:
    // 0x4d8914: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4d8914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d8918:
    // 0x4d8918: 0x440001b  bltz        $v0, . + 4 + (0x1B << 2)
label_4d891c:
    if (ctx->pc == 0x4D891Cu) {
        ctx->pc = 0x4D891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8918u;
        // 0x4d891c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8920u;
        goto label_4d8920;
    }
    ctx->pc = 0x4D8918u;
    {
        const bool branch_taken_0x4d8918 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8918u;
        // 0x4d891c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8918) {
            ctx->pc = 0x4D8988u;
            goto label_4d8988;
        }
    }
    ctx->pc = 0x4D8920u;
label_4d8920:
    // 0x4d8920: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4d8920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d8924:
    // 0x4d8924: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4d8924u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d8928:
    // 0x4d8928: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
label_4d892c:
    if (ctx->pc == 0x4D892Cu) {
        ctx->pc = 0x4D892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8928u;
        // 0x4d892c: 0x24e60128  addiu       $a2, $a3, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8930u;
        goto label_4d8930;
    }
    ctx->pc = 0x4D8928u;
    {
        const bool branch_taken_0x4d8928 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8928u;
        // 0x4d892c: 0x24e60128  addiu       $a2, $a3, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8928) {
            ctx->pc = 0x4D8988u;
            goto label_4d8988;
        }
    }
    ctx->pc = 0x4D8930u;
label_4d8930:
    // 0x4d8930: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d8930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4d8934:
    // 0x4d8934: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x4d8934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
label_4d8938:
    // 0x4d8938: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d8938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d893c:
    // 0x4d893c: 0x24448000  addiu       $a0, $v0, -0x8000
    ctx->pc = 0x4d893cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
label_4d8940:
    // 0x4d8940: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
label_4d8944:
    if (ctx->pc == 0x4D8944u) {
        ctx->pc = 0x4D8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8940u;
        // 0x4d8944: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8948u;
        goto label_4d8948;
    }
    ctx->pc = 0x4D8940u;
    {
        const bool branch_taken_0x4d8940 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8940u;
        // 0x4d8944: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8940) {
            ctx->pc = 0x4D8950u;
            goto label_4d8950;
        }
    }
    ctx->pc = 0x4D8948u;
label_4d8948:
    // 0x4d8948: 0x10000003  b           . + 4 + (0x3 << 2)
label_4d894c:
    if (ctx->pc == 0x4D894Cu) {
        ctx->pc = 0x4D894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8948u;
        // 0x4d894c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8950u;
        goto label_4d8950;
    }
    ctx->pc = 0x4D8948u;
    {
        const bool branch_taken_0x4d8948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8948u;
        // 0x4d894c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8948) {
            ctx->pc = 0x4D8958u;
            goto label_4d8958;
        }
    }
    ctx->pc = 0x4D8950u;
label_4d8950:
    // 0x4d8950: 0x3c02ffe8  lui         $v0, 0xFFE8
    ctx->pc = 0x4d8950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65512 << 16));
label_4d8954:
    // 0x4d8954: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4d8954u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_4d8958:
    // 0x4d8958: 0x258510d0  addiu       $a1, $t4, 0x10D0
    ctx->pc = 0x4d8958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 4304));
label_4d895c:
    // 0x4d895c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d895cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d8960:
    // 0x4d8960: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d8960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d8964:
    // 0x4d8964: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4d8964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4d8968:
    // 0x4d8968: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4d8968u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4d896c:
    // 0x4d896c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d8970:
    // 0x4d8970: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4d8970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4d8974:
    // 0x4d8974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d8974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d8978:
    // 0x4d8978: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4d8978u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_4d897c:
    // 0x4d897c: 0x81362ca  j           func_4D8B28
label_4d8980:
    if (ctx->pc == 0x4D8980u) {
        ctx->pc = 0x4D8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D897Cu;
        // 0x4d8980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8984u;
        goto label_4d8984;
    }
    ctx->pc = 0x4D897Cu;
    ctx->pc = 0x4D8980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D897Cu;
    // 0x4d8980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8B28u;
    goto label_4d8b28;
    ctx->pc = 0x4D8984u;
label_4d8984:
    // 0x4d8984: 0x0  nop
    ctx->pc = 0x4d8984u;
    // NOP
label_4d8988:
    // 0x4d8988: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x4d8988u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_4d898c:
    // 0x4d898c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d898cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d8990:
    // 0x4d8990: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4d8990u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
label_4d8994:
    // 0x4d8994: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4d8994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4d8998:
    // 0x4d8998: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d8998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d899c:
    // 0x4d899c: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4d899cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d89a0:
    // 0x4d89a0: 0x81362ca  j           func_4D8B28
label_4d89a4:
    if (ctx->pc == 0x4D89A4u) {
        ctx->pc = 0x4D89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D89A0u;
        // 0x4d89a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D89A8u;
        goto label_4d89a8;
    }
    ctx->pc = 0x4D89A0u;
    ctx->pc = 0x4D89A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D89A0u;
    // 0x4d89a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8B28u;
    goto label_4d8b28;
    ctx->pc = 0x4D89A8u;
label_4d89a8:
    // 0x4d89a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d89a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d89ac:
    // 0x4d89ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4d89acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d89b0:
    // 0x4d89b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d89b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4d89b4:
    // 0x4d89b4: 0x244a0128  addiu       $t2, $v0, 0x128
    ctx->pc = 0x4d89b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
label_4d89b8:
    // 0x4d89b8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4d89b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d89bc:
    // 0x4d89bc: 0x244b0014  addiu       $t3, $v0, 0x14
    ctx->pc = 0x4d89bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_4d89c0:
    // 0x4d89c0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4d89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4d89c4:
    // 0x4d89c4: 0x244901bc  addiu       $t1, $v0, 0x1BC
    ctx->pc = 0x4d89c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
label_4d89c8:
    // 0x4d89c8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d89c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d89cc:
    // 0x4d89cc: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x4d89ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_4d89d0:
    // 0x4d89d0: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x4d89d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_4d89d4:
    // 0x4d89d4: 0x24a810d0  addiu       $t0, $a1, 0x10D0
    ctx->pc = 0x4d89d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4304));
label_4d89d8:
    // 0x4d89d8: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x4d89d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_4d89dc:
    // 0x4d89dc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d89dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d89e0:
    // 0x4d89e0: 0x671826  xor         $v1, $v1, $a3
    ctx->pc = 0x4d89e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
label_4d89e4:
    // 0x4d89e4: 0xaca710d4  sw          $a3, 0x10D4($a1)
    ctx->pc = 0x4d89e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4308), GPR_U32(ctx, 7));
label_4d89e8:
    // 0x4d89e8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4d89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4d89ec:
    // 0x4d89ec: 0xc3302b  sltu        $a2, $a2, $v1
    ctx->pc = 0x4d89ecu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d89f0:
    // 0x4d89f0: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
label_4d89f4:
    if (ctx->pc == 0x4D89F4u) {
        ctx->pc = 0x4D89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D89F0u;
        // 0x4d89f4: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D89F8u;
        goto label_4d89f8;
    }
    ctx->pc = 0x4D89F0u;
    {
        const bool branch_taken_0x4d89f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D89F0u;
        // 0x4d89f4: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d89f0) {
            ctx->pc = 0x4D8A30u;
            goto label_4d8a30;
        }
    }
    ctx->pc = 0x4D89F8u;
label_4d89f8:
    // 0x4d89f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4d89fc:
    // 0x4d89fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d89fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d8a00:
    // 0x4d8a00: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4d8a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4d8a04:
    // 0x4d8a04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4d8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d8a08:
    // 0x4d8a08: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4d8a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
label_4d8a0c:
    // 0x4d8a0c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4d8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4d8a10:
    // 0x4d8a10: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4d8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_4d8a14:
    // 0x4d8a14: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4d8a14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_4d8a18:
    // 0x4d8a18: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4d8a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4d8a1c:
    // 0x4d8a1c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4d8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4d8a20:
    // 0x4d8a20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d8a24:
    // 0x4d8a24: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4d8a24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_4d8a28:
    // 0x4d8a28: 0x81362ca  j           func_4D8B28
label_4d8a2c:
    if (ctx->pc == 0x4D8A2Cu) {
        ctx->pc = 0x4D8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8A28u;
        // 0x4d8a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8A30u;
        goto label_4d8a30;
    }
    ctx->pc = 0x4D8A28u;
    ctx->pc = 0x4D8A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8A28u;
    // 0x4d8a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8B28u;
    goto label_4d8b28;
    ctx->pc = 0x4D8A30u;
label_4d8a30:
    // 0x4d8a30: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4d8a30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4d8a34:
    // 0x4d8a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d8a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d8a38:
    // 0x4d8a38: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d8a3c:
    // 0x4d8a3c: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4d8a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d8a40:
    // 0x4d8a40: 0x8136292  j           func_4D8A48
label_4d8a44:
    if (ctx->pc == 0x4D8A44u) {
        ctx->pc = 0x4D8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8A40u;
        // 0x4d8a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8A48u;
        goto label_4d8a48;
    }
    ctx->pc = 0x4D8A40u;
    ctx->pc = 0x4D8A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8A40u;
    // 0x4d8a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8A48u;
    goto label_4d8a48;
    ctx->pc = 0x4D8A48u;
label_4d8a48:
    // 0x4d8a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d8a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d8a4c:
    // 0x4d8a4c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4d8a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d8a50:
    // 0x4d8a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d8a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4d8a54:
    // 0x4d8a54: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4d8a58:
    // 0x4d8a58: 0x244b10d0  addiu       $t3, $v0, 0x10D0
    ctx->pc = 0x4d8a58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
label_4d8a5c:
    // 0x4d8a5c: 0x24ed0014  addiu       $t5, $a3, 0x14
    ctx->pc = 0x4d8a5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_4d8a60:
    // 0x4d8a60: 0x85a30002  lh          $v1, 0x2($t5)
    ctx->pc = 0x4d8a60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
label_4d8a64:
    // 0x4d8a64: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d8a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4d8a68:
    // 0x4d8a68: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4d8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4d8a6c:
    // 0x4d8a6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4d8a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d8a70:
    // 0x4d8a70: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4d8a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_4d8a74:
    // 0x4d8a74: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x4d8a74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
label_4d8a78:
    // 0x4d8a78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d8a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d8a7c:
    // 0x4d8a7c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x4d8a7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d8a80:
    // 0x4d8a80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d8a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d8a84:
    // 0x4d8a84: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4d8a84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
label_4d8a88:
    // 0x4d8a88: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4d8a88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_4d8a8c:
    // 0x4d8a8c: 0x250810d4  addiu       $t0, $t0, 0x10D4
    ctx->pc = 0x4d8a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4308));
label_4d8a90:
    // 0x4d8a90: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4d8a90u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4d8a94:
    // 0x4d8a94: 0x24ec0128  addiu       $t4, $a3, 0x128
    ctx->pc = 0x4d8a94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 296));
label_4d8a98:
    // 0x4d8a98: 0x94e30164  lhu         $v1, 0x164($a3)
    ctx->pc = 0x4d8a98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 356)));
label_4d8a9c:
    // 0x4d8a9c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d8a9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d8aa0:
    // 0x4d8aa0: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4d8aa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4d8aa4:
    // 0x4d8aa4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4d8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d8aa8:
    // 0x4d8aa8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x4d8aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_4d8aac:
    // 0x4d8aac: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x4d8aacu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_4d8ab0:
    // 0x4d8ab0: 0x38a33000  xori        $v1, $a1, 0x3000
    ctx->pc = 0x4d8ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)12288);
label_4d8ab4:
    // 0x4d8ab4: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4d8ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_4d8ab8:
    // 0x4d8ab8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4d8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4d8abc:
    // 0x4d8abc: 0xad2310d8  sw          $v1, 0x10D8($t1)
    ctx->pc = 0x4d8abcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4312), GPR_U32(ctx, 3));
label_4d8ac0:
    // 0x4d8ac0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4d8ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4d8ac4:
    // 0x4d8ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d8ac8:
    // 0x4d8ac8: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x4d8ac8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_4d8acc:
    // 0x4d8acc: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4d8accu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
label_4d8ad0:
    // 0x4d8ad0: 0x5500a  movz        $t2, $zero, $a1
    ctx->pc = 0x4d8ad0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_4d8ad4:
    // 0x4d8ad4: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x4d8ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
label_4d8ad8:
    // 0x4d8ad8: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x4d8ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
label_4d8adc:
    // 0x4d8adc: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4d8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_4d8ae0:
    // 0x4d8ae0: 0xc2302b  sltu        $a2, $a2, $v0
    ctx->pc = 0x4d8ae0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d8ae4:
    // 0x4d8ae4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_4d8ae8:
    if (ctx->pc == 0x4D8AE8u) {
        ctx->pc = 0x4D8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8AE4u;
        // 0x4d8ae8: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8AECu;
        goto label_4d8aec;
    }
    ctx->pc = 0x4D8AE4u;
    {
        const bool branch_taken_0x4d8ae4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8AE4u;
        // 0x4d8ae8: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8ae4) {
            ctx->pc = 0x4D8AF4u;
            goto label_4d8af4;
        }
    }
    ctx->pc = 0x4D8AECu;
label_4d8aec:
    // 0x4d8aec: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x4d8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_4d8af0:
    // 0x4d8af0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4d8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_4d8af4:
    // 0x4d8af4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4d8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4d8af8:
    // 0x4d8af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d8af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d8afc:
    // 0x4d8afc: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x4d8afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
label_4d8b00:
    // 0x4d8b00: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4d8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_4d8b04:
    // 0x4d8b04: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4d8b04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_4d8b08:
    // 0x4d8b08: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4d8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
label_4d8b0c:
    // 0x4d8b0c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4d8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4d8b10:
    // 0x4d8b10: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4d8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4d8b14:
    // 0x4d8b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d8b18:
    // 0x4d8b18: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4d8b18u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_4d8b1c:
    // 0x4d8b1c: 0x81362ca  j           func_4D8B28
label_4d8b20:
    if (ctx->pc == 0x4D8B20u) {
        ctx->pc = 0x4D8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8B1Cu;
        // 0x4d8b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8B24u;
        goto label_4d8b24;
    }
    ctx->pc = 0x4D8B1Cu;
    ctx->pc = 0x4D8B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8B1Cu;
    // 0x4d8b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8B28u;
    goto label_4d8b28;
    ctx->pc = 0x4D8B24u;
label_4d8b24:
    // 0x4d8b24: 0x0  nop
    ctx->pc = 0x4d8b24u;
    // NOP
label_4d8b28:
    // 0x4d8b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d8b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d8b2c:
    // 0x4d8b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d8b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4d8b30:
    // 0x4d8b30: 0x94820168  lhu         $v0, 0x168($a0)
    ctx->pc = 0x4d8b30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 360)));
label_4d8b34:
    // 0x4d8b34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d8b38:
    // 0x4d8b38: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d8b38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d8b3c:
    // 0x4d8b3c: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x4d8b3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4d8b40:
    // 0x4d8b40: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_4d8b44:
    if (ctx->pc == 0x4D8B44u) {
        ctx->pc = 0x4D8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8B40u;
        // 0x4d8b44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8B48u;
        goto label_4d8b48;
    }
    ctx->pc = 0x4D8B40u;
    {
        const bool branch_taken_0x4d8b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8b40) {
            ctx->pc = 0x4D8B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8B40u;
            // 0x4d8b44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8BC0u;
            return;
        }
    }
    ctx->pc = 0x4D8B48u;
label_4d8b48:
    // 0x4d8b48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d8b4c:
    // 0x4d8b4c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4d8b50:
    // 0x4d8b50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d8b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d8b54:
    // 0x4d8b54: 0x8c63b880  lw          $v1, -0x4780($v1)
    ctx->pc = 0x4d8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948992)));
label_4d8b58:
    // 0x4d8b58: 0x600008  jr          $v1
label_4d8b5c:
    if (ctx->pc == 0x4D8B5Cu) {
        ctx->pc = 0x4D8B60u;
        goto label_fallthrough_0x4d8b58;
    }
    ctx->pc = 0x4D8B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8B58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4d8b58:
    ctx->pc = 0x4D8B60u;
}
