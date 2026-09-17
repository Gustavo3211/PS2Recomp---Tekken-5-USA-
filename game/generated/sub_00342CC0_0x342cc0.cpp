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

// Function: sub_00342CC0
// Address: 0x342cc0 - 0x342df8
void sub_00342CC0_0x342cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342CC0_0x342cc0");
#endif

    switch (ctx->pc) {
        case 0x342cc0u: goto label_342cc0;
        case 0x342cc4u: goto label_342cc4;
        case 0x342cc8u: goto label_342cc8;
        case 0x342cccu: goto label_342ccc;
        case 0x342cd0u: goto label_342cd0;
        case 0x342cd4u: goto label_342cd4;
        case 0x342cd8u: goto label_342cd8;
        case 0x342cdcu: goto label_342cdc;
        case 0x342ce0u: goto label_342ce0;
        case 0x342ce4u: goto label_342ce4;
        case 0x342ce8u: goto label_342ce8;
        case 0x342cecu: goto label_342cec;
        case 0x342cf0u: goto label_342cf0;
        case 0x342cf4u: goto label_342cf4;
        case 0x342cf8u: goto label_342cf8;
        case 0x342cfcu: goto label_342cfc;
        case 0x342d00u: goto label_342d00;
        case 0x342d04u: goto label_342d04;
        case 0x342d08u: goto label_342d08;
        case 0x342d0cu: goto label_342d0c;
        case 0x342d10u: goto label_342d10;
        case 0x342d14u: goto label_342d14;
        case 0x342d18u: goto label_342d18;
        case 0x342d1cu: goto label_342d1c;
        case 0x342d20u: goto label_342d20;
        case 0x342d24u: goto label_342d24;
        case 0x342d28u: goto label_342d28;
        case 0x342d2cu: goto label_342d2c;
        case 0x342d30u: goto label_342d30;
        case 0x342d34u: goto label_342d34;
        case 0x342d38u: goto label_342d38;
        case 0x342d3cu: goto label_342d3c;
        case 0x342d40u: goto label_342d40;
        case 0x342d44u: goto label_342d44;
        case 0x342d48u: goto label_342d48;
        case 0x342d4cu: goto label_342d4c;
        case 0x342d50u: goto label_342d50;
        case 0x342d54u: goto label_342d54;
        case 0x342d58u: goto label_342d58;
        case 0x342d5cu: goto label_342d5c;
        case 0x342d60u: goto label_342d60;
        case 0x342d64u: goto label_342d64;
        case 0x342d68u: goto label_342d68;
        case 0x342d6cu: goto label_342d6c;
        case 0x342d70u: goto label_342d70;
        case 0x342d74u: goto label_342d74;
        case 0x342d78u: goto label_342d78;
        case 0x342d7cu: goto label_342d7c;
        case 0x342d80u: goto label_342d80;
        case 0x342d84u: goto label_342d84;
        case 0x342d88u: goto label_342d88;
        case 0x342d8cu: goto label_342d8c;
        case 0x342d90u: goto label_342d90;
        case 0x342d94u: goto label_342d94;
        case 0x342d98u: goto label_342d98;
        case 0x342d9cu: goto label_342d9c;
        case 0x342da0u: goto label_342da0;
        case 0x342da4u: goto label_342da4;
        case 0x342da8u: goto label_342da8;
        case 0x342dacu: goto label_342dac;
        case 0x342db0u: goto label_342db0;
        case 0x342db4u: goto label_342db4;
        case 0x342db8u: goto label_342db8;
        case 0x342dbcu: goto label_342dbc;
        case 0x342dc0u: goto label_342dc0;
        case 0x342dc4u: goto label_342dc4;
        case 0x342dc8u: goto label_342dc8;
        case 0x342dccu: goto label_342dcc;
        case 0x342dd0u: goto label_342dd0;
        case 0x342dd4u: goto label_342dd4;
        case 0x342dd8u: goto label_342dd8;
        case 0x342ddcu: goto label_342ddc;
        case 0x342de0u: goto label_342de0;
        case 0x342de4u: goto label_342de4;
        case 0x342de8u: goto label_342de8;
        case 0x342decu: goto label_342dec;
        case 0x342df0u: goto label_342df0;
        case 0x342df4u: goto label_342df4;
        default: break;
    }

    ctx->pc = 0x342cc0u;

label_342cc0:
    // 0x342cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x342cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_342cc4:
    // 0x342cc4: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x342cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_342cc8:
    // 0x342cc8: 0x30c60800  andi        $a2, $a2, 0x800
    ctx->pc = 0x342cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
label_342ccc:
    // 0x342ccc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x342cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_342cd0:
    // 0x342cd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_342cd4:
    // 0x342cd4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x342cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_342cd8:
    // 0x342cd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x342cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_342cdc:
    // 0x342cdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x342cdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342ce0:
    // 0x342ce0: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
label_342ce4:
    if (ctx->pc == 0x342CE4u) {
        ctx->pc = 0x342CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CE0u;
        // 0x342ce4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342CE8u;
        goto label_342ce8;
    }
    ctx->pc = 0x342CE0u;
    {
        const bool branch_taken_0x342ce0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x342CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CE0u;
        // 0x342ce4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ce0) {
            ctx->pc = 0x342D38u;
            goto label_342d38;
        }
    }
    ctx->pc = 0x342CE8u;
label_342ce8:
    // 0x342ce8: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x342ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
label_342cec:
    // 0x342cec: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x342cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_342cf0:
    // 0x342cf0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x342cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_342cf4:
    // 0x342cf4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x342cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_342cf8:
    // 0x342cf8: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x342cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_342cfc:
    // 0x342cfc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x342cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_342d00:
    // 0x342d00: 0x8ca60414  lw          $a2, 0x414($a1)
    ctx->pc = 0x342d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1044)));
label_342d04:
    // 0x342d04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x342d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_342d08:
    // 0x342d08: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x342d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_342d0c:
    // 0x342d0c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x342d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_342d10:
    // 0x342d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342d14:
    // 0x342d14: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x342d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
label_342d18:
    // 0x342d18: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x342d18u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_342d1c:
    // 0x342d1c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x342d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_342d20:
    // 0x342d20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x342d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_342d24:
    // 0x342d24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x342d24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342d28:
    // 0x342d28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x342d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_342d2c:
    // 0x342d2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x342d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_342d30:
    // 0x342d30: 0x80c81e2  j           func_320788
label_342d34:
    if (ctx->pc == 0x342D34u) {
        ctx->pc = 0x342D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D30u;
        // 0x342d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342D38u;
        goto label_342d38;
    }
    ctx->pc = 0x342D30u;
    ctx->pc = 0x342D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342D30u;
    // 0x342d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320788u;
    sub_00320788_0x320788(rdram, ctx, runtime); return;
    ctx->pc = 0x342D38u;
label_342d38:
    // 0x342d38: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_342d3c:
    if (ctx->pc == 0x342D3Cu) {
        ctx->pc = 0x342D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D38u;
        // 0x342d3c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342D40u;
        goto label_342d40;
    }
    ctx->pc = 0x342D38u;
    {
        const bool branch_taken_0x342d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D38u;
        // 0x342d3c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d38) {
            ctx->pc = 0x342DB0u;
            goto label_342db0;
        }
    }
    ctx->pc = 0x342D40u;
label_342d40:
    // 0x342d40: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x342d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_342d44:
    // 0x342d44: 0x8c710414  lw          $s1, 0x414($v1)
    ctx->pc = 0x342d44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1044)));
label_342d48:
    // 0x342d48: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x342d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_342d4c:
    // 0x342d4c: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x342d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_342d50:
    // 0x342d50: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x342d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_342d54:
    // 0x342d54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x342d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_342d58:
    // 0x342d58: 0x2088023  subu        $s0, $s0, $t0
    ctx->pc = 0x342d58u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_342d5c:
    // 0x342d5c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x342d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_342d60:
    // 0x342d60: 0x60f809  jalr        $v1
label_342d64:
    if (ctx->pc == 0x342D64u) {
        ctx->pc = 0x342D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D60u;
        // 0x342d64: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342D68u;
        goto label_342d68;
    }
    ctx->pc = 0x342D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x342D68u);
        ctx->pc = 0x342D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D60u;
        // 0x342d64: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342D60u, 0x342D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342D68u;
label_342d68:
    // 0x342d68: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x342d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_342d6c:
    // 0x342d6c: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x342d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
label_342d70:
    // 0x342d70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x342d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342d74:
    // 0x342d74: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x342d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_342d78:
    // 0x342d78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x342d78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342d7c:
    // 0x342d7c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x342d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_342d80:
    // 0x342d80: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x342d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_342d84:
    // 0x342d84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x342d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_342d88:
    // 0x342d88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342d8c:
    // 0x342d8c: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x342d8cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_342d90:
    // 0x342d90: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x342d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
label_342d94:
    // 0x342d94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x342d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_342d98:
    // 0x342d98: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x342d98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_342d9c:
    // 0x342d9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x342d9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_342da0:
    // 0x342da0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x342da0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342da4:
    // 0x342da4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x342da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_342da8:
    // 0x342da8: 0x80c819c  j           func_320670
label_342dac:
    if (ctx->pc == 0x342DACu) {
        ctx->pc = 0x342DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DA8u;
        // 0x342dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342DB0u;
        goto label_342db0;
    }
    ctx->pc = 0x342DA8u;
    ctx->pc = 0x342DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342DA8u;
    // 0x342dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320670u;
    sub_00320670_0x320670(rdram, ctx, runtime); return;
    ctx->pc = 0x342DB0u;
label_342db0:
    // 0x342db0: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x342db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
label_342db4:
    // 0x342db4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x342db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_342db8:
    // 0x342db8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x342db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_342dbc:
    // 0x342dbc: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x342dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
label_342dc0:
    // 0x342dc0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x342dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_342dc4:
    // 0x342dc4: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x342dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_342dc8:
    // 0x342dc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x342dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_342dcc:
    // 0x342dcc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x342dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_342dd0:
    // 0x342dd0: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x342dd0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_342dd4:
    // 0x342dd4: 0xc0c8186  jal         func_320618
label_342dd8:
    if (ctx->pc == 0x342DD8u) {
        ctx->pc = 0x342DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DD4u;
        // 0x342dd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342DDCu;
        goto label_342ddc;
    }
    ctx->pc = 0x342DD4u;
    SET_GPR_U32(ctx, 31, 0x342DDCu);
    ctx->pc = 0x342DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342DD4u;
    // 0x342dd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320618u, 0x342DD4u, 0x342DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342DDCu;
label_342ddc:
    // 0x342ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342de0:
    // 0x342de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x342de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_342de4:
    // 0x342de4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x342de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_342de8:
    // 0x342de8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x342de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_342dec:
    // 0x342dec: 0x3e00008  jr          $ra
label_342df0:
    if (ctx->pc == 0x342DF0u) {
        ctx->pc = 0x342DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DECu;
        // 0x342df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342DF4u;
        goto label_342df4;
    }
    ctx->pc = 0x342DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DECu;
        // 0x342df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342DF4u;
label_342df4:
    // 0x342df4: 0x0  nop
    ctx->pc = 0x342df4u;
    // NOP
    ctx->pc = 0x342df8u;
}
