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

// Function: sub_00275C98
// Address: 0x275c98 - 0x2762f0
void sub_00275C98_0x275c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275C98_0x275c98");
#endif

    switch (ctx->pc) {
        case 0x275cdcu: goto label_275cdc;
        case 0x275ce4u: goto label_275ce4;
        case 0x275cf0u: goto label_275cf0;
        case 0x275d00u: goto label_275d00;
        case 0x275d14u: goto label_275d14;
        case 0x275d40u: goto label_275d40;
        case 0x275d50u: goto label_275d50;
        case 0x275d70u: goto label_275d70;
        case 0x275dd4u: goto label_275dd4;
        case 0x275de8u: goto label_275de8;
        case 0x275e08u: goto label_275e08;
        case 0x275e44u: goto label_275e44;
        case 0x275e58u: goto label_275e58;
        case 0x275ed8u: goto label_275ed8;
        case 0x275ee8u: goto label_275ee8;
        case 0x275f5cu: goto label_275f5c;
        case 0x275f70u: goto label_275f70;
        case 0x276010u: goto label_276010;
        case 0x276030u: goto label_276030;
        case 0x276094u: goto label_276094;
        case 0x2760a8u: goto label_2760a8;
        case 0x2760c8u: goto label_2760c8;
        case 0x276104u: goto label_276104;
        case 0x276118u: goto label_276118;
        case 0x276198u: goto label_276198;
        case 0x2761a8u: goto label_2761a8;
        case 0x27621cu: goto label_27621c;
        case 0x276230u: goto label_276230;
        default: break;
    }

    ctx->pc = 0x275c98u;

    // 0x275c98: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x275c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x275c9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x275c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ca0: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x275ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x275ca4: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x275ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x275ca8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x275ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cac: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x275cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x275cb0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x275cb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cb4: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x275cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x275cb8: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x275cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x275cbc: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x275cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
    // 0x275cc0: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x275cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x275cc4: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x275cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x275cc8: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x275cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x275ccc: 0xe7b600f8  swc1        $f22, 0xF8($sp)
    ctx->pc = 0x275cccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x275cd0: 0xe7b500f0  swc1        $f21, 0xF0($sp)
    ctx->pc = 0x275cd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x275cd4: 0xc08c1b0  jal         func_2306C0
    ctx->pc = 0x275CD4u;
    SET_GPR_U32(ctx, 31, 0x275CDCu);
    ctx->pc = 0x275CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275CD4u;
    // 0x275cd8: 0xe7b400e8  swc1        $f20, 0xE8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306C0u, 0x275CD4u, 0x275CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CDCu;
label_275cdc:
    // 0x275cdc: 0xc08c31a  jal         func_230C68
    ctx->pc = 0x275CDCu;
    SET_GPR_U32(ctx, 31, 0x275CE4u);
    ctx->pc = 0x275CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275CDCu;
    // 0x275ce0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230C68u, 0x275CDCu, 0x275CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CE4u;
label_275ce4:
    // 0x275ce4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x275ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275ce8: 0xc08c19c  jal         func_230670
    ctx->pc = 0x275CE8u;
    SET_GPR_U32(ctx, 31, 0x275CF0u);
    ctx->pc = 0x275CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275CE8u;
    // 0x275cec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230670u, 0x275CE8u, 0x275CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CF0u;
label_275cf0:
    // 0x275cf0: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x275cf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275cf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cf8: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x275CF8u;
    SET_GPR_U32(ctx, 31, 0x275D00u);
    ctx->pc = 0x275CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275CF8u;
    // 0x275cfc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x275CF8u, 0x275D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D00u;
label_275d00:
    // 0x275d00: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x275d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d04: 0x27b70060  addiu       $s7, $sp, 0x60
    ctx->pc = 0x275d04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x275d08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x275d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d0c: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x275D0Cu;
    SET_GPR_U32(ctx, 31, 0x275D14u);
    ctx->pc = 0x275D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275D0Cu;
    // 0x275d10: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x275D0Cu, 0x275D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D14u;
label_275d14:
    // 0x275d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275d18: 0x8f83ae90  lw          $v1, -0x5170($gp)
    ctx->pc = 0x275d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275d1c: 0x10600165  beqz        $v1, . + 4 + (0x165 << 2)
    ctx->pc = 0x275D1Cu;
    {
        const bool branch_taken_0x275d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D1Cu;
        // 0x275d20: 0xaf82aea4  sw          $v0, -0x515C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d1c) {
            ctx->pc = 0x2762B4u;
            goto label_2762b4;
        }
    }
    ctx->pc = 0x275D24u;
    // 0x275d24: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x275d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x275d28: 0x8f83ae9c  lw          $v1, -0x5164($gp)
    ctx->pc = 0x275d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946460)));
    // 0x275d2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x275d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x275d30: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275D30u;
    {
        const bool branch_taken_0x275d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x275d30) {
            ctx->pc = 0x275D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275D30u;
            // 0x275d34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275D48u;
            goto label_275d48;
        }
    }
    ctx->pc = 0x275D38u;
    // 0x275d38: 0xc09d6d0  jal         func_275B40
    ctx->pc = 0x275D38u;
    SET_GPR_U32(ctx, 31, 0x275D40u);
    ctx->pc = 0x275B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275B40u, 0x275D38u, 0x275D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D40u;
label_275d40:
    // 0x275d40: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x275D40u;
    {
        const bool branch_taken_0x275d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D40u;
        // 0x275d44: 0x8f82ae94  lw          $v0, -0x516C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d40) {
            ctx->pc = 0x275FFCu;
            goto label_275ffc;
        }
    }
    ctx->pc = 0x275D48u;
label_275d48:
    // 0x275d48: 0xc09d480  jal         func_275200
    ctx->pc = 0x275D48u;
    SET_GPR_U32(ctx, 31, 0x275D50u);
    ctx->pc = 0x275D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275D48u;
    // 0x275d4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x275D48u, 0x275D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D50u;
label_275d50:
    // 0x275d50: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x275d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275d54: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x275D54u;
    {
        const bool branch_taken_0x275d54 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x275D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D54u;
        // 0x275d58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d54) {
            ctx->pc = 0x275E38u;
            goto label_275e38;
        }
    }
    ctx->pc = 0x275D5Cu;
    // 0x275d5c: 0xc7968c2c  lwc1        $f22, -0x73D4($gp)
    ctx->pc = 0x275d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x275d60: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x275d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x275d64: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x275d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x275d68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x275d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x275d6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x275d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_275d70:
    // 0x275d70: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x275d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x275d74: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x275d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x275d78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275D78u;
    {
        const bool branch_taken_0x275d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D78u;
        // 0x275d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d78) {
            ctx->pc = 0x275D8Cu;
            goto label_275d8c;
        }
    }
    ctx->pc = 0x275D80u;
    // 0x275d80: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x275D80u;
    {
        const bool branch_taken_0x275d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D80u;
        // 0x275d84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d80) {
            ctx->pc = 0x275D8Cu;
            goto label_275d8c;
        }
    }
    ctx->pc = 0x275D88u;
    // 0x275d88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275d8c:
    // 0x275d8c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x275D8Cu;
    {
        const bool branch_taken_0x275d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275d8c) {
            ctx->pc = 0x275D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275D8Cu;
            // 0x275d90: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275E2Cu;
            goto label_275e2c;
        }
    }
    ctx->pc = 0x275D94u;
    // 0x275d94: 0x8e300898  lw          $s0, 0x898($s1)
    ctx->pc = 0x275d94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x275d98: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x275d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x275d9c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x275d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x275da0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x275da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275da4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x275da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x275da8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x275da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275dac: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x275dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x275db0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x275db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275db4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x275db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275db8: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x275db8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x275dbc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x275dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x275dc0: 0x8e2208a0  lw          $v0, 0x8A0($s1)
    ctx->pc = 0x275dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2208)));
    // 0x275dc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x275DC4u;
    {
        const bool branch_taken_0x275dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DC4u;
        // 0x275dc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275dc4) {
            ctx->pc = 0x275DE0u;
            goto label_275de0;
        }
    }
    ctx->pc = 0x275DCCu;
    // 0x275dcc: 0xc08899a  jal         func_222668
    ctx->pc = 0x275DCCu;
    SET_GPR_U32(ctx, 31, 0x275DD4u);
    ctx->pc = 0x275DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275DCCu;
    // 0x275dd0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222668u, 0x275DCCu, 0x275DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275DD4u;
label_275dd4:
    // 0x275dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x275DD4u;
    {
        const bool branch_taken_0x275dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275dd4) {
            ctx->pc = 0x275DE8u;
            goto label_275de8;
        }
    }
    ctx->pc = 0x275DDCu;
    // 0x275ddc: 0x0  nop
    ctx->pc = 0x275ddcu;
    // NOP
label_275de0:
    // 0x275de0: 0xc08899a  jal         func_222668
    ctx->pc = 0x275DE0u;
    SET_GPR_U32(ctx, 31, 0x275DE8u);
    ctx->pc = 0x275DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275DE0u;
    // 0x275de4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222668u, 0x275DE0u, 0x275DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275DE8u;
label_275de8:
    // 0x275de8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275DE8u;
    {
        const bool branch_taken_0x275de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DE8u;
        // 0x275dec: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275de8) {
            ctx->pc = 0x275DF8u;
            goto label_275df8;
        }
    }
    ctx->pc = 0x275DF0u;
    // 0x275df0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275DF0u;
    {
        const bool branch_taken_0x275df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DF0u;
        // 0x275df4: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275df0) {
            ctx->pc = 0x275E24u;
            goto label_275e24;
        }
    }
    ctx->pc = 0x275DF8u;
label_275df8:
    // 0x275df8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x275df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275dfc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x275dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e00: 0xc08491e  jal         func_212478
    ctx->pc = 0x275E00u;
    SET_GPR_U32(ctx, 31, 0x275E08u);
    ctx->pc = 0x275E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E00u;
    // 0x275e04: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x275E00u, 0x275E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E08u;
label_275e08:
    // 0x275e08: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x275e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275e0c: 0xc780ca38  lwc1        $f0, -0x35C8($gp)
    ctx->pc = 0x275e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275e10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275e14: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x275E14u;
    {
        const bool branch_taken_0x275e14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x275E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E14u;
        // 0x275e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e14) {
            ctx->pc = 0x275E20u;
            goto label_275e20;
        }
    }
    ctx->pc = 0x275E1Cu;
    // 0x275e1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275e20:
    // 0x275e20: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x275e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_275e24:
    // 0x275e24: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x275e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275e28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x275e28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_275e2c:
    // 0x275e2c: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x275e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x275e30: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x275E30u;
    {
        const bool branch_taken_0x275e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E30u;
        // 0x275e34: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e30) {
            ctx->pc = 0x275D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275d70;
        }
    }
    ctx->pc = 0x275E38u;
label_275e38:
    // 0x275e38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x275e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e3c: 0xc09d480  jal         func_275200
    ctx->pc = 0x275E3Cu;
    SET_GPR_U32(ctx, 31, 0x275E44u);
    ctx->pc = 0x275E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E3Cu;
    // 0x275e40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x275E3Cu, 0x275E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E44u;
label_275e44:
    // 0x275e44: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x275e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275e48: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x275E48u;
    {
        const bool branch_taken_0x275e48 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x275E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E48u;
        // 0x275e4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e48) {
            ctx->pc = 0x275ECCu;
            goto label_275ecc;
        }
    }
    ctx->pc = 0x275E50u;
    // 0x275e50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x275e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275e54: 0x0  nop
    ctx->pc = 0x275e54u;
    // NOP
label_275e58:
    // 0x275e58: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x275e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x275e5c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x275e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x275e60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275E60u;
    {
        const bool branch_taken_0x275e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E60u;
        // 0x275e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e60) {
            ctx->pc = 0x275E74u;
            goto label_275e74;
        }
    }
    ctx->pc = 0x275E68u;
    // 0x275e68: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x275E68u;
    {
        const bool branch_taken_0x275e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E68u;
        // 0x275e6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e68) {
            ctx->pc = 0x275E74u;
            goto label_275e74;
        }
    }
    ctx->pc = 0x275E70u;
    // 0x275e70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275e74:
    // 0x275e74: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x275E74u;
    {
        const bool branch_taken_0x275e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275e74) {
            ctx->pc = 0x275E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275E74u;
            // 0x275e78: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275EC0u;
            goto label_275ec0;
        }
    }
    ctx->pc = 0x275E7Cu;
    // 0x275e7c: 0x8f82ae9c  lw          $v0, -0x5164($gp)
    ctx->pc = 0x275e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946460)));
    // 0x275e80: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x275e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x275e84: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x275E84u;
    {
        const bool branch_taken_0x275e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275e84) {
            ctx->pc = 0x275E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275E84u;
            // 0x275e88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275EC0u;
            goto label_275ec0;
        }
    }
    ctx->pc = 0x275E8Cu;
    // 0x275e8c: 0x8e300898  lw          $s0, 0x898($s1)
    ctx->pc = 0x275e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x275e90: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x275e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x275e94: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x275E94u;
    {
        const bool branch_taken_0x275e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275e94) {
            ctx->pc = 0x275E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275E94u;
            // 0x275e98: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275EC0u;
            goto label_275ec0;
        }
    }
    ctx->pc = 0x275E9Cu;
    // 0x275e9c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x275e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x275ea0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275EA0u;
    {
        const bool branch_taken_0x275ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EA0u;
        // 0x275ea4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ea0) {
            ctx->pc = 0x275EC0u;
            goto label_275ec0;
        }
    }
    ctx->pc = 0x275EA8u;
    // 0x275ea8: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x275ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x275eac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275EACu;
    {
        const bool branch_taken_0x275eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275eac) {
            ctx->pc = 0x275EC0u;
            goto label_275ec0;
        }
    }
    ctx->pc = 0x275EB4u;
    // 0x275eb4: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x275eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x275eb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x275eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x275ebc: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x275ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
label_275ec0:
    // 0x275ec0: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x275ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x275ec4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x275EC4u;
    {
        const bool branch_taken_0x275ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EC4u;
        // 0x275ec8: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ec4) {
            ctx->pc = 0x275E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275e58;
        }
    }
    ctx->pc = 0x275ECCu;
label_275ecc:
    // 0x275ecc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x275eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ed0: 0xc09d480  jal         func_275200
    ctx->pc = 0x275ED0u;
    SET_GPR_U32(ctx, 31, 0x275ED8u);
    ctx->pc = 0x275ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275ED0u;
    // 0x275ed4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x275ED0u, 0x275ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275ED8u;
label_275ed8:
    // 0x275ed8: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x275ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275edc: 0x1880001c  blez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x275EDCu;
    {
        const bool branch_taken_0x275edc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x275EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EDCu;
        // 0x275ee0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275edc) {
            ctx->pc = 0x275F50u;
            goto label_275f50;
        }
    }
    ctx->pc = 0x275EE4u;
    // 0x275ee4: 0x0  nop
    ctx->pc = 0x275ee4u;
    // NOP
label_275ee8:
    // 0x275ee8: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x275ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x275eec: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x275eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x275ef0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275EF0u;
    {
        const bool branch_taken_0x275ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EF0u;
        // 0x275ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ef0) {
            ctx->pc = 0x275F04u;
            goto label_275f04;
        }
    }
    ctx->pc = 0x275EF8u;
    // 0x275ef8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x275EF8u;
    {
        const bool branch_taken_0x275ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EF8u;
        // 0x275efc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ef8) {
            ctx->pc = 0x275F04u;
            goto label_275f04;
        }
    }
    ctx->pc = 0x275F00u;
    // 0x275f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275f04:
    // 0x275f04: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x275F04u;
    {
        const bool branch_taken_0x275f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275f04) {
            ctx->pc = 0x275F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275F04u;
            // 0x275f08: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275F44u;
            goto label_275f44;
        }
    }
    ctx->pc = 0x275F0Cu;
    // 0x275f0c: 0x8e300898  lw          $s0, 0x898($s1)
    ctx->pc = 0x275f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x275f10: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x275f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x275f14: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x275F14u;
    {
        const bool branch_taken_0x275f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x275f14) {
            ctx->pc = 0x275F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275F14u;
            // 0x275f18: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275F1Cu;
            goto label_275f1c;
        }
    }
    ctx->pc = 0x275F1Cu;
label_275f1c:
    // 0x275f1c: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x275f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x275f20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275F20u;
    {
        const bool branch_taken_0x275f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F20u;
        // 0x275f24: 0x8f84ae90  lw          $a0, -0x5170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f20) {
            ctx->pc = 0x275F40u;
            goto label_275f40;
        }
    }
    ctx->pc = 0x275F28u;
    // 0x275f28: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x275F28u;
    {
        const bool branch_taken_0x275f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x275f28) {
            ctx->pc = 0x275F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275F28u;
            // 0x275f2c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275F44u;
            goto label_275f44;
        }
    }
    ctx->pc = 0x275F30u;
    // 0x275f30: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x275f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x275f34: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x275F34u;
    {
        const bool branch_taken_0x275f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275f34) {
            ctx->pc = 0x275F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275F34u;
            // 0x275f38: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275F3Cu;
            goto label_275f3c;
        }
    }
    ctx->pc = 0x275F3Cu;
label_275f3c:
    // 0x275f3c: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x275f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
label_275f40:
    // 0x275f40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x275f40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_275f44:
    // 0x275f44: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x275f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x275f48: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x275F48u;
    {
        const bool branch_taken_0x275f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F48u;
        // 0x275f4c: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f48) {
            ctx->pc = 0x275EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275ee8;
        }
    }
    ctx->pc = 0x275F50u;
label_275f50:
    // 0x275f50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x275f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f54: 0xc09d480  jal         func_275200
    ctx->pc = 0x275F54u;
    SET_GPR_U32(ctx, 31, 0x275F5Cu);
    ctx->pc = 0x275F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275F54u;
    // 0x275f58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x275F54u, 0x275F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275F5Cu;
label_275f5c:
    // 0x275f5c: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x275f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275f60: 0x18800025  blez        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x275F60u;
    {
        const bool branch_taken_0x275f60 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x275F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F60u;
        // 0x275f64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f60) {
            ctx->pc = 0x275FF8u;
            goto label_275ff8;
        }
    }
    ctx->pc = 0x275F68u;
    // 0x275f68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x275f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275f6c: 0x0  nop
    ctx->pc = 0x275f6cu;
    // NOP
label_275f70:
    // 0x275f70: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x275f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x275f74: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x275f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x275f78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275F78u;
    {
        const bool branch_taken_0x275f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F78u;
        // 0x275f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f78) {
            ctx->pc = 0x275F8Cu;
            goto label_275f8c;
        }
    }
    ctx->pc = 0x275F80u;
    // 0x275f80: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x275F80u;
    {
        const bool branch_taken_0x275f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F80u;
        // 0x275f84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f80) {
            ctx->pc = 0x275F8Cu;
            goto label_275f8c;
        }
    }
    ctx->pc = 0x275F88u;
    // 0x275f88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275f8c:
    // 0x275f8c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x275F8Cu;
    {
        const bool branch_taken_0x275f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275f8c) {
            ctx->pc = 0x275F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275F8Cu;
            // 0x275f90: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275FECu;
            goto label_275fec;
        }
    }
    ctx->pc = 0x275F94u;
    // 0x275f94: 0x8f82ae9c  lw          $v0, -0x5164($gp)
    ctx->pc = 0x275f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946460)));
    // 0x275f98: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x275f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x275f9c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x275F9Cu;
    {
        const bool branch_taken_0x275f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275f9c) {
            ctx->pc = 0x275FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275F9Cu;
            // 0x275fa0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275FECu;
            goto label_275fec;
        }
    }
    ctx->pc = 0x275FA4u;
    // 0x275fa4: 0x8e300898  lw          $s0, 0x898($s1)
    ctx->pc = 0x275fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x275fa8: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x275fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x275fac: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x275FACu;
    {
        const bool branch_taken_0x275fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275fac) {
            ctx->pc = 0x275FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275FACu;
            // 0x275fb0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275FECu;
            goto label_275fec;
        }
    }
    ctx->pc = 0x275FB4u;
    // 0x275fb4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x275fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x275fb8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x275FB8u;
    {
        const bool branch_taken_0x275fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275fb8) {
            ctx->pc = 0x275FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275FB8u;
            // 0x275fbc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275FECu;
            goto label_275fec;
        }
    }
    ctx->pc = 0x275FC0u;
    // 0x275fc0: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x275fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x275fc4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x275FC4u;
    {
        const bool branch_taken_0x275fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275fc4) {
            ctx->pc = 0x275FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275FC4u;
            // 0x275fc8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275FECu;
            goto label_275fec;
        }
    }
    ctx->pc = 0x275FCCu;
    // 0x275fcc: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x275fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x275fd0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x275fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x275fd4: 0x8f82ae9c  lw          $v0, -0x5164($gp)
    ctx->pc = 0x275fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946460)));
    // 0x275fd8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x275fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x275fdc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275FDCu;
    {
        const bool branch_taken_0x275fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FDCu;
        // 0x275fe0: 0x8f82ae94  lw          $v0, -0x516C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fdc) {
            ctx->pc = 0x275FFCu;
            goto label_275ffc;
        }
    }
    ctx->pc = 0x275FE4u;
    // 0x275fe4: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x275fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275fe8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x275fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_275fec:
    // 0x275fec: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x275fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x275ff0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x275FF0u;
    {
        const bool branch_taken_0x275ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FF0u;
        // 0x275ff4: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ff0) {
            ctx->pc = 0x275F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275f70;
        }
    }
    ctx->pc = 0x275FF8u;
label_275ff8:
    // 0x275ff8: 0x8f82ae94  lw          $v0, -0x516C($gp)
    ctx->pc = 0x275ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
label_275ffc:
    // 0x275ffc: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x275FFCu;
    {
        const bool branch_taken_0x275ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FFCu;
        // 0x276000: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ffc) {
            ctx->pc = 0x2762B8u;
            goto label_2762b8;
        }
    }
    ctx->pc = 0x276004u;
    // 0x276004: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x276004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276008: 0xc09d480  jal         func_275200
    ctx->pc = 0x276008u;
    SET_GPR_U32(ctx, 31, 0x276010u);
    ctx->pc = 0x27600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276008u;
    // 0x27600c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x276008u, 0x276010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276010u;
label_276010:
    // 0x276010: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x276010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x276014: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x276014u;
    {
        const bool branch_taken_0x276014 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x276018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276014u;
        // 0x276018: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276014) {
            ctx->pc = 0x2760F8u;
            goto label_2760f8;
        }
    }
    ctx->pc = 0x27601Cu;
    // 0x27601c: 0xc7968c30  lwc1        $f22, -0x73D0($gp)
    ctx->pc = 0x27601cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x276020: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x276020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x276024: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x276024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x276028: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x276028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27602c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27602cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_276030:
    // 0x276030: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x276030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x276034: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x276034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x276038: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276038u;
    {
        const bool branch_taken_0x276038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276038u;
        // 0x27603c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276038) {
            ctx->pc = 0x27604Cu;
            goto label_27604c;
        }
    }
    ctx->pc = 0x276040u;
    // 0x276040: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x276040u;
    {
        const bool branch_taken_0x276040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276040u;
        // 0x276044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276040) {
            ctx->pc = 0x27604Cu;
            goto label_27604c;
        }
    }
    ctx->pc = 0x276048u;
    // 0x276048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27604c:
    // 0x27604c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x27604Cu;
    {
        const bool branch_taken_0x27604c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27604c) {
            ctx->pc = 0x276050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27604Cu;
            // 0x276050: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2760ECu;
            goto label_2760ec;
        }
    }
    ctx->pc = 0x276054u;
    // 0x276054: 0x8e300898  lw          $s0, 0x898($s1)
    ctx->pc = 0x276054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x276058: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x276058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x27605c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x27605cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x276060: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x276060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276064: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x276064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x276068: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x276068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27606c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x27606cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x276070: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x276070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x276074: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x276074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276078: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x276078u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x27607c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x27607cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x276080: 0x8e2208a0  lw          $v0, 0x8A0($s1)
    ctx->pc = 0x276080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2208)));
    // 0x276084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276084u;
    {
        const bool branch_taken_0x276084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276084u;
        // 0x276088: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276084) {
            ctx->pc = 0x2760A0u;
            goto label_2760a0;
        }
    }
    ctx->pc = 0x27608Cu;
    // 0x27608c: 0xc08899a  jal         func_222668
    ctx->pc = 0x27608Cu;
    SET_GPR_U32(ctx, 31, 0x276094u);
    ctx->pc = 0x276090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27608Cu;
    // 0x276090: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222668u, 0x27608Cu, 0x276094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276094u;
label_276094:
    // 0x276094: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x276094u;
    {
        const bool branch_taken_0x276094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276094) {
            ctx->pc = 0x2760A8u;
            goto label_2760a8;
        }
    }
    ctx->pc = 0x27609Cu;
    // 0x27609c: 0x0  nop
    ctx->pc = 0x27609cu;
    // NOP
label_2760a0:
    // 0x2760a0: 0xc08899a  jal         func_222668
    ctx->pc = 0x2760A0u;
    SET_GPR_U32(ctx, 31, 0x2760A8u);
    ctx->pc = 0x2760A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2760A0u;
    // 0x2760a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222668u, 0x2760A0u, 0x2760A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2760A8u;
label_2760a8:
    // 0x2760a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2760A8u;
    {
        const bool branch_taken_0x2760a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2760ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760A8u;
        // 0x2760ac: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760a8) {
            ctx->pc = 0x2760B8u;
            goto label_2760b8;
        }
    }
    ctx->pc = 0x2760B0u;
    // 0x2760b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2760B0u;
    {
        const bool branch_taken_0x2760b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2760B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760B0u;
        // 0x2760b4: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760b0) {
            ctx->pc = 0x2760E4u;
            goto label_2760e4;
        }
    }
    ctx->pc = 0x2760B8u;
label_2760b8:
    // 0x2760b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2760b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2760bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2760bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2760c0: 0xc08491e  jal         func_212478
    ctx->pc = 0x2760C0u;
    SET_GPR_U32(ctx, 31, 0x2760C8u);
    ctx->pc = 0x2760C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2760C0u;
    // 0x2760c4: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2760C0u, 0x2760C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2760C8u;
label_2760c8:
    // 0x2760c8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2760c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2760cc: 0xc780ca38  lwc1        $f0, -0x35C8($gp)
    ctx->pc = 0x2760ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2760d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2760d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2760d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2760D4u;
    {
        const bool branch_taken_0x2760d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2760D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760D4u;
        // 0x2760d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760d4) {
            ctx->pc = 0x2760E0u;
            goto label_2760e0;
        }
    }
    ctx->pc = 0x2760DCu;
    // 0x2760dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2760dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2760e0:
    // 0x2760e0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2760e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_2760e4:
    // 0x2760e4: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x2760e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x2760e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2760e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2760ec:
    // 0x2760ec: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x2760ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2760f0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2760F0u;
    {
        const bool branch_taken_0x2760f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2760F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760F0u;
        // 0x2760f4: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760f0) {
            ctx->pc = 0x276030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276030;
        }
    }
    ctx->pc = 0x2760F8u;
label_2760f8:
    // 0x2760f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2760f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2760fc: 0xc09d480  jal         func_275200
    ctx->pc = 0x2760FCu;
    SET_GPR_U32(ctx, 31, 0x276104u);
    ctx->pc = 0x276100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2760FCu;
    // 0x276100: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x2760FCu, 0x276104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276104u;
label_276104:
    // 0x276104: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x276104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x276108: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x276108u;
    {
        const bool branch_taken_0x276108 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x27610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276108u;
        // 0x27610c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276108) {
            ctx->pc = 0x27618Cu;
            goto label_27618c;
        }
    }
    ctx->pc = 0x276110u;
    // 0x276110: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x276110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276114: 0x0  nop
    ctx->pc = 0x276114u;
    // NOP
label_276118:
    // 0x276118: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x276118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x27611c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x27611cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x276120: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276120u;
    {
        const bool branch_taken_0x276120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276120u;
        // 0x276124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276120) {
            ctx->pc = 0x276134u;
            goto label_276134;
        }
    }
    ctx->pc = 0x276128u;
    // 0x276128: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x276128u;
    {
        const bool branch_taken_0x276128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276128u;
        // 0x27612c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276128) {
            ctx->pc = 0x276134u;
            goto label_276134;
        }
    }
    ctx->pc = 0x276130u;
    // 0x276130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276134:
    // 0x276134: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x276134u;
    {
        const bool branch_taken_0x276134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276134u;
        // 0x276138: 0x8f82aea0  lw          $v0, -0x5160($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276134) {
            ctx->pc = 0x27617Cu;
            goto label_27617c;
        }
    }
    ctx->pc = 0x27613Cu;
    // 0x27613c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x27613cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x276140: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x276140u;
    {
        const bool branch_taken_0x276140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276140) {
            ctx->pc = 0x276144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276140u;
            // 0x276144: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276180u;
            goto label_276180;
        }
    }
    ctx->pc = 0x276148u;
    // 0x276148: 0x8e230898  lw          $v1, 0x898($s1)
    ctx->pc = 0x276148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x27614c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x27614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x276150: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x276150u;
    {
        const bool branch_taken_0x276150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276150) {
            ctx->pc = 0x276154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276150u;
            // 0x276154: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276180u;
            goto label_276180;
        }
    }
    ctx->pc = 0x276158u;
    // 0x276158: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x276158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x27615c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x27615Cu;
    {
        const bool branch_taken_0x27615c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27615c) {
            ctx->pc = 0x276160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27615Cu;
            // 0x276160: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276180u;
            goto label_276180;
        }
    }
    ctx->pc = 0x276164u;
    // 0x276164: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x276164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x276168: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x276168u;
    {
        const bool branch_taken_0x276168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276168) {
            ctx->pc = 0x27616Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276168u;
            // 0x27616c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276180u;
            goto label_276180;
        }
    }
    ctx->pc = 0x276170u;
    // 0x276170: 0xac650084  sw          $a1, 0x84($v1)
    ctx->pc = 0x276170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 5));
    // 0x276174: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x276174u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x276178: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x276178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
label_27617c:
    // 0x27617c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27617cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_276180:
    // 0x276180: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x276180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x276184: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x276184u;
    {
        const bool branch_taken_0x276184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276184u;
        // 0x276188: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276184) {
            ctx->pc = 0x276118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276118;
        }
    }
    ctx->pc = 0x27618Cu;
label_27618c:
    // 0x27618c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27618cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276190: 0xc09d480  jal         func_275200
    ctx->pc = 0x276190u;
    SET_GPR_U32(ctx, 31, 0x276198u);
    ctx->pc = 0x276194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276190u;
    // 0x276194: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x276190u, 0x276198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276198u;
label_276198:
    // 0x276198: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x276198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x27619c: 0x1880001c  blez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x27619Cu;
    {
        const bool branch_taken_0x27619c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2761A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27619Cu;
        // 0x2761a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27619c) {
            ctx->pc = 0x276210u;
            goto label_276210;
        }
    }
    ctx->pc = 0x2761A4u;
    // 0x2761a4: 0x0  nop
    ctx->pc = 0x2761a4u;
    // NOP
label_2761a8:
    // 0x2761a8: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2761a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2761ac: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2761acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2761b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2761B0u;
    {
        const bool branch_taken_0x2761b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2761B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761B0u;
        // 0x2761b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761b0) {
            ctx->pc = 0x2761C4u;
            goto label_2761c4;
        }
    }
    ctx->pc = 0x2761B8u;
    // 0x2761b8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2761B8u;
    {
        const bool branch_taken_0x2761b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2761BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761B8u;
        // 0x2761bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761b8) {
            ctx->pc = 0x2761C4u;
            goto label_2761c4;
        }
    }
    ctx->pc = 0x2761C0u;
    // 0x2761c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2761c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2761c4:
    // 0x2761c4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2761C4u;
    {
        const bool branch_taken_0x2761c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2761c4) {
            ctx->pc = 0x2761C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2761C4u;
            // 0x2761c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276204u;
            goto label_276204;
        }
    }
    ctx->pc = 0x2761CCu;
    // 0x2761cc: 0x8e300898  lw          $s0, 0x898($s1)
    ctx->pc = 0x2761ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x2761d0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2761d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2761d4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2761D4u;
    {
        const bool branch_taken_0x2761d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2761d4) {
            ctx->pc = 0x2761D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2761D4u;
            // 0x2761d8: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2761DCu;
            goto label_2761dc;
        }
    }
    ctx->pc = 0x2761DCu;
label_2761dc:
    // 0x2761dc: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x2761dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2761e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2761E0u;
    {
        const bool branch_taken_0x2761e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2761E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761E0u;
        // 0x2761e4: 0x8f84ae90  lw          $a0, -0x5170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761e0) {
            ctx->pc = 0x276200u;
            goto label_276200;
        }
    }
    ctx->pc = 0x2761E8u;
    // 0x2761e8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2761E8u;
    {
        const bool branch_taken_0x2761e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2761e8) {
            ctx->pc = 0x2761ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2761E8u;
            // 0x2761ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276204u;
            goto label_276204;
        }
    }
    ctx->pc = 0x2761F0u;
    // 0x2761f0: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2761f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2761f4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2761F4u;
    {
        const bool branch_taken_0x2761f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2761f4) {
            ctx->pc = 0x2761F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2761F4u;
            // 0x2761f8: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2761FCu;
            goto label_2761fc;
        }
    }
    ctx->pc = 0x2761FCu;
label_2761fc:
    // 0x2761fc: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x2761fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
label_276200:
    // 0x276200: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x276200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_276204:
    // 0x276204: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x276204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x276208: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x276208u;
    {
        const bool branch_taken_0x276208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276208u;
        // 0x27620c: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276208) {
            ctx->pc = 0x2761A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2761a8;
        }
    }
    ctx->pc = 0x276210u;
label_276210:
    // 0x276210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x276210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276214: 0xc09d480  jal         func_275200
    ctx->pc = 0x276214u;
    SET_GPR_U32(ctx, 31, 0x27621Cu);
    ctx->pc = 0x276218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276214u;
    // 0x276218: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x276214u, 0x27621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27621Cu;
label_27621c:
    // 0x27621c: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x27621cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x276220: 0x18800024  blez        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x276220u;
    {
        const bool branch_taken_0x276220 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x276224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276220u;
        // 0x276224: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276220) {
            ctx->pc = 0x2762B4u;
            goto label_2762b4;
        }
    }
    ctx->pc = 0x276228u;
    // 0x276228: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x276228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27622c: 0x0  nop
    ctx->pc = 0x27622cu;
    // NOP
label_276230:
    // 0x276230: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x276230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x276234: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x276234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x276238: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276238u;
    {
        const bool branch_taken_0x276238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276238u;
        // 0x27623c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276238) {
            ctx->pc = 0x27624Cu;
            goto label_27624c;
        }
    }
    ctx->pc = 0x276240u;
    // 0x276240: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x276240u;
    {
        const bool branch_taken_0x276240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276240u;
        // 0x276244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276240) {
            ctx->pc = 0x27624Cu;
            goto label_27624c;
        }
    }
    ctx->pc = 0x276248u;
    // 0x276248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27624c:
    // 0x27624c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27624Cu;
    {
        const bool branch_taken_0x27624c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27624Cu;
        // 0x276250: 0x8f82aea0  lw          $v0, -0x5160($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27624c) {
            ctx->pc = 0x2762A4u;
            goto label_2762a4;
        }
    }
    ctx->pc = 0x276254u;
    // 0x276254: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x276254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x276258: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x276258u;
    {
        const bool branch_taken_0x276258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276258) {
            ctx->pc = 0x27625Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276258u;
            // 0x27625c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2762A8u;
            goto label_2762a8;
        }
    }
    ctx->pc = 0x276260u;
    // 0x276260: 0x8e300898  lw          $s0, 0x898($s1)
    ctx->pc = 0x276260u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x276264: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x276264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x276268: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x276268u;
    {
        const bool branch_taken_0x276268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276268) {
            ctx->pc = 0x27626Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276268u;
            // 0x27626c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2762A8u;
            goto label_2762a8;
        }
    }
    ctx->pc = 0x276270u;
    // 0x276270: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x276270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x276274: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x276274u;
    {
        const bool branch_taken_0x276274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276274) {
            ctx->pc = 0x276278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276274u;
            // 0x276278: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2762A8u;
            goto label_2762a8;
        }
    }
    ctx->pc = 0x27627Cu;
    // 0x27627c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x27627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x276280: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x276280u;
    {
        const bool branch_taken_0x276280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276280) {
            ctx->pc = 0x276284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276280u;
            // 0x276284: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2762A8u;
            goto label_2762a8;
        }
    }
    ctx->pc = 0x276288u;
    // 0x276288: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x276288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x27628c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27628cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x276290: 0x8f82aea0  lw          $v0, -0x5160($gp)
    ctx->pc = 0x276290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946464)));
    // 0x276294: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x276294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x276298: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276298u;
    {
        const bool branch_taken_0x276298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276298u;
        // 0x27629c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276298) {
            ctx->pc = 0x2762B8u;
            goto label_2762b8;
        }
    }
    ctx->pc = 0x2762A0u;
    // 0x2762a0: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x2762a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
label_2762a4:
    // 0x2762a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2762a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2762a8:
    // 0x2762a8: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x2762a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2762ac: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2762ACu;
    {
        const bool branch_taken_0x2762ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2762B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762ACu;
        // 0x2762b0: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762ac) {
            ctx->pc = 0x276230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276230;
        }
    }
    ctx->pc = 0x2762B4u;
label_2762b4:
    // 0x2762b4: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x2762b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2762b8:
    // 0x2762b8: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x2762b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2762bc: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x2762bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2762c0: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x2762c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2762c4: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2762c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2762c8: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x2762c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2762cc: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2762ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2762d0: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x2762d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2762d4: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2762d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2762d8: 0xc7b600f8  lwc1        $f22, 0xF8($sp)
    ctx->pc = 0x2762d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2762dc: 0xc7b500f0  lwc1        $f21, 0xF0($sp)
    ctx->pc = 0x2762dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2762e0: 0xc7b400e8  lwc1        $f20, 0xE8($sp)
    ctx->pc = 0x2762e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2762e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2762E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2762E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762E4u;
        // 0x2762e8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2762E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2762ECu;
    // 0x2762ec: 0x0  nop
    ctx->pc = 0x2762ecu;
    // NOP
    ctx->pc = 0x2762f0u;
}
