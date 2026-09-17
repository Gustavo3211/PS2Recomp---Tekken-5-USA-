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

// Function: sub_003268F0
// Address: 0x3268f0 - 0x326bb8
void sub_003268F0_0x3268f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003268F0_0x3268f0");
#endif

    switch (ctx->pc) {
        case 0x3268f0u: goto label_3268f0;
        case 0x3268f4u: goto label_3268f4;
        case 0x3268f8u: goto label_3268f8;
        case 0x3268fcu: goto label_3268fc;
        case 0x326900u: goto label_326900;
        case 0x326904u: goto label_326904;
        case 0x326908u: goto label_326908;
        case 0x32690cu: goto label_32690c;
        case 0x326910u: goto label_326910;
        case 0x326914u: goto label_326914;
        case 0x326918u: goto label_326918;
        case 0x32691cu: goto label_32691c;
        case 0x326920u: goto label_326920;
        case 0x326924u: goto label_326924;
        case 0x326928u: goto label_326928;
        case 0x32692cu: goto label_32692c;
        case 0x326930u: goto label_326930;
        case 0x326934u: goto label_326934;
        case 0x326938u: goto label_326938;
        case 0x32693cu: goto label_32693c;
        case 0x326940u: goto label_326940;
        case 0x326944u: goto label_326944;
        case 0x326948u: goto label_326948;
        case 0x32694cu: goto label_32694c;
        case 0x326950u: goto label_326950;
        case 0x326954u: goto label_326954;
        case 0x326958u: goto label_326958;
        case 0x32695cu: goto label_32695c;
        case 0x326960u: goto label_326960;
        case 0x326964u: goto label_326964;
        case 0x326968u: goto label_326968;
        case 0x32696cu: goto label_32696c;
        case 0x326970u: goto label_326970;
        case 0x326974u: goto label_326974;
        case 0x326978u: goto label_326978;
        case 0x32697cu: goto label_32697c;
        case 0x326980u: goto label_326980;
        case 0x326984u: goto label_326984;
        case 0x326988u: goto label_326988;
        case 0x32698cu: goto label_32698c;
        case 0x326990u: goto label_326990;
        case 0x326994u: goto label_326994;
        case 0x326998u: goto label_326998;
        case 0x32699cu: goto label_32699c;
        case 0x3269a0u: goto label_3269a0;
        case 0x3269a4u: goto label_3269a4;
        case 0x3269a8u: goto label_3269a8;
        case 0x3269acu: goto label_3269ac;
        case 0x3269b0u: goto label_3269b0;
        case 0x3269b4u: goto label_3269b4;
        case 0x3269b8u: goto label_3269b8;
        case 0x3269bcu: goto label_3269bc;
        case 0x3269c0u: goto label_3269c0;
        case 0x3269c4u: goto label_3269c4;
        case 0x3269c8u: goto label_3269c8;
        case 0x3269ccu: goto label_3269cc;
        case 0x3269d0u: goto label_3269d0;
        case 0x3269d4u: goto label_3269d4;
        case 0x3269d8u: goto label_3269d8;
        case 0x3269dcu: goto label_3269dc;
        case 0x3269e0u: goto label_3269e0;
        case 0x3269e4u: goto label_3269e4;
        case 0x3269e8u: goto label_3269e8;
        case 0x3269ecu: goto label_3269ec;
        case 0x3269f0u: goto label_3269f0;
        case 0x3269f4u: goto label_3269f4;
        case 0x3269f8u: goto label_3269f8;
        case 0x3269fcu: goto label_3269fc;
        case 0x326a00u: goto label_326a00;
        case 0x326a04u: goto label_326a04;
        case 0x326a08u: goto label_326a08;
        case 0x326a0cu: goto label_326a0c;
        case 0x326a10u: goto label_326a10;
        case 0x326a14u: goto label_326a14;
        case 0x326a18u: goto label_326a18;
        case 0x326a1cu: goto label_326a1c;
        case 0x326a20u: goto label_326a20;
        case 0x326a24u: goto label_326a24;
        case 0x326a28u: goto label_326a28;
        case 0x326a2cu: goto label_326a2c;
        case 0x326a30u: goto label_326a30;
        case 0x326a34u: goto label_326a34;
        case 0x326a38u: goto label_326a38;
        case 0x326a3cu: goto label_326a3c;
        case 0x326a40u: goto label_326a40;
        case 0x326a44u: goto label_326a44;
        case 0x326a48u: goto label_326a48;
        case 0x326a4cu: goto label_326a4c;
        case 0x326a50u: goto label_326a50;
        case 0x326a54u: goto label_326a54;
        case 0x326a58u: goto label_326a58;
        case 0x326a5cu: goto label_326a5c;
        case 0x326a60u: goto label_326a60;
        case 0x326a64u: goto label_326a64;
        case 0x326a68u: goto label_326a68;
        case 0x326a6cu: goto label_326a6c;
        case 0x326a70u: goto label_326a70;
        case 0x326a74u: goto label_326a74;
        case 0x326a78u: goto label_326a78;
        case 0x326a7cu: goto label_326a7c;
        case 0x326a80u: goto label_326a80;
        case 0x326a84u: goto label_326a84;
        case 0x326a88u: goto label_326a88;
        case 0x326a8cu: goto label_326a8c;
        case 0x326a90u: goto label_326a90;
        case 0x326a94u: goto label_326a94;
        case 0x326a98u: goto label_326a98;
        case 0x326a9cu: goto label_326a9c;
        case 0x326aa0u: goto label_326aa0;
        case 0x326aa4u: goto label_326aa4;
        case 0x326aa8u: goto label_326aa8;
        case 0x326aacu: goto label_326aac;
        case 0x326ab0u: goto label_326ab0;
        case 0x326ab4u: goto label_326ab4;
        case 0x326ab8u: goto label_326ab8;
        case 0x326abcu: goto label_326abc;
        case 0x326ac0u: goto label_326ac0;
        case 0x326ac4u: goto label_326ac4;
        case 0x326ac8u: goto label_326ac8;
        case 0x326accu: goto label_326acc;
        case 0x326ad0u: goto label_326ad0;
        case 0x326ad4u: goto label_326ad4;
        case 0x326ad8u: goto label_326ad8;
        case 0x326adcu: goto label_326adc;
        case 0x326ae0u: goto label_326ae0;
        case 0x326ae4u: goto label_326ae4;
        case 0x326ae8u: goto label_326ae8;
        case 0x326aecu: goto label_326aec;
        case 0x326af0u: goto label_326af0;
        case 0x326af4u: goto label_326af4;
        case 0x326af8u: goto label_326af8;
        case 0x326afcu: goto label_326afc;
        case 0x326b00u: goto label_326b00;
        case 0x326b04u: goto label_326b04;
        case 0x326b08u: goto label_326b08;
        case 0x326b0cu: goto label_326b0c;
        case 0x326b10u: goto label_326b10;
        case 0x326b14u: goto label_326b14;
        case 0x326b18u: goto label_326b18;
        case 0x326b1cu: goto label_326b1c;
        case 0x326b20u: goto label_326b20;
        case 0x326b24u: goto label_326b24;
        case 0x326b28u: goto label_326b28;
        case 0x326b2cu: goto label_326b2c;
        case 0x326b30u: goto label_326b30;
        case 0x326b34u: goto label_326b34;
        case 0x326b38u: goto label_326b38;
        case 0x326b3cu: goto label_326b3c;
        case 0x326b40u: goto label_326b40;
        case 0x326b44u: goto label_326b44;
        case 0x326b48u: goto label_326b48;
        case 0x326b4cu: goto label_326b4c;
        case 0x326b50u: goto label_326b50;
        case 0x326b54u: goto label_326b54;
        case 0x326b58u: goto label_326b58;
        case 0x326b5cu: goto label_326b5c;
        case 0x326b60u: goto label_326b60;
        case 0x326b64u: goto label_326b64;
        case 0x326b68u: goto label_326b68;
        case 0x326b6cu: goto label_326b6c;
        case 0x326b70u: goto label_326b70;
        case 0x326b74u: goto label_326b74;
        case 0x326b78u: goto label_326b78;
        case 0x326b7cu: goto label_326b7c;
        case 0x326b80u: goto label_326b80;
        case 0x326b84u: goto label_326b84;
        case 0x326b88u: goto label_326b88;
        case 0x326b8cu: goto label_326b8c;
        case 0x326b90u: goto label_326b90;
        case 0x326b94u: goto label_326b94;
        case 0x326b98u: goto label_326b98;
        case 0x326b9cu: goto label_326b9c;
        case 0x326ba0u: goto label_326ba0;
        case 0x326ba4u: goto label_326ba4;
        case 0x326ba8u: goto label_326ba8;
        case 0x326bacu: goto label_326bac;
        case 0x326bb0u: goto label_326bb0;
        case 0x326bb4u: goto label_326bb4;
        default: break;
    }

    ctx->pc = 0x3268f0u;

label_3268f0:
    // 0x3268f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3268f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3268f4:
    // 0x3268f4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x3268f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_3268f8:
    // 0x3268f8: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x3268f8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_3268fc:
    // 0x3268fc: 0x26e203c0  addiu       $v0, $s7, 0x3C0
    ctx->pc = 0x3268fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 960));
label_326900:
    // 0x326900: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x326900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_326904:
    // 0x326904: 0x2449000c  addiu       $t1, $v0, 0xC
    ctx->pc = 0x326904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_326908:
    // 0x326908: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x326908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_32690c:
    // 0x32690c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x32690cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_326910:
    // 0x326910: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x326910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_326914:
    // 0x326914: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x326914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_326918:
    // 0x326918: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x326918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_32691c:
    // 0x32691c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x32691cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_326920:
    // 0x326920: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x326920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_326924:
    // 0x326924: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x326924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_326928:
    // 0x326928: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x326928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_32692c:
    // 0x32692c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x32692cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_326930:
    // 0x326930: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x326930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_326934:
    // 0x326934: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x326934u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_326938:
    // 0x326938: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x326938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32693c:
    // 0x32693c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x32693cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_326940:
    // 0x326940: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x326940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_326944:
    // 0x326944: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x326944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_326948:
    // 0x326948: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_32694c:
    if (ctx->pc == 0x32694Cu) {
        ctx->pc = 0x32694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326948u;
        // 0x32694c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326950u;
        goto label_326950;
    }
    ctx->pc = 0x326948u;
    {
        const bool branch_taken_0x326948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326948u;
        // 0x32694c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326948) {
            ctx->pc = 0x3269F8u;
            goto label_3269f8;
        }
    }
    ctx->pc = 0x326950u;
label_326950:
    // 0x326950: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x326950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_326954:
    // 0x326954: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x326954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_326958:
    // 0x326958: 0x0  nop
    ctx->pc = 0x326958u;
    // NOP
label_32695c:
    // 0x32695c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_326960:
    if (ctx->pc == 0x326960u) {
        ctx->pc = 0x326960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32695Cu;
        // 0x326960: 0x24690004  addiu       $t1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326964u;
        goto label_326964;
    }
    ctx->pc = 0x32695Cu;
    {
        const bool branch_taken_0x32695c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32695Cu;
        // 0x326960: 0x24690004  addiu       $t1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32695c) {
            ctx->pc = 0x326940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326940;
        }
    }
    ctx->pc = 0x326964u;
label_326964:
    // 0x326964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326968:
    // 0x326968: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x326968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_32696c:
    // 0x32696c: 0x26e303c0  addiu       $v1, $s7, 0x3C0
    ctx->pc = 0x32696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 960));
label_326970:
    // 0x326970: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x326970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_326974:
    // 0x326974: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x326974u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_326978:
    // 0x326978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x326978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32697c:
    // 0x32697c: 0xc0c8864  jal         func_322190
label_326980:
    if (ctx->pc == 0x326980u) {
        ctx->pc = 0x326980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32697Cu;
        // 0x326980: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326984u;
        goto label_326984;
    }
    ctx->pc = 0x32697Cu;
    SET_GPR_U32(ctx, 31, 0x326984u);
    ctx->pc = 0x326980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32697Cu;
    // 0x326980: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x32697Cu, 0x326984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326984u;
label_326984:
    // 0x326984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x326984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_326988:
    // 0x326988: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x326988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32698c:
    // 0x32698c: 0x26860004  addiu       $a2, $s4, 0x4
    ctx->pc = 0x32698cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_326990:
    // 0x326990: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x326990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_326994:
    // 0x326994: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x326994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_326998:
    // 0x326998: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x326998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32699c:
    // 0x32699c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32699cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3269a0:
    // 0x3269a0: 0x40f809  jalr        $v0
label_3269a4:
    if (ctx->pc == 0x3269A4u) {
        ctx->pc = 0x3269A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269A0u;
        // 0x3269a4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3269A8u;
        goto label_3269a8;
    }
    ctx->pc = 0x3269A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3269A8u);
        ctx->pc = 0x3269A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269A0u;
        // 0x3269a4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3269A0u, 0x3269A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3269A8u;
label_3269a8:
    // 0x3269a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3269a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3269ac:
    // 0x3269ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3269acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3269b0:
    // 0x3269b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3269b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3269b4:
    // 0x3269b4: 0xc0c9aee  jal         func_326BB8
label_3269b8:
    if (ctx->pc == 0x3269B8u) {
        ctx->pc = 0x3269B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269B4u;
        // 0x3269b8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3269BCu;
        goto label_3269bc;
    }
    ctx->pc = 0x3269B4u;
    SET_GPR_U32(ctx, 31, 0x3269BCu);
    ctx->pc = 0x3269B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3269B4u;
    // 0x3269b8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326BB8u, 0x3269B4u, 0x3269BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3269BCu;
label_3269bc:
    // 0x3269bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3269bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3269c0:
    // 0x3269c0: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x3269c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_3269c4:
    // 0x3269c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3269c8:
    if (ctx->pc == 0x3269C8u) {
        ctx->pc = 0x3269C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269C4u;
        // 0x3269c8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3269CCu;
        goto label_3269cc;
    }
    ctx->pc = 0x3269C4u;
    {
        const bool branch_taken_0x3269c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3269C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269C4u;
        // 0x3269c8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269c4) {
            ctx->pc = 0x326A18u;
            goto label_326a18;
        }
    }
    ctx->pc = 0x3269CCu;
label_3269cc:
    // 0x3269cc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3269ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3269d0:
    // 0x3269d0: 0x24421f10  addiu       $v0, $v0, 0x1F10
    ctx->pc = 0x3269d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7952));
label_3269d4:
    // 0x3269d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3269d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3269d8:
    // 0x3269d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3269d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3269dc:
    // 0x3269dc: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x3269dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
label_3269e0:
    // 0x3269e0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3269e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3269e4:
    // 0x3269e4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3269e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3269e8:
    // 0x3269e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3269e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3269ec:
    // 0x3269ec: 0x10000014  b           . + 4 + (0x14 << 2)
label_3269f0:
    if (ctx->pc == 0x3269F0u) {
        ctx->pc = 0x3269F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269ECu;
        // 0x3269f0: 0x26101f50  addiu       $s0, $s0, 0x1F50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3269F4u;
        goto label_3269f4;
    }
    ctx->pc = 0x3269ECu;
    {
        const bool branch_taken_0x3269ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3269F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269ECu;
        // 0x3269f0: 0x26101f50  addiu       $s0, $s0, 0x1F50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269ec) {
            ctx->pc = 0x326A40u;
            goto label_326a40;
        }
    }
    ctx->pc = 0x3269F4u;
label_3269f4:
    // 0x3269f4: 0x0  nop
    ctx->pc = 0x3269f4u;
    // NOP
label_3269f8:
    // 0x3269f8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3269f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3269fc:
    // 0x3269fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3269fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326a00:
    // 0x326a00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x326a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_326a04:
    // 0x326a04: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x326a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_326a08:
    // 0x326a08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x326a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_326a0c:
    // 0x326a0c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x326a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_326a10:
    // 0x326a10: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_326a14:
    if (ctx->pc == 0x326A14u) {
        ctx->pc = 0x326A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A10u;
        // 0x326a14: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A18u;
        goto label_326a18;
    }
    ctx->pc = 0x326A10u;
    {
        const bool branch_taken_0x326a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A10u;
        // 0x326a14: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a10) {
            ctx->pc = 0x326968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326968;
        }
    }
    ctx->pc = 0x326A18u;
label_326a18:
    // 0x326a18: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x326a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_326a1c:
    // 0x326a1c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x326a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_326a20:
    // 0x326a20: 0x24421f30  addiu       $v0, $v0, 0x1F30
    ctx->pc = 0x326a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7984));
label_326a24:
    // 0x326a24: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x326a24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
label_326a28:
    // 0x326a28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x326a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_326a2c:
    // 0x326a2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x326a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_326a30:
    // 0x326a30: 0x26101f50  addiu       $s0, $s0, 0x1F50
    ctx->pc = 0x326a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8016));
label_326a34:
    // 0x326a34: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x326a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_326a38:
    // 0x326a38: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x326a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_326a3c:
    // 0x326a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326a40:
    // 0x326a40: 0xc0c9b5e  jal         func_326D78
label_326a44:
    if (ctx->pc == 0x326A44u) {
        ctx->pc = 0x326A48u;
        goto label_326a48;
    }
    ctx->pc = 0x326A40u;
    SET_GPR_U32(ctx, 31, 0x326A48u);
    ctx->pc = 0x326D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326D78u, 0x326A40u, 0x326A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326A48u;
label_326a48:
    // 0x326a48: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x326a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_326a4c:
    // 0x326a4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x326a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326a50:
    // 0x326a50: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x326a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_326a54:
    // 0x326a54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326a58:
    // 0x326a58: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x326a58u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_326a5c:
    // 0x326a5c: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x326a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_326a60:
    // 0x326a60: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x326a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_326a64:
    // 0x326a64: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x326a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_326a68:
    // 0x326a68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x326a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_326a6c:
    // 0x326a6c: 0xc0d0b30  jal         func_342CC0
label_326a70:
    if (ctx->pc == 0x326A70u) {
        ctx->pc = 0x326A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A6Cu;
        // 0x326a70: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A74u;
        goto label_326a74;
    }
    ctx->pc = 0x326A6Cu;
    SET_GPR_U32(ctx, 31, 0x326A74u);
    ctx->pc = 0x326A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326A6Cu;
    // 0x326a70: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CC0u, 0x326A6Cu, 0x326A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326A74u;
label_326a74:
    // 0x326a74: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x326a74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_326a78:
    // 0x326a78: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x326a78u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_326a7c:
    // 0x326a7c: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
label_326a80:
    if (ctx->pc == 0x326A80u) {
        ctx->pc = 0x326A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A7Cu;
        // 0x326a80: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326A84u;
        goto label_326a84;
    }
    ctx->pc = 0x326A7Cu;
    {
        const bool branch_taken_0x326a7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A7Cu;
        // 0x326a80: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a7c) {
            ctx->pc = 0x326B10u;
            goto label_326b10;
        }
    }
    ctx->pc = 0x326A84u;
label_326a84:
    // 0x326a84: 0x26f103c0  addiu       $s1, $s7, 0x3C0
    ctx->pc = 0x326a84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 960));
label_326a88:
    // 0x326a88: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x326a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
label_326a8c:
    // 0x326a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326a90:
    // 0x326a90: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x326a90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_326a94:
    // 0x326a94: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x326a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_326a98:
    // 0x326a98: 0xc0ce218  jal         func_338860
label_326a9c:
    if (ctx->pc == 0x326A9Cu) {
        ctx->pc = 0x326A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A98u;
        // 0x326a9c: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326AA0u;
        goto label_326aa0;
    }
    ctx->pc = 0x326A98u;
    SET_GPR_U32(ctx, 31, 0x326AA0u);
    ctx->pc = 0x326A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326A98u;
    // 0x326a9c: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x326A98u, 0x326AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326AA0u;
label_326aa0:
    // 0x326aa0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x326aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_326aa4:
    // 0x326aa4: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x326aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
label_326aa8:
    // 0x326aa8: 0x122902  srl         $a1, $s2, 4
    ctx->pc = 0x326aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
label_326aac:
    // 0x326aac: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x326aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_326ab0:
    // 0x326ab0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x326ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_326ab4:
    // 0x326ab4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x326ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_326ab8:
    // 0x326ab8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x326ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_326abc:
    // 0x326abc: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x326abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
label_326ac0:
    // 0x326ac0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x326ac0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_326ac4:
    // 0x326ac4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x326ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_326ac8:
    // 0x326ac8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x326ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_326acc:
    // 0x326acc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x326accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_326ad0:
    // 0x326ad0: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x326ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
label_326ad4:
    // 0x326ad4: 0x32623fff  andi        $v0, $s3, 0x3FFF
    ctx->pc = 0x326ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16383);
label_326ad8:
    // 0x326ad8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x326ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_326adc:
    // 0x326adc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x326adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326ae0:
    // 0x326ae0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x326ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_326ae4:
    // 0x326ae4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x326ae4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2)); // MMIO: 0x1000d080
label_326ae8:
    // 0x326ae8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x326ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_326aec:
    // 0x326aec: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x326aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
label_326af0:
    // 0x326af0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x326af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
label_326af4:
    // 0x326af4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x326af4u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x1000d080
label_326af8:
    // 0x326af8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x326af8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000e010
label_326afc:
    // 0x326afc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x326afcu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000e010
label_326b00:
    // 0x326b00: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x326b00u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000d000
label_326b04:
    // 0x326b04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x326b04u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
label_326b08:
    // 0x326b08: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x326b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
label_326b0c:
    // 0x326b0c: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x326b0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_326b10:
    // 0x326b10: 0x26e303c0  addiu       $v1, $s7, 0x3C0
    ctx->pc = 0x326b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 960));
label_326b14:
    // 0x326b14: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x326b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_326b18:
    // 0x326b18: 0x56620005  bnel        $s3, $v0, . + 4 + (0x5 << 2)
label_326b1c:
    if (ctx->pc == 0x326B1Cu) {
        ctx->pc = 0x326B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B18u;
        // 0x326b1c: 0x2466000c  addiu       $a2, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B20u;
        goto label_326b20;
    }
    ctx->pc = 0x326B18u;
    {
        const bool branch_taken_0x326b18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x326b18) {
            ctx->pc = 0x326B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326B18u;
            // 0x326b1c: 0x2466000c  addiu       $a2, $v1, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326B30u;
            goto label_326b30;
        }
    }
    ctx->pc = 0x326B20u;
label_326b20:
    // 0x326b20: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x326b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
label_326b24:
    // 0x326b24: 0x10000011  b           . + 4 + (0x11 << 2)
label_326b28:
    if (ctx->pc == 0x326B28u) {
        ctx->pc = 0x326B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B24u;
        // 0x326b28: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B2Cu;
        goto label_326b2c;
    }
    ctx->pc = 0x326B24u;
    {
        const bool branch_taken_0x326b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B24u;
        // 0x326b28: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b24) {
            ctx->pc = 0x326B6Cu;
            goto label_326b6c;
        }
    }
    ctx->pc = 0x326B2Cu;
label_326b2c:
    // 0x326b2c: 0x0  nop
    ctx->pc = 0x326b2cu;
    // NOP
label_326b30:
    // 0x326b30: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x326b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_326b34:
    // 0x326b34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x326b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326b38:
    // 0x326b38: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x326b38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_326b3c:
    // 0x326b3c: 0x0  nop
    ctx->pc = 0x326b3cu;
    // NOP
label_326b40:
    // 0x326b40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x326b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_326b44:
    // 0x326b44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_326b48:
    if (ctx->pc == 0x326B48u) {
        ctx->pc = 0x326B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B44u;
        // 0x326b48: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B4Cu;
        goto label_326b4c;
    }
    ctx->pc = 0x326B44u;
    {
        const bool branch_taken_0x326b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B44u;
        // 0x326b48: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b44) {
            ctx->pc = 0x326B54u;
            goto label_326b54;
        }
    }
    ctx->pc = 0x326B4Cu;
label_326b4c:
    // 0x326b4c: 0x50b30007  beql        $a1, $s3, . + 4 + (0x7 << 2)
label_326b50:
    if (ctx->pc == 0x326B50u) {
        ctx->pc = 0x326B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B4Cu;
        // 0x326b50: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B54u;
        goto label_326b54;
    }
    ctx->pc = 0x326B4Cu;
    {
        const bool branch_taken_0x326b4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x326b4c) {
            ctx->pc = 0x326B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326B4Cu;
            // 0x326b50: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326B6Cu;
            goto label_326b6c;
        }
    }
    ctx->pc = 0x326B54u;
label_326b54:
    // 0x326b54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x326b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_326b58:
    // 0x326b58: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x326b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_326b5c:
    // 0x326b5c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x326b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_326b60:
    // 0x326b60: 0x0  nop
    ctx->pc = 0x326b60u;
    // NOP
label_326b64:
    // 0x326b64: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_326b68:
    if (ctx->pc == 0x326B68u) {
        ctx->pc = 0x326B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B64u;
        // 0x326b68: 0x24a50c00  addiu       $a1, $a1, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B6Cu;
        goto label_326b6c;
    }
    ctx->pc = 0x326B64u;
    {
        const bool branch_taken_0x326b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B64u;
        // 0x326b68: 0x24a50c00  addiu       $a1, $a1, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b64) {
            ctx->pc = 0x326B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326b40;
        }
    }
    ctx->pc = 0x326B6Cu;
label_326b6c:
    // 0x326b6c: 0x26e403c0  addiu       $a0, $s7, 0x3C0
    ctx->pc = 0x326b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 960));
label_326b70:
    // 0x326b70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x326b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326b74:
    // 0x326b74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_326b78:
    // 0x326b78: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_326b7c:
    if (ctx->pc == 0x326B7Cu) {
        ctx->pc = 0x326B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B78u;
        // 0x326b7c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B80u;
        goto label_326b80;
    }
    ctx->pc = 0x326B78u;
    {
        const bool branch_taken_0x326b78 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x326B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B78u;
        // 0x326b7c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b78) {
            ctx->pc = 0x326B88u;
            goto label_326b88;
        }
    }
    ctx->pc = 0x326B80u;
label_326b80:
    // 0x326b80: 0xc0ce218  jal         func_338860
label_326b84:
    if (ctx->pc == 0x326B84u) {
        ctx->pc = 0x326B88u;
        goto label_326b88;
    }
    ctx->pc = 0x326B80u;
    SET_GPR_U32(ctx, 31, 0x326B88u);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x326B80u, 0x326B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326B88u;
label_326b88:
    // 0x326b88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x326b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_326b8c:
    // 0x326b8c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x326b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_326b90:
    // 0x326b90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x326b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_326b94:
    // 0x326b94: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x326b94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_326b98:
    // 0x326b98: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x326b98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_326b9c:
    // 0x326b9c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x326b9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_326ba0:
    // 0x326ba0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x326ba0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_326ba4:
    // 0x326ba4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x326ba4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_326ba8:
    // 0x326ba8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x326ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_326bac:
    // 0x326bac: 0x3e00008  jr          $ra
label_326bb0:
    if (ctx->pc == 0x326BB0u) {
        ctx->pc = 0x326BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BACu;
        // 0x326bb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326BB4u;
        goto label_326bb4;
    }
    ctx->pc = 0x326BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BACu;
        // 0x326bb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326BB4u;
label_326bb4:
    // 0x326bb4: 0x0  nop
    ctx->pc = 0x326bb4u;
    // NOP
    ctx->pc = 0x326bb8u;
}
