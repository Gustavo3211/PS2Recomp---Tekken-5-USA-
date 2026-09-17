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

// Function: sub_004A08A0
// Address: 0x4a08a0 - 0x4a0b88
void sub_004A08A0_0x4a08a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A08A0_0x4a08a0");
#endif

    switch (ctx->pc) {
        case 0x4a08a0u: goto label_4a08a0;
        case 0x4a08a4u: goto label_4a08a4;
        case 0x4a08a8u: goto label_4a08a8;
        case 0x4a08acu: goto label_4a08ac;
        case 0x4a08b0u: goto label_4a08b0;
        case 0x4a08b4u: goto label_4a08b4;
        case 0x4a08b8u: goto label_4a08b8;
        case 0x4a08bcu: goto label_4a08bc;
        case 0x4a08c0u: goto label_4a08c0;
        case 0x4a08c4u: goto label_4a08c4;
        case 0x4a08c8u: goto label_4a08c8;
        case 0x4a08ccu: goto label_4a08cc;
        case 0x4a08d0u: goto label_4a08d0;
        case 0x4a08d4u: goto label_4a08d4;
        case 0x4a08d8u: goto label_4a08d8;
        case 0x4a08dcu: goto label_4a08dc;
        case 0x4a08e0u: goto label_4a08e0;
        case 0x4a08e4u: goto label_4a08e4;
        case 0x4a08e8u: goto label_4a08e8;
        case 0x4a08ecu: goto label_4a08ec;
        case 0x4a08f0u: goto label_4a08f0;
        case 0x4a08f4u: goto label_4a08f4;
        case 0x4a08f8u: goto label_4a08f8;
        case 0x4a08fcu: goto label_4a08fc;
        case 0x4a0900u: goto label_4a0900;
        case 0x4a0904u: goto label_4a0904;
        case 0x4a0908u: goto label_4a0908;
        case 0x4a090cu: goto label_4a090c;
        case 0x4a0910u: goto label_4a0910;
        case 0x4a0914u: goto label_4a0914;
        case 0x4a0918u: goto label_4a0918;
        case 0x4a091cu: goto label_4a091c;
        case 0x4a0920u: goto label_4a0920;
        case 0x4a0924u: goto label_4a0924;
        case 0x4a0928u: goto label_4a0928;
        case 0x4a092cu: goto label_4a092c;
        case 0x4a0930u: goto label_4a0930;
        case 0x4a0934u: goto label_4a0934;
        case 0x4a0938u: goto label_4a0938;
        case 0x4a093cu: goto label_4a093c;
        case 0x4a0940u: goto label_4a0940;
        case 0x4a0944u: goto label_4a0944;
        case 0x4a0948u: goto label_4a0948;
        case 0x4a094cu: goto label_4a094c;
        case 0x4a0950u: goto label_4a0950;
        case 0x4a0954u: goto label_4a0954;
        case 0x4a0958u: goto label_4a0958;
        case 0x4a095cu: goto label_4a095c;
        case 0x4a0960u: goto label_4a0960;
        case 0x4a0964u: goto label_4a0964;
        case 0x4a0968u: goto label_4a0968;
        case 0x4a096cu: goto label_4a096c;
        case 0x4a0970u: goto label_4a0970;
        case 0x4a0974u: goto label_4a0974;
        case 0x4a0978u: goto label_4a0978;
        case 0x4a097cu: goto label_4a097c;
        case 0x4a0980u: goto label_4a0980;
        case 0x4a0984u: goto label_4a0984;
        case 0x4a0988u: goto label_4a0988;
        case 0x4a098cu: goto label_4a098c;
        case 0x4a0990u: goto label_4a0990;
        case 0x4a0994u: goto label_4a0994;
        case 0x4a0998u: goto label_4a0998;
        case 0x4a099cu: goto label_4a099c;
        case 0x4a09a0u: goto label_4a09a0;
        case 0x4a09a4u: goto label_4a09a4;
        case 0x4a09a8u: goto label_4a09a8;
        case 0x4a09acu: goto label_4a09ac;
        case 0x4a09b0u: goto label_4a09b0;
        case 0x4a09b4u: goto label_4a09b4;
        case 0x4a09b8u: goto label_4a09b8;
        case 0x4a09bcu: goto label_4a09bc;
        case 0x4a09c0u: goto label_4a09c0;
        case 0x4a09c4u: goto label_4a09c4;
        case 0x4a09c8u: goto label_4a09c8;
        case 0x4a09ccu: goto label_4a09cc;
        case 0x4a09d0u: goto label_4a09d0;
        case 0x4a09d4u: goto label_4a09d4;
        case 0x4a09d8u: goto label_4a09d8;
        case 0x4a09dcu: goto label_4a09dc;
        case 0x4a09e0u: goto label_4a09e0;
        case 0x4a09e4u: goto label_4a09e4;
        case 0x4a09e8u: goto label_4a09e8;
        case 0x4a09ecu: goto label_4a09ec;
        case 0x4a09f0u: goto label_4a09f0;
        case 0x4a09f4u: goto label_4a09f4;
        case 0x4a09f8u: goto label_4a09f8;
        case 0x4a09fcu: goto label_4a09fc;
        case 0x4a0a00u: goto label_4a0a00;
        case 0x4a0a04u: goto label_4a0a04;
        case 0x4a0a08u: goto label_4a0a08;
        case 0x4a0a0cu: goto label_4a0a0c;
        case 0x4a0a10u: goto label_4a0a10;
        case 0x4a0a14u: goto label_4a0a14;
        case 0x4a0a18u: goto label_4a0a18;
        case 0x4a0a1cu: goto label_4a0a1c;
        case 0x4a0a20u: goto label_4a0a20;
        case 0x4a0a24u: goto label_4a0a24;
        case 0x4a0a28u: goto label_4a0a28;
        case 0x4a0a2cu: goto label_4a0a2c;
        case 0x4a0a30u: goto label_4a0a30;
        case 0x4a0a34u: goto label_4a0a34;
        case 0x4a0a38u: goto label_4a0a38;
        case 0x4a0a3cu: goto label_4a0a3c;
        case 0x4a0a40u: goto label_4a0a40;
        case 0x4a0a44u: goto label_4a0a44;
        case 0x4a0a48u: goto label_4a0a48;
        case 0x4a0a4cu: goto label_4a0a4c;
        case 0x4a0a50u: goto label_4a0a50;
        case 0x4a0a54u: goto label_4a0a54;
        case 0x4a0a58u: goto label_4a0a58;
        case 0x4a0a5cu: goto label_4a0a5c;
        case 0x4a0a60u: goto label_4a0a60;
        case 0x4a0a64u: goto label_4a0a64;
        case 0x4a0a68u: goto label_4a0a68;
        case 0x4a0a6cu: goto label_4a0a6c;
        case 0x4a0a70u: goto label_4a0a70;
        case 0x4a0a74u: goto label_4a0a74;
        case 0x4a0a78u: goto label_4a0a78;
        case 0x4a0a7cu: goto label_4a0a7c;
        case 0x4a0a80u: goto label_4a0a80;
        case 0x4a0a84u: goto label_4a0a84;
        case 0x4a0a88u: goto label_4a0a88;
        case 0x4a0a8cu: goto label_4a0a8c;
        case 0x4a0a90u: goto label_4a0a90;
        case 0x4a0a94u: goto label_4a0a94;
        case 0x4a0a98u: goto label_4a0a98;
        case 0x4a0a9cu: goto label_4a0a9c;
        case 0x4a0aa0u: goto label_4a0aa0;
        case 0x4a0aa4u: goto label_4a0aa4;
        case 0x4a0aa8u: goto label_4a0aa8;
        case 0x4a0aacu: goto label_4a0aac;
        case 0x4a0ab0u: goto label_4a0ab0;
        case 0x4a0ab4u: goto label_4a0ab4;
        case 0x4a0ab8u: goto label_4a0ab8;
        case 0x4a0abcu: goto label_4a0abc;
        case 0x4a0ac0u: goto label_4a0ac0;
        case 0x4a0ac4u: goto label_4a0ac4;
        case 0x4a0ac8u: goto label_4a0ac8;
        case 0x4a0accu: goto label_4a0acc;
        case 0x4a0ad0u: goto label_4a0ad0;
        case 0x4a0ad4u: goto label_4a0ad4;
        case 0x4a0ad8u: goto label_4a0ad8;
        case 0x4a0adcu: goto label_4a0adc;
        case 0x4a0ae0u: goto label_4a0ae0;
        case 0x4a0ae4u: goto label_4a0ae4;
        case 0x4a0ae8u: goto label_4a0ae8;
        case 0x4a0aecu: goto label_4a0aec;
        case 0x4a0af0u: goto label_4a0af0;
        case 0x4a0af4u: goto label_4a0af4;
        case 0x4a0af8u: goto label_4a0af8;
        case 0x4a0afcu: goto label_4a0afc;
        case 0x4a0b00u: goto label_4a0b00;
        case 0x4a0b04u: goto label_4a0b04;
        case 0x4a0b08u: goto label_4a0b08;
        case 0x4a0b0cu: goto label_4a0b0c;
        case 0x4a0b10u: goto label_4a0b10;
        case 0x4a0b14u: goto label_4a0b14;
        case 0x4a0b18u: goto label_4a0b18;
        case 0x4a0b1cu: goto label_4a0b1c;
        case 0x4a0b20u: goto label_4a0b20;
        case 0x4a0b24u: goto label_4a0b24;
        case 0x4a0b28u: goto label_4a0b28;
        case 0x4a0b2cu: goto label_4a0b2c;
        case 0x4a0b30u: goto label_4a0b30;
        case 0x4a0b34u: goto label_4a0b34;
        case 0x4a0b38u: goto label_4a0b38;
        case 0x4a0b3cu: goto label_4a0b3c;
        case 0x4a0b40u: goto label_4a0b40;
        case 0x4a0b44u: goto label_4a0b44;
        case 0x4a0b48u: goto label_4a0b48;
        case 0x4a0b4cu: goto label_4a0b4c;
        case 0x4a0b50u: goto label_4a0b50;
        case 0x4a0b54u: goto label_4a0b54;
        case 0x4a0b58u: goto label_4a0b58;
        case 0x4a0b5cu: goto label_4a0b5c;
        case 0x4a0b60u: goto label_4a0b60;
        case 0x4a0b64u: goto label_4a0b64;
        case 0x4a0b68u: goto label_4a0b68;
        case 0x4a0b6cu: goto label_4a0b6c;
        case 0x4a0b70u: goto label_4a0b70;
        case 0x4a0b74u: goto label_4a0b74;
        case 0x4a0b78u: goto label_4a0b78;
        case 0x4a0b7cu: goto label_4a0b7c;
        case 0x4a0b80u: goto label_4a0b80;
        case 0x4a0b84u: goto label_4a0b84;
        default: break;
    }

    ctx->pc = 0x4a08a0u;

label_4a08a0:
    // 0x4a08a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a08a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a08a4:
    // 0x4a08a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a08a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4a08a8:
    // 0x4a08a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a08a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a08ac:
    // 0x4a08ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a08acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4a08b0:
    // 0x4a08b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a08b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a08b4:
    // 0x4a08b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a08b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4a08b8:
    // 0x4a08b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4a08b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4a08bc:
    // 0x4a08bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a08bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a08c0:
    // 0x4a08c0: 0xc1232f2  jal         func_48CBC8
label_4a08c4:
    if (ctx->pc == 0x4A08C4u) {
        ctx->pc = 0x4A08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A08C0u;
        // 0x4a08c4: 0x26330148  addiu       $s3, $s1, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A08C8u;
        goto label_4a08c8;
    }
    ctx->pc = 0x4A08C0u;
    SET_GPR_U32(ctx, 31, 0x4A08C8u);
    ctx->pc = 0x4A08C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A08C0u;
    // 0x4a08c4: 0x26330148  addiu       $s3, $s1, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4A08C0u, 0x4A08C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A08C8u;
label_4a08c8:
    // 0x4a08c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a08c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a08cc:
    // 0x4a08cc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4a08d0:
    // 0x4a08d0: 0xac500be8  sw          $s0, 0xBE8($v0)
    ctx->pc = 0x4a08d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3048), GPR_U32(ctx, 16));
label_4a08d4:
    // 0x4a08d4: 0x862201b4  lh          $v0, 0x1B4($s1)
    ctx->pc = 0x4a08d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 436)));
label_4a08d8:
    // 0x4a08d8: 0x44300a2  bgezl       $v0, . + 4 + (0xA2 << 2)
label_4a08dc:
    if (ctx->pc == 0x4A08DCu) {
        ctx->pc = 0x4A08DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A08D8u;
        // 0x4a08dc: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A08E0u;
        goto label_4a08e0;
    }
    ctx->pc = 0x4A08D8u;
    {
        const bool branch_taken_0x4a08d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a08d8) {
            ctx->pc = 0x4A08DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A08D8u;
            // 0x4a08dc: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0B64u;
            goto label_4a0b64;
        }
    }
    ctx->pc = 0x4A08E0u;
label_4a08e0:
    // 0x4a08e0: 0x862201c2  lh          $v0, 0x1C2($s1)
    ctx->pc = 0x4a08e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
label_4a08e4:
    // 0x4a08e4: 0x5440009e  bnel        $v0, $zero, . + 4 + (0x9E << 2)
label_4a08e8:
    if (ctx->pc == 0x4A08E8u) {
        ctx->pc = 0x4A08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A08E4u;
        // 0x4a08e8: 0x26330148  addiu       $s3, $s1, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A08ECu;
        goto label_4a08ec;
    }
    ctx->pc = 0x4A08E4u;
    {
        const bool branch_taken_0x4a08e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a08e4) {
            ctx->pc = 0x4A08E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A08E4u;
            // 0x4a08e8: 0x26330148  addiu       $s3, $s1, 0x148 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0B60u;
            goto label_4a0b60;
        }
    }
    ctx->pc = 0x4A08ECu;
label_4a08ec:
    // 0x4a08ec: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4a08ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4a08f0:
    // 0x4a08f0: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
label_4a08f4:
    if (ctx->pc == 0x4A08F4u) {
        ctx->pc = 0x4A08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A08F0u;
        // 0x4a08f4: 0x3c0c007f  lui         $t4, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A08F8u;
        goto label_4a08f8;
    }
    ctx->pc = 0x4A08F0u;
    {
        const bool branch_taken_0x4a08f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A08F0u;
        // 0x4a08f4: 0x3c0c007f  lui         $t4, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a08f0) {
            ctx->pc = 0x4A0B64u;
            goto label_4a0b64;
        }
    }
    ctx->pc = 0x4A08F8u;
label_4a08f8:
    // 0x4a08f8: 0x862301c0  lh          $v1, 0x1C0($s1)
    ctx->pc = 0x4a08f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
label_4a08fc:
    // 0x4a08fc: 0x258c0be4  addiu       $t4, $t4, 0xBE4
    ctx->pc = 0x4a08fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3044));
label_4a0900:
    // 0x4a0900: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x4a0900u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
label_4a0904:
    // 0x4a0904: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4a0904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4a0908:
    // 0x4a0908: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x4a0908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
label_4a090c:
    // 0x4a090c: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4a090cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
label_4a0910:
    // 0x4a0910: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4a0910u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
label_4a0914:
    // 0x4a0914: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a0914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a0918:
    // 0x4a0918: 0x256b0bd4  addiu       $t3, $t3, 0xBD4
    ctx->pc = 0x4a0918u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3028));
label_4a091c:
    // 0x4a091c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a091cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a0920:
    // 0x4a0920: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a0920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4a0924:
    // 0x4a0924: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4a0924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4a0928:
    // 0x4a0928: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4a0928u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
label_4a092c:
    // 0x4a092c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4a092cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
label_4a0930:
    // 0x4a0930: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4a0930u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4a0934:
    // 0x4a0934: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a0934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4a0938:
    // 0x4a0938: 0x25290be0  addiu       $t1, $t1, 0xBE0
    ctx->pc = 0x4a0938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3040));
label_4a093c:
    // 0x4a093c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4a093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4a0940:
    // 0x4a0940: 0x25ad0bd8  addiu       $t5, $t5, 0xBD8
    ctx->pc = 0x4a0940u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3032));
label_4a0944:
    // 0x4a0944: 0x254a0bdc  addiu       $t2, $t2, 0xBDC
    ctx->pc = 0x4a0944u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3036));
label_4a0948:
    // 0x4a0948: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x4a0948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4a094c:
    // 0x4a094c: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x4a094cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
label_4a0950:
    // 0x4a0950: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x4a0950u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4a0954:
    // 0x4a0954: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a0954u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a0958:
    // 0x4a0958: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x4a0958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4a095c:
    // 0x4a095c: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4a095cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_4a0960:
    // 0x4a0960: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a0960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4a0964:
    // 0x4a0964: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a0964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4a0968:
    // 0x4a0968: 0x34630028  ori         $v1, $v1, 0x28
    ctx->pc = 0x4a0968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40);
label_4a096c:
    // 0x4a096c: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4a096cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
label_4a0970:
    // 0x4a0970: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a0970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4a0974:
    // 0x4a0974: 0x24900bc8  addiu       $s0, $a0, 0xBC8
    ctx->pc = 0x4a0974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3016));
label_4a0978:
    // 0x4a0978: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a0978u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a097c:
    // 0x4a097c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4a097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4a0980:
    // 0x4a0980: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4a0980u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_4a0984:
    // 0x4a0984: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4a0984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a0988:
    // 0x4a0988: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a0988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4a098c:
    // 0x4a098c: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x4a098cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
label_4a0990:
    // 0x4a0990: 0x24790bcc  addiu       $t9, $v1, 0xBCC
    ctx->pc = 0x4a0990u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 3020));
label_4a0994:
    // 0x4a0994: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a0994u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a0998:
    // 0x4a0998: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a0998u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4a099c:
    // 0x4a099c: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4a099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_4a09a0:
    // 0x4a09a0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a09a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4a09a4:
    // 0x4a09a4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a09a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4a09a8:
    // 0x4a09a8: 0x24780bd0  addiu       $t8, $v1, 0xBD0
    ctx->pc = 0x4a09a8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 3024));
label_4a09ac:
    // 0x4a09ac: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4a09acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
label_4a09b0:
    // 0x4a09b0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a09b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4a09b4:
    // 0x4a09b4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4a09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4a09b8:
    // 0x4a09b8: 0x8f240000  lw          $a0, 0x0($t9)
    ctx->pc = 0x4a09b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_4a09bc:
    // 0x4a09bc: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x4a09bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
label_4a09c0:
    // 0x4a09c0: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x4a09c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
label_4a09c4:
    // 0x4a09c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a09c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a09c8:
    // 0x4a09c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a09c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4a09cc:
    // 0x4a09cc: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4a09ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_4a09d0:
    // 0x4a09d0: 0x858e0000  lh          $t6, 0x0($t4)
    ctx->pc = 0x4a09d0u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4a09d4:
    // 0x4a09d4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4a09d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_4a09d8:
    // 0x4a09d8: 0x8f050000  lw          $a1, 0x0($t8)
    ctx->pc = 0x4a09d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
label_4a09dc:
    // 0x4a09dc: 0x856c0000  lh          $t4, 0x0($t3)
    ctx->pc = 0x4a09dcu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4a09e0:
    // 0x4a09e0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a09e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a09e4:
    // 0x4a09e4: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x4a09e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
label_4a09e8:
    // 0x4a09e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a09e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4a09ec:
    // 0x4a09ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a09f0:
    // 0x4a09f0: 0x85ab0000  lh          $t3, 0x0($t5)
    ctx->pc = 0x4a09f0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_4a09f4:
    // 0x4a09f4: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x4a09f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
label_4a09f8:
    // 0x4a09f8: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4a09f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4a09fc:
    // 0x4a09fc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a09fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a0a00:
    // 0x4a0a00: 0x854d0000  lh          $t5, 0x0($t2)
    ctx->pc = 0x4a0a00u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4a0a04:
    // 0x4a0a04: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4a0a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_4a0a08:
    // 0x4a0a08: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x4a0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
label_4a0a0c:
    // 0x4a0a0c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a0a0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4a0a10:
    // 0x4a0a10: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x4a0a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
label_4a0a14:
    // 0x4a0a14: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4a0a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_4a0a18:
    // 0x4a0a18: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a0a18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4a0a1c:
    // 0x4a0a1c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4a0a1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_4a0a20:
    // 0x4a0a20: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a0a24:
    // 0x4a0a24: 0x34e8ffff  ori         $t0, $a3, 0xFFFF
    ctx->pc = 0x4a0a24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a0a28:
    // 0x4a0a28: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a0a28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a0a2c:
    // 0x4a0a2c: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x4a0a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
label_4a0a30:
    // 0x4a0a30: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a0a30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a0a34:
    // 0x4a0a34: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x4a0a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_4a0a38:
    // 0x4a0a38: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4a0a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_4a0a3c:
    // 0x4a0a3c: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x4a0a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
label_4a0a40:
    // 0x4a0a40: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a0a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4a0a44:
    // 0x4a0a44: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4a0a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_4a0a48:
    // 0x4a0a48: 0xaf240000  sw          $a0, 0x0($t9)
    ctx->pc = 0x4a0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 4));
label_4a0a4c:
    // 0x4a0a4c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a0a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4a0a50:
    // 0x4a0a50: 0x34caffff  ori         $t2, $a2, 0xFFFF
    ctx->pc = 0x4a0a50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4a0a54:
    // 0x4a0a54: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a0a58:
    // 0x4a0a58: 0x87230000  lh          $v1, 0x0($t9)
    ctx->pc = 0x4a0a58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
label_4a0a5c:
    // 0x4a0a5c: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x4a0a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
label_4a0a60:
    // 0x4a0a60: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x4a0a60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
label_4a0a64:
    // 0x4a0a64: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a0a64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a0a68:
    // 0x4a0a68: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x4a0a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4a0a6c:
    // 0x4a0a6c: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4a0a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_4a0a70:
    // 0x4a0a70: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x4a0a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
label_4a0a74:
    // 0x4a0a74: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a0a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4a0a78:
    // 0x4a0a78: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a0a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4a0a7c:
    // 0x4a0a7c: 0xaf050000  sw          $a1, 0x0($t8)
    ctx->pc = 0x4a0a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 5));
label_4a0a80:
    // 0x4a0a80: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a0a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4a0a84:
    // 0x4a0a84: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4a0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_4a0a88:
    // 0x4a0a88: 0x3487ffff  ori         $a3, $a0, 0xFFFF
    ctx->pc = 0x4a0a88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4a0a8c:
    // 0x4a0a8c: 0x87020000  lh          $v0, 0x0($t8)
    ctx->pc = 0x4a0a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
label_4a0a90:
    // 0x4a0a90: 0xaf240000  sw          $a0, 0x0($t9)
    ctx->pc = 0x4a0a90u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 4));
label_4a0a94:
    // 0x4a0a94: 0x4d1023  subu        $v0, $v0, $t5
    ctx->pc = 0x4a0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_4a0a98:
    // 0x4a0a98: 0x87240000  lh          $a0, 0x0($t9)
    ctx->pc = 0x4a0a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
label_4a0a9c:
    // 0x4a0a9c: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4a0a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_4a0aa0:
    // 0x4a0aa0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a0aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4a0aa4:
    // 0x4a0aa4: 0xaf050000  sw          $a1, 0x0($t8)
    ctx->pc = 0x4a0aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 5));
label_4a0aa8:
    // 0x4a0aa8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a0aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4a0aac:
    // 0x4a0aac: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x4a0aacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4a0ab0:
    // 0x4a0ab0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a0ab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a0ab4:
    // 0x4a0ab4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x4a0ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4a0ab8:
    // 0x4a0ab8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4a0ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4a0abc:
    // 0x4a0abc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4a0ac0:
    // 0x4a0ac0: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x4a0ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
label_4a0ac4:
    // 0x4a0ac4: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4a0ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_4a0ac8:
    // 0x4a0ac8: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4a0ac8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_4a0acc:
    // 0x4a0acc: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4a0accu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_4a0ad0:
    // 0x4a0ad0: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4a0ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
label_4a0ad4:
    // 0x4a0ad4: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x4a0ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
label_4a0ad8:
    // 0x4a0ad8: 0x8f2025  or          $a0, $a0, $t7
    ctx->pc = 0x4a0ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 15));
label_4a0adc:
    // 0x4a0adc: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4a0adcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_4a0ae0:
    // 0x4a0ae0: 0x87020000  lh          $v0, 0x0($t8)
    ctx->pc = 0x4a0ae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
label_4a0ae4:
    // 0x4a0ae4: 0x95280000  lhu         $t0, 0x0($t1)
    ctx->pc = 0x4a0ae4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4a0ae8:
    // 0x4a0ae8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a0ae8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a0aec:
    // 0x4a0aec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4a0af0:
    // 0x4a0af0: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4a0af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_4a0af4:
    // 0x4a0af4: 0xaf270000  sw          $a3, 0x0($t9)
    ctx->pc = 0x4a0af4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 7));
label_4a0af8:
    // 0x4a0af8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a0af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4a0afc:
    // 0x4a0afc: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x4a0afcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4a0b00:
    // 0x4a0b00: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_4a0b04:
    if (ctx->pc == 0x4A0B04u) {
        ctx->pc = 0x4A0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B00u;
        // 0x4a0b04: 0xaf050000  sw          $a1, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0B08u;
        goto label_4a0b08;
    }
    ctx->pc = 0x4A0B00u;
    {
        const bool branch_taken_0x4a0b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B00u;
        // 0x4a0b04: 0xaf050000  sw          $a1, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0b00) {
            ctx->pc = 0x4A0B60u;
            goto label_4a0b60;
        }
    }
    ctx->pc = 0x4A0B08u;
label_4a0b08:
    // 0x4a0b08: 0x97220000  lhu         $v0, 0x0($t9)
    ctx->pc = 0x4a0b08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
label_4a0b0c:
    // 0x4a0b0c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4a0b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4a0b10:
    // 0x4a0b10: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_4a0b14:
    if (ctx->pc == 0x4A0B14u) {
        ctx->pc = 0x4A0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B10u;
        // 0x4a0b14: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0B18u;
        goto label_4a0b18;
    }
    ctx->pc = 0x4A0B10u;
    {
        const bool branch_taken_0x4a0b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0b10) {
            ctx->pc = 0x4A0B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0B10u;
            // 0x4a0b14: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0B64u;
            goto label_4a0b64;
        }
    }
    ctx->pc = 0x4A0B18u;
label_4a0b18:
    // 0x4a0b18: 0x97020000  lhu         $v0, 0x0($t8)
    ctx->pc = 0x4a0b18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
label_4a0b1c:
    // 0x4a0b1c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4a0b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4a0b20:
    // 0x4a0b20: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4a0b24:
    if (ctx->pc == 0x4A0B24u) {
        ctx->pc = 0x4A0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B20u;
        // 0x4a0b24: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0B28u;
        goto label_4a0b28;
    }
    ctx->pc = 0x4A0B20u;
    {
        const bool branch_taken_0x4a0b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0b20) {
            ctx->pc = 0x4A0B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0B20u;
            // 0x4a0b24: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0B64u;
            goto label_4a0b64;
        }
    }
    ctx->pc = 0x4A0B28u;
label_4a0b28:
    // 0x4a0b28: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x4a0b28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_4a0b2c:
    // 0x4a0b2c: 0x3543ffff  ori         $v1, $t2, 0xFFFF
    ctx->pc = 0x4a0b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_4a0b30:
    // 0x4a0b30: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4a0b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_4a0b34:
    // 0x4a0b34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a0b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a0b38:
    // 0x4a0b38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a0b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4a0b3c:
    // 0x4a0b3c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a0b3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a0b40:
    // 0x4a0b40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4a0b44:
    // 0x4a0b44: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x4a0b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
label_4a0b48:
    // 0x4a0b48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a0b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a0b4c:
    // 0x4a0b4c: 0x8c638540  lw          $v1, -0x7AC0($v1)
    ctx->pc = 0x4a0b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935872)));
label_4a0b50:
    // 0x4a0b50: 0x60f809  jalr        $v1
label_4a0b54:
    if (ctx->pc == 0x4A0B54u) {
        ctx->pc = 0x4A0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B50u;
        // 0x4a0b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0B58u;
        goto label_4a0b58;
    }
    ctx->pc = 0x4A0B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4A0B58u);
        ctx->pc = 0x4A0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B50u;
        // 0x4a0b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0B50u, 0x4A0B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A0B58u;
label_4a0b58:
    // 0x4a0b58: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a0b5c:
    if (ctx->pc == 0x4A0B5Cu) {
        ctx->pc = 0x4A0B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B58u;
        // 0x4a0b5c: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0B60u;
        goto label_4a0b60;
    }
    ctx->pc = 0x4A0B58u;
    {
        const bool branch_taken_0x4a0b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B58u;
        // 0x4a0b5c: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0b58) {
            ctx->pc = 0x4A0B64u;
            goto label_4a0b64;
        }
    }
    ctx->pc = 0x4A0B60u;
label_4a0b60:
    // 0x4a0b60: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4a0b60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4a0b64:
    // 0x4a0b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a0b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0b68:
    // 0x4a0b68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a0b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4a0b6c:
    // 0x4a0b6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4a0b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4a0b70:
    // 0x4a0b70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a0b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0b74:
    // 0x4a0b74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a0b74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4a0b78:
    // 0x4a0b78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a0b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0b7c:
    // 0x4a0b7c: 0x3e00008  jr          $ra
label_4a0b80:
    if (ctx->pc == 0x4A0B80u) {
        ctx->pc = 0x4A0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B7Cu;
        // 0x4a0b80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0B84u;
        goto label_4a0b84;
    }
    ctx->pc = 0x4A0B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B7Cu;
        // 0x4a0b80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0B84u;
label_4a0b84:
    // 0x4a0b84: 0x0  nop
    ctx->pc = 0x4a0b84u;
    // NOP
    ctx->pc = 0x4a0b88u;
}
