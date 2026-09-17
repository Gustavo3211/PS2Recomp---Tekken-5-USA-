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

// Function: sub_00231D68
// Address: 0x231d68 - 0x232c30
void sub_00231D68_0x231d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231D68_0x231d68");
#endif

    switch (ctx->pc) {
        case 0x231dc0u: goto label_231dc0;
        case 0x231de0u: goto label_231de0;
        case 0x231dfcu: goto label_231dfc;
        case 0x231e50u: goto label_231e50;
        case 0x231e84u: goto label_231e84;
        case 0x231e94u: goto label_231e94;
        case 0x231e9cu: goto label_231e9c;
        case 0x231eecu: goto label_231eec;
        case 0x231f44u: goto label_231f44;
        case 0x231f54u: goto label_231f54;
        case 0x231f68u: goto label_231f68;
        case 0x231f74u: goto label_231f74;
        case 0x232038u: goto label_232038;
        case 0x232048u: goto label_232048;
        case 0x232050u: goto label_232050;
        case 0x232060u: goto label_232060;
        case 0x23206cu: goto label_23206c;
        case 0x232074u: goto label_232074;
        case 0x2320f0u: goto label_2320f0;
        case 0x232100u: goto label_232100;
        case 0x232110u: goto label_232110;
        case 0x232124u: goto label_232124;
        case 0x232138u: goto label_232138;
        case 0x232380u: goto label_232380;
        case 0x2323bcu: goto label_2323bc;
        case 0x2323f8u: goto label_2323f8;
        case 0x232460u: goto label_232460;
        case 0x232484u: goto label_232484;
        case 0x2324a4u: goto label_2324a4;
        case 0x232510u: goto label_232510;
        case 0x232538u: goto label_232538;
        case 0x232580u: goto label_232580;
        case 0x2325d8u: goto label_2325d8;
        case 0x2325f0u: goto label_2325f0;
        case 0x232698u: goto label_232698;
        case 0x2326f0u: goto label_2326f0;
        case 0x2327d4u: goto label_2327d4;
        case 0x2327ecu: goto label_2327ec;
        case 0x23280cu: goto label_23280c;
        case 0x232a54u: goto label_232a54;
        case 0x232a64u: goto label_232a64;
        case 0x232a90u: goto label_232a90;
        case 0x232ab0u: goto label_232ab0;
        case 0x232b84u: goto label_232b84;
        case 0x232bb0u: goto label_232bb0;
        case 0x232bd0u: goto label_232bd0;
        default: break;
    }

    ctx->pc = 0x231d68u;

    // 0x231d68: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x231d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x231d6c: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x231d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x231d70: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x231d70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d74: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x231d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x231d78: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x231d78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d7c: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x231d7cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x231d80: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x231d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x231d84: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x231d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x231d88: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x231d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x231d8c: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x231d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x231d90: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x231d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x231d94: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x231d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
    // 0x231d98: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x231d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x231d9c: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x231d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x231da0: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x231da0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x231da4: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x231da4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x231da8: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x231da8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x231dac: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x231dacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x231db0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x231db0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x231db4: 0xc7998534  lwc1        $f25, -0x7ACC($gp)
    ctx->pc = 0x231db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x231db8: 0xc08c69a  jal         func_231A68
    ctx->pc = 0x231DB8u;
    SET_GPR_U32(ctx, 31, 0x231DC0u);
    ctx->pc = 0x231DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DB8u;
    // 0x231dbc: 0xafa60090  sw          $a2, 0x90($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A68u, 0x231DB8u, 0x231DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DC0u;
label_231dc0:
    // 0x231dc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231DC0u;
    {
        const bool branch_taken_0x231dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DC0u;
        // 0x231dc4: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231dc0) {
            ctx->pc = 0x231DD8u;
            goto label_231dd8;
        }
    }
    ctx->pc = 0x231DC8u;
    // 0x231dc8: 0x2443d350  addiu       $v1, $v0, -0x2CB0
    ctx->pc = 0x231dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955856));
    // 0x231dcc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x231dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x231dd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x231dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x231dd4: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x231dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_231dd8:
    // 0x231dd8: 0xc08c696  jal         func_231A58
    ctx->pc = 0x231DD8u;
    SET_GPR_U32(ctx, 31, 0x231DE0u);
    ctx->pc = 0x231A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A58u, 0x231DD8u, 0x231DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DE0u;
label_231de0:
    // 0x231de0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231DE0u;
    {
        const bool branch_taken_0x231de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DE0u;
        // 0x231de4: 0x3c030016  lui         $v1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231de0) {
            ctx->pc = 0x231DFCu;
            goto label_231dfc;
        }
    }
    ctx->pc = 0x231DE8u;
    // 0x231de8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231dec: 0x2462d350  addiu       $v0, $v1, -0x2CB0
    ctx->pc = 0x231decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
    // 0x231df0: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x231df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x231df4: 0xc08c68a  jal         func_231A28
    ctx->pc = 0x231DF4u;
    SET_GPR_U32(ctx, 31, 0x231DFCu);
    ctx->pc = 0x231DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DF4u;
    // 0x231df8: 0xac40003c  sw          $zero, 0x3C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A28u, 0x231DF4u, 0x231DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DFCu;
label_231dfc:
    // 0x231dfc: 0x86a30012  lh          $v1, 0x12($s5)
    ctx->pc = 0x231dfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x231e00: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x231e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x231e04: 0x86c20012  lh          $v0, 0x12($s6)
    ctx->pc = 0x231e04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x231e08: 0x2490dda0  addiu       $s0, $a0, -0x2260
    ctx->pc = 0x231e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x231e0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x231e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x231e10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x231e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x231e14: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x231e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x231e18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x231e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x231e1c: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x231e1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x231e20: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x231e20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x231e24: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x231e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x231e28: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x231e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x231e2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x231e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e30: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x231e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x231e34: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x231e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231e38: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x231e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231e3c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x231e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231e40: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x231e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x231e44: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x231e44u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x231e48: 0xc08c67a  jal         func_2319E8
    ctx->pc = 0x231E48u;
    SET_GPR_U32(ctx, 31, 0x231E50u);
    ctx->pc = 0x231E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E48u;
    // 0x231e4c: 0x460d0341  sub.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2319E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2319E8u, 0x231E48u, 0x231E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E50u;
label_231e50:
    // 0x231e50: 0x26030280  addiu       $v1, $s0, 0x280
    ctx->pc = 0x231e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x231e54: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x231e54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e58: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x231e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x231e5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x231E5Cu;
    {
        const bool branch_taken_0x231e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E5Cu;
        // 0x231e60: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e5c) {
            ctx->pc = 0x231E7Cu;
            goto label_231e7c;
        }
    }
    ctx->pc = 0x231E64u;
    // 0x231e64: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x231e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x231e68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231E68u;
    {
        const bool branch_taken_0x231e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231e68) {
            ctx->pc = 0x231E7Cu;
            goto label_231e7c;
        }
    }
    ctx->pc = 0x231E70u;
    // 0x231e70: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x231e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x231e74: 0x5040006a  beql        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x231E74u;
    {
        const bool branch_taken_0x231e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231e74) {
            ctx->pc = 0x231E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231E74u;
            // 0x231e78: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232020u;
            goto label_232020;
        }
    }
    ctx->pc = 0x231E7Cu;
label_231e7c:
    // 0x231e7c: 0xc08c1da  jal         func_230768
    ctx->pc = 0x231E7Cu;
    SET_GPR_U32(ctx, 31, 0x231E84u);
    ctx->pc = 0x231E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E7Cu;
    // 0x231e80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230768u, 0x231E7Cu, 0x231E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E84u;
label_231e84:
    // 0x231e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x231e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e88: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x231e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x231e8c: 0xc08c1fc  jal         func_2307F0
    ctx->pc = 0x231E8Cu;
    SET_GPR_U32(ctx, 31, 0x231E94u);
    ctx->pc = 0x231E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E8Cu;
    // 0x231e90: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2307F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307F0u, 0x231E8Cu, 0x231E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E94u;
label_231e94:
    // 0x231e94: 0xc08c218  jal         func_230860
    ctx->pc = 0x231E94u;
    SET_GPR_U32(ctx, 31, 0x231E9Cu);
    ctx->pc = 0x231E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E94u;
    // 0x231e98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230860u, 0x231E94u, 0x231E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E9Cu;
label_231e9c:
    // 0x231e9c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x231e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x231ea0: 0x2442e020  addiu       $v0, $v0, -0x1FE0
    ctx->pc = 0x231ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959136));
    // 0x231ea4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x231ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x231ea8: 0x8c46ff20  lw          $a2, -0xE0($v0)
    ctx->pc = 0x231ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3ADF40u));
    // 0x231eac: 0x2444fd80  addiu       $a0, $v0, -0x280
    ctx->pc = 0x231eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966656));
    // 0x231eb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x231eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3AE020u));
    // 0x231eb4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x231eb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231eb8: 0x8c47fe40  lw          $a3, -0x1C0($v0)
    ctx->pc = 0x231eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3ADE60u));
    // 0x231ebc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x231ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ec0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x231ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x231ec4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x231ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ec8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x231ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x231ecc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x231eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x231ed0: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x231ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x231ed4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x231ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231ed8: 0x143100a  movz        $v0, $t2, $v1
    ctx->pc = 0x231ed8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x231edc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x231edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ee0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x231ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231ee4: 0xc08dc2e  jal         func_2370B8
    ctx->pc = 0x231EE4u;
    SET_GPR_U32(ctx, 31, 0x231EECu);
    ctx->pc = 0x231EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231EE4u;
    // 0x231ee8: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2370B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2370B8u, 0x231EE4u, 0x231EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231EECu;
label_231eec:
    // 0x231eec: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x231eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x231ef0: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x231ef0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231ef4: 0xda1f0000  lqc2        $vf31, 0x0($s0)
    ctx->pc = 0x231ef4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231ef8: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x231ef8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x231efc: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x231efcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x231f00: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x231f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x231f04: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x231f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x231f08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x231f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x231f0c: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x231f0cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231f10: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x231f10u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231f14: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x231f14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x231f18: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x231f18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x231f1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231f20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231f24: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x231f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x231f28: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x231f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x231f2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x231f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x231f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f34: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x231f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x231f38: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x231f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x231f3c: 0xc0847da  jal         func_211F68
    ctx->pc = 0x231F3Cu;
    SET_GPR_U32(ctx, 31, 0x231F44u);
    ctx->pc = 0x231F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F3Cu;
    // 0x231f40: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x231F3Cu, 0x231F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F44u;
label_231f44:
    // 0x231f44: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x231f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x231f48: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x231f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f4c: 0xc0847da  jal         func_211F68
    ctx->pc = 0x231F4Cu;
    SET_GPR_U32(ctx, 31, 0x231F54u);
    ctx->pc = 0x231F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F4Cu;
    // 0x231f50: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x231F4Cu, 0x231F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F54u;
label_231f54:
    // 0x231f54: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x231f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x231f58: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x231f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x231f5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x231f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f60: 0xc084814  jal         func_212050
    ctx->pc = 0x231F60u;
    SET_GPR_U32(ctx, 31, 0x231F68u);
    ctx->pc = 0x231F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F60u;
    // 0x231f64: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x231F60u, 0x231F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F68u;
label_231f68:
    // 0x231f68: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x231f68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x231f6c: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x231F6Cu;
    SET_GPR_U32(ctx, 31, 0x231F74u);
    ctx->pc = 0x231F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F6Cu;
    // 0x231f70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x231F6Cu, 0x231F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F74u;
label_231f74:
    // 0x231f74: 0xc7818538  lwc1        $f1, -0x7AC8($gp)
    ctx->pc = 0x231f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231f78: 0x92a201bf  lbu         $v0, 0x1BF($s5)
    ctx->pc = 0x231f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 447)));
    // 0x231f7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x231f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x231f80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x231f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x231f84: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x231f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x231f88: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x231F88u;
    {
        const bool branch_taken_0x231f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231f88) {
            ctx->pc = 0x231FD0u;
            goto label_231fd0;
        }
    }
    ctx->pc = 0x231F90u;
    // 0x231f90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231f94: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x231f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231f98: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x231F98u;
    {
        const bool branch_taken_0x231f98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231f98) {
            ctx->pc = 0x231FB0u;
            goto label_231fb0;
        }
    }
    ctx->pc = 0x231FA0u;
    // 0x231fa0: 0xc780853c  lwc1        $f0, -0x7AC4($gp)
    ctx->pc = 0x231fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231fa4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x231fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231fa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x231FA8u;
    {
        const bool branch_taken_0x231fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231fa8) {
            ctx->pc = 0x231FB8u;
            goto label_231fb8;
        }
    }
    ctx->pc = 0x231FB0u;
label_231fb0:
    // 0x231fb0: 0xc7808540  lwc1        $f0, -0x7AC0($gp)
    ctx->pc = 0x231fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231fb4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x231fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_231fb8:
    // 0x231fb8: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
    ctx->pc = 0x231FB8u;
    {
        const bool branch_taken_0x231fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231fb8) {
            ctx->pc = 0x231FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231FB8u;
            // 0x231fbc: 0x241311c7  addiu       $s3, $zero, 0x11C7 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4551));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232014u;
            goto label_232014;
        }
    }
    ctx->pc = 0x231FC0u;
    // 0x231fc0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x231fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x231fc4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x231FC4u;
    {
        const bool branch_taken_0x231fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FC4u;
        // 0x231fc8: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fc4) {
            ctx->pc = 0x232014u;
            goto label_232014;
        }
    }
    ctx->pc = 0x231FCCu;
    // 0x231fcc: 0x0  nop
    ctx->pc = 0x231fccu;
    // NOP
label_231fd0:
    // 0x231fd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231fd4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x231fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231fd8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x231FD8u;
    {
        const bool branch_taken_0x231fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231fd8) {
            ctx->pc = 0x232000u;
            goto label_232000;
        }
    }
    ctx->pc = 0x231FE0u;
    // 0x231fe0: 0xc7808544  lwc1        $f0, -0x7ABC($gp)
    ctx->pc = 0x231fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231fe4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x231fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231fe8: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x231FE8u;
    {
        const bool branch_taken_0x231fe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231fe8) {
            ctx->pc = 0x231FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231FE8u;
            // 0x231fec: 0x341391c7  ori         $s3, $zero, 0x91C7 (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37319);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232014u;
            goto label_232014;
        }
    }
    ctx->pc = 0x231FF0u;
    // 0x231ff0: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x231ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x231ff4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x231FF4u;
    {
        const bool branch_taken_0x231ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FF4u;
        // 0x231ff8: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ff4) {
            ctx->pc = 0x232014u;
            goto label_232014;
        }
    }
    ctx->pc = 0x231FFCu;
    // 0x231ffc: 0x0  nop
    ctx->pc = 0x231ffcu;
    // NOP
label_232000:
    // 0x232000: 0xc7808548  lwc1        $f0, -0x7AB8($gp)
    ctx->pc = 0x232000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232004: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x232004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232008: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x232008u;
    {
        const bool branch_taken_0x232008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232008u;
        // 0x23200c: 0x24136e39  addiu       $s3, $zero, 0x6E39 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28217));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232008) {
            ctx->pc = 0x232014u;
            goto label_232014;
        }
    }
    ctx->pc = 0x232010u;
    // 0x232010: 0x24734000  addiu       $s3, $v1, 0x4000
    ctx->pc = 0x232010u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
label_232014:
    // 0x232014: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x232014u;
    {
        const bool branch_taken_0x232014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232014u;
        // 0x232018: 0x2779821  addu        $s3, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232014) {
            ctx->pc = 0x232340u;
            goto label_232340;
        }
    }
    ctx->pc = 0x23201Cu;
    // 0x23201c: 0x0  nop
    ctx->pc = 0x23201cu;
    // NOP
label_232020:
    // 0x232020: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x232020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x232024: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x232024u;
    {
        const bool branch_taken_0x232024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x232028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232024u;
        // 0x232028: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232024) {
            ctx->pc = 0x232058u;
            goto label_232058;
        }
    }
    ctx->pc = 0x23202Cu;
    // 0x23202c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23202cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232030: 0xc08c1da  jal         func_230768
    ctx->pc = 0x232030u;
    SET_GPR_U32(ctx, 31, 0x232038u);
    ctx->pc = 0x232034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232030u;
    // 0x232034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230768u, 0x232030u, 0x232038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232038u;
label_232038:
    // 0x232038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23203c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23203cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x232040: 0xc08c1fc  jal         func_2307F0
    ctx->pc = 0x232040u;
    SET_GPR_U32(ctx, 31, 0x232048u);
    ctx->pc = 0x232044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232040u;
    // 0x232044: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2307F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307F0u, 0x232040u, 0x232048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232048u;
label_232048:
    // 0x232048: 0xc08c218  jal         func_230860
    ctx->pc = 0x232048u;
    SET_GPR_U32(ctx, 31, 0x232050u);
    ctx->pc = 0x23204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232048u;
    // 0x23204c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230860u, 0x232048u, 0x232050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232050u;
label_232050:
    // 0x232050: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x232050u;
    {
        const bool branch_taken_0x232050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232050u;
        // 0x232054: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232050) {
            ctx->pc = 0x232078u;
            goto label_232078;
        }
    }
    ctx->pc = 0x232058u;
label_232058:
    // 0x232058: 0xc08c6a6  jal         func_231A98
    ctx->pc = 0x232058u;
    SET_GPR_U32(ctx, 31, 0x232060u);
    ctx->pc = 0x23205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232058u;
    // 0x23205c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A98u, 0x232058u, 0x232060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232060u;
label_232060:
    // 0x232060: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x232060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x232064: 0xc08c6ac  jal         func_231AB0
    ctx->pc = 0x232064u;
    SET_GPR_U32(ctx, 31, 0x23206Cu);
    ctx->pc = 0x232068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232064u;
    // 0x232068: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AB0u, 0x232064u, 0x23206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23206Cu;
label_23206c:
    // 0x23206c: 0xc08c6b2  jal         func_231AC8
    ctx->pc = 0x23206Cu;
    SET_GPR_U32(ctx, 31, 0x232074u);
    ctx->pc = 0x231AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AC8u, 0x23206Cu, 0x232074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232074u;
label_232074:
    // 0x232074: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x232074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_232078:
    // 0x232078: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x232078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23207c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23207cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232080: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x232080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x232084: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x232084u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232088: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x232088u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23208c: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x23208cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x232090: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x232090u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x232094: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x232094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x232098: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x232098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23209c: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x23209cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2320a0: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x2320a0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2320a4: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2320a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2320a8: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2320a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2320ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2320acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2320b0: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2320b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2320b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2320b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320b8: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2320b8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2320bc: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x2320bcu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2320c0: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2320c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2320c4: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2320c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2320c8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2320c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2320cc: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2320ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2320d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2320d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2320d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320d8: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x2320d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x2320dc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2320dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x2320e0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2320e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x2320e4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2320e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2320e8: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2320E8u;
    SET_GPR_U32(ctx, 31, 0x2320F0u);
    ctx->pc = 0x2320ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2320E8u;
    // 0x2320ec: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2320E8u, 0x2320F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320F0u;
label_2320f0:
    // 0x2320f0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2320f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2320f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2320f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320f8: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2320F8u;
    SET_GPR_U32(ctx, 31, 0x232100u);
    ctx->pc = 0x2320FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2320F8u;
    // 0x2320fc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2320F8u, 0x232100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232100u;
label_232100:
    // 0x232100: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x232100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x232104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232108: 0xc0847da  jal         func_211F68
    ctx->pc = 0x232108u;
    SET_GPR_U32(ctx, 31, 0x232110u);
    ctx->pc = 0x23210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232108u;
    // 0x23210c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x232108u, 0x232110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232110u;
label_232110:
    // 0x232110: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x232110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x232114: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x232114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x232118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x232118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23211c: 0xc084814  jal         func_212050
    ctx->pc = 0x23211Cu;
    SET_GPR_U32(ctx, 31, 0x232124u);
    ctx->pc = 0x232120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23211Cu;
    // 0x232120: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x23211Cu, 0x232124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232124u;
label_232124:
    // 0x232124: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x232124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232128: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x232128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23212c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x23212cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x232130: 0xc084814  jal         func_212050
    ctx->pc = 0x232130u;
    SET_GPR_U32(ctx, 31, 0x232138u);
    ctx->pc = 0x232134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232130u;
    // 0x232134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x232130u, 0x232138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232138u;
label_232138:
    // 0x232138: 0xc781854c  lwc1        $f1, -0x7AB4($gp)
    ctx->pc = 0x232138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23213c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x23213cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232140: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x232140u;
    {
        const bool branch_taken_0x232140 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x232144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232140u;
        // 0x232144: 0x3c030016  lui         $v1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232140) {
            ctx->pc = 0x232188u;
            goto label_232188;
        }
    }
    ctx->pc = 0x232148u;
    // 0x232148: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23214c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x23214Cu;
    {
        const bool branch_taken_0x23214c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x232150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23214Cu;
        // 0x232150: 0x2462d350  addiu       $v0, $v1, -0x2CB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23214c) {
            ctx->pc = 0x23218Cu;
            goto label_23218c;
        }
    }
    ctx->pc = 0x232154u;
    // 0x232154: 0x96a20166  lhu         $v0, 0x166($s5)
    ctx->pc = 0x232154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 358)));
    // 0x232158: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x232158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x23215c: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23215Cu;
    {
        const bool branch_taken_0x23215c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23215c) {
            ctx->pc = 0x232160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23215Cu;
            // 0x232160: 0x3c030016  lui         $v1, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232188u;
            goto label_232188;
        }
    }
    ctx->pc = 0x232164u;
    // 0x232164: 0x96c20166  lhu         $v0, 0x166($s6)
    ctx->pc = 0x232164u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 358)));
    // 0x232168: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x232168u;
    {
        const bool branch_taken_0x232168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232168u;
        // 0x23216c: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232168) {
            ctx->pc = 0x232184u;
            goto label_232184;
        }
    }
    ctx->pc = 0x232170u;
    // 0x232170: 0x2483d350  addiu       $v1, $a0, -0x2CB0
    ctx->pc = 0x232170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x232174: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x232174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x232178: 0x2c42003c  sltiu       $v0, $v0, 0x3C
    ctx->pc = 0x232178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x23217c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x23217Cu;
    {
        const bool branch_taken_0x23217c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23217c) {
            ctx->pc = 0x232180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23217Cu;
            // 0x232180: 0x92a201bf  lbu         $v0, 0x1BF($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 447)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2321E0u;
            goto label_2321e0;
        }
    }
    ctx->pc = 0x232184u;
label_232184:
    // 0x232184: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x232184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_232188:
    // 0x232188: 0x2462d350  addiu       $v0, $v1, -0x2CB0
    ctx->pc = 0x232188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
label_23218c:
    // 0x23218c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x23218cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x232190: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x232190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x232194: 0x2e42023  subu        $a0, $s7, $a0
    ctx->pc = 0x232194u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x232198: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x232198u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23219c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23219Cu;
    {
        const bool branch_taken_0x23219c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2321A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23219Cu;
        // 0x2321a0: 0x28828000  slti        $v0, $a0, -0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23219c) {
            ctx->pc = 0x2321B0u;
            goto label_2321b0;
        }
    }
    ctx->pc = 0x2321A4u;
    // 0x2321a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2321a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2321a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2321A8u;
    {
        const bool branch_taken_0x2321a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2321ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321A8u;
        // 0x2321ac: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321a8) {
            ctx->pc = 0x2321C0u;
            goto label_2321c0;
        }
    }
    ctx->pc = 0x2321B0u;
label_2321b0:
    // 0x2321b0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2321b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2321b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2321b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2321b8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2321b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2321bc: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2321bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2321c0:
    // 0x2321c0: 0x24823fff  addiu       $v0, $a0, 0x3FFF
    ctx->pc = 0x2321c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16383));
    // 0x2321c4: 0x2c427fff  sltiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x2321c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32767) ? 1 : 0);
    // 0x2321c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2321C8u;
    {
        const bool branch_taken_0x2321c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2321CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321C8u;
        // 0x2321cc: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321c8) {
            ctx->pc = 0x2321F8u;
            goto label_2321f8;
        }
    }
    ctx->pc = 0x2321D0u;
    // 0x2321d0: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x2321d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2321d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2321D4u;
    {
        const bool branch_taken_0x2321d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2321D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321D4u;
        // 0x2321d8: 0x37b821  addu        $s7, $at, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321d4) {
            ctx->pc = 0x2321F8u;
            goto label_2321f8;
        }
    }
    ctx->pc = 0x2321DCu;
    // 0x2321dc: 0x0  nop
    ctx->pc = 0x2321dcu;
    // NOP
label_2321e0:
    // 0x2321e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2321e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2321e4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2321e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2321e8: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x2321e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2321ec: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2321ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2321f0: 0x82b80a  movz        $s7, $a0, $v0
    ctx->pc = 0x2321f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 4));
    // 0x2321f4: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x2321f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
label_2321f8:
    // 0x2321f8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2321f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2321fc: 0x2483d350  addiu       $v1, $a0, -0x2CB0
    ctx->pc = 0x2321fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x232200: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x232200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x232204: 0x2c42003c  sltiu       $v0, $v0, 0x3C
    ctx->pc = 0x232204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x232208: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x232208u;
    {
        const bool branch_taken_0x232208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232208u;
        // 0x23220c: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232208) {
            ctx->pc = 0x232260u;
            goto label_232260;
        }
    }
    ctx->pc = 0x232210u;
    // 0x232210: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x232210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x232214: 0x3c014448  lui         $at, 0x4448
    ctx->pc = 0x232214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17480 << 16));
    // 0x232218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23221c: 0x2462dda0  addiu       $v0, $v1, -0x2260
    ctx->pc = 0x23221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x232220: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x232220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x232224: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x232224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x232228: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x232228u;
    { uint32_t bits = FAST_READ32(0x3ADDDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23222c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23222cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232230: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x232230u;
    {
        const bool branch_taken_0x232230 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x232234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232230u;
        // 0x232234: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232230) {
            ctx->pc = 0x232264u;
            goto label_232264;
        }
    }
    ctx->pc = 0x232238u;
    // 0x232238: 0x0  nop
    ctx->pc = 0x232238u;
    // NOP
    // 0x23223c: 0x0  nop
    ctx->pc = 0x23223cu;
    // NOP
    // 0x232240: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x232240u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x232244: 0xc7818550  lwc1        $f1, -0x7AB0($gp)
    ctx->pc = 0x232244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x232248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23224c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23224cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x232250: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x232250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x232254: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x232254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x232258: 0x460200c0  add.s       $f3, $f0, $f2
    ctx->pc = 0x232258u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x23225c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x23225cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
label_232260:
    // 0x232260: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x232260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_232264:
    // 0x232264: 0x2482d350  addiu       $v0, $a0, -0x2CB0
    ctx->pc = 0x232264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x232268: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x232268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x23226c: 0x2e42823  subu        $a1, $s7, $a0
    ctx->pc = 0x23226cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x232270: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x232270u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x232274: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x232274u;
    {
        const bool branch_taken_0x232274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232274u;
        // 0x232278: 0x28a28000  slti        $v0, $a1, -0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232274) {
            ctx->pc = 0x232288u;
            goto label_232288;
        }
    }
    ctx->pc = 0x23227Cu;
    // 0x23227c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23227cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x232280: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x232280u;
    {
        const bool branch_taken_0x232280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232280u;
        // 0x232284: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232280) {
            ctx->pc = 0x232298u;
            goto label_232298;
        }
    }
    ctx->pc = 0x232288u;
label_232288:
    // 0x232288: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x232288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x23228c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x232290: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x232290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x232294: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x232294u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_232298:
    // 0x232298: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x232298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x23229c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23229cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2322a0: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x2322a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x2322a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2322a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2322a8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2322a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2322ac: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2322acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2322b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2322b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2322b4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2322b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2322b8: 0x0  nop
    ctx->pc = 0x2322b8u;
    // NOP
    // 0x2322bc: 0x0  nop
    ctx->pc = 0x2322bcu;
    // NOP
    // 0x2322c0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2322c0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2322c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2322c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2322c8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2322c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2322cc: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2322ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2322d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2322D0u;
    {
        const bool branch_taken_0x2322d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2322D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322D0u;
        // 0x2322d4: 0x2e49823  subu        $s3, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322d0) {
            ctx->pc = 0x2322F4u;
            goto label_2322f4;
        }
    }
    ctx->pc = 0x2322D8u;
    // 0x2322d8: 0x41023  negu        $v0, $a0
    ctx->pc = 0x2322d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2322dc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2322dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2322e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2322E0u;
    {
        const bool branch_taken_0x2322e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2322E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322E0u;
        // 0x2322e4: 0x2e49821  addu        $s3, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322e0) {
            ctx->pc = 0x2322F4u;
            goto label_2322f4;
        }
    }
    ctx->pc = 0x2322E8u;
    // 0x2322e8: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2322e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2322ec: 0x2462d350  addiu       $v0, $v1, -0x2CB0
    ctx->pc = 0x2322ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
    // 0x2322f0: 0x8c53002c  lw          $s3, 0x2C($v0)
    ctx->pc = 0x2322f0u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x15D37Cu));
label_2322f4:
    // 0x2322f4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2322f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2322f8: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x2322f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x2322fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2322fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232300: 0x2482dda0  addiu       $v0, $a0, -0x2260
    ctx->pc = 0x232300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x232304: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x232304u;
    { uint32_t bits = FAST_READ32(0x3ADDDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232308: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x232308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23230c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x23230Cu;
    {
        const bool branch_taken_0x23230c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x232310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23230Cu;
        // 0x232310: 0x3c030016  lui         $v1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23230c) {
            ctx->pc = 0x232334u;
            goto label_232334;
        }
    }
    ctx->pc = 0x232314u;
    // 0x232314: 0x96a20166  lhu         $v0, 0x166($s5)
    ctx->pc = 0x232314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 358)));
    // 0x232318: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x232318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x23231c: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23231Cu;
    {
        const bool branch_taken_0x23231c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23231c) {
            ctx->pc = 0x232320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23231Cu;
            // 0x232320: 0x3c030016  lui         $v1, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232334u;
            goto label_232334;
        }
    }
    ctx->pc = 0x232324u;
    // 0x232324: 0x96c20166  lhu         $v0, 0x166($s6)
    ctx->pc = 0x232324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 358)));
    // 0x232328: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x232328u;
    {
        const bool branch_taken_0x232328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232328u;
        // 0x23232c: 0x3273ffff  andi        $s3, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232328) {
            ctx->pc = 0x232340u;
            goto label_232340;
        }
    }
    ctx->pc = 0x232330u;
    // 0x232330: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x232330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_232334:
    // 0x232334: 0x2462d350  addiu       $v0, $v1, -0x2CB0
    ctx->pc = 0x232334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
    // 0x232338: 0x8c53002c  lw          $s3, 0x2C($v0)
    ctx->pc = 0x232338u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x23233c: 0x3273ffff  andi        $s3, $s3, 0xFFFF
    ctx->pc = 0x23233cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_232340:
    // 0x232340: 0x3270ffff  andi        $s0, $s3, 0xFFFF
    ctx->pc = 0x232340u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x232344: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x232344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x232348: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x232348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23234c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23234Cu;
    {
        const bool branch_taken_0x23234c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23234Cu;
        // 0x232350: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23234c) {
            ctx->pc = 0x232368u;
            goto label_232368;
        }
    }
    ctx->pc = 0x232354u;
    // 0x232354: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x232354u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232358: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x232358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23235c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23235Cu;
    {
        const bool branch_taken_0x23235c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23235Cu;
        // 0x232360: 0xc7808554  lwc1        $f0, -0x7AAC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23235c) {
            ctx->pc = 0x232378u;
            goto label_232378;
        }
    }
    ctx->pc = 0x232364u;
    // 0x232364: 0x0  nop
    ctx->pc = 0x232364u;
    // NOP
label_232368:
    // 0x232368: 0xc7818558  lwc1        $f1, -0x7AA8($gp)
    ctx->pc = 0x232368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23236c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x23236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x232370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232374: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x232374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_232378:
    // 0x232378: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x232378u;
    SET_GPR_U32(ctx, 31, 0x232380u);
    ctx->pc = 0x23237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232378u;
    // 0x23237c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x232378u, 0x232380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232380u;
label_232380:
    // 0x232380: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x232380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x232384: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x232384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x232388: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232388u;
    {
        const bool branch_taken_0x232388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232388u;
        // 0x23238c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232388) {
            ctx->pc = 0x2323A0u;
            goto label_2323a0;
        }
    }
    ctx->pc = 0x232390u;
    // 0x232390: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x232390u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232394: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x232394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x232398: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x232398u;
    {
        const bool branch_taken_0x232398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232398u;
        // 0x23239c: 0xc780855c  lwc1        $f0, -0x7AA4($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x232398) {
            ctx->pc = 0x2323B4u;
            goto label_2323b4;
        }
    }
    ctx->pc = 0x2323A0u;
label_2323a0:
    // 0x2323a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2323a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2323a4: 0xc7818560  lwc1        $f1, -0x7AA0($gp)
    ctx->pc = 0x2323a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2323a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2323a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2323ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2323acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2323b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2323b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2323b4:
    // 0x2323b4: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x2323B4u;
    SET_GPR_U32(ctx, 31, 0x2323BCu);
    ctx->pc = 0x2323B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2323B4u;
    // 0x2323b8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x2323B4u, 0x2323BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323BCu;
label_2323bc:
    // 0x2323bc: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2323bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2323c0: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2323C0u;
    {
        const bool branch_taken_0x2323c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2323C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323C0u;
        // 0x2323c4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323c0) {
            ctx->pc = 0x2324E0u;
            goto label_2324e0;
        }
    }
    ctx->pc = 0x2323C8u;
    // 0x2323c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2323c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2323cc: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2323ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2323d0: 0x2450dda0  addiu       $s0, $v0, -0x2260
    ctx->pc = 0x2323d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958496));
    // 0x2323d4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2323d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2323d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323dc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2323dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323e0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2323e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2323e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2323e8: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x2323e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x2323ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2323ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2323f0: 0xc08dc2e  jal         func_2370B8
    ctx->pc = 0x2323F0u;
    SET_GPR_U32(ctx, 31, 0x2323F8u);
    ctx->pc = 0x2323F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2323F0u;
    // 0x2323f4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2370B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2370B8u, 0x2323F0u, 0x2323F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323F8u;
label_2323f8:
    // 0x2323f8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2323f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2323fc: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x2323fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x232400: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232404: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x232404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232408: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x232408u;
    {
        const bool branch_taken_0x232408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232408u;
        // 0x23240c: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232408) {
            ctx->pc = 0x232420u;
            goto label_232420;
        }
    }
    ctx->pc = 0x232410u;
    // 0x232410: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x232410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x232414: 0xc7818564  lwc1        $f1, -0x7A9C($gp)
    ctx->pc = 0x232414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232418: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x232418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23241c: 0x46150540  add.s       $f21, $f0, $f21
    ctx->pc = 0x23241cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_232420:
    // 0x232420: 0x4614a8c2  mul.s       $f3, $f21, $f20
    ctx->pc = 0x232420u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x232424: 0x4616a882  mul.s       $f2, $f21, $f22
    ctx->pc = 0x232424u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x232428: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x232428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23242c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x23242cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x232430: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x232430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x232434: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x232434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23243c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x23243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232440: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x232440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232444: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x232444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23244c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x23244cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x232450: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x232450u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232454: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x232454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x232458: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x232458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23245c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x23245cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_232460:
    // 0x232460: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x232460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232464: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x232464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232468: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x232468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23246c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x23246cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232470: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x232470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232474: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x232478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23247c: 0xc08dbea  jal         func_236FA8
    ctx->pc = 0x23247Cu;
    SET_GPR_U32(ctx, 31, 0x232484u);
    ctx->pc = 0x232480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23247Cu;
    // 0x232480: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FA8u, 0x23247Cu, 0x232484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232484u;
label_232484:
    // 0x232484: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x232484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232488: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x232488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x23248c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23248cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x232490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232494: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x232494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232498: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x232498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23249c: 0xc08dc4a  jal         func_237128
    ctx->pc = 0x23249Cu;
    SET_GPR_U32(ctx, 31, 0x2324A4u);
    ctx->pc = 0x2324A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23249Cu;
    // 0x2324a0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237128u, 0x23249Cu, 0x2324A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2324A4u;
label_2324a4:
    // 0x2324a4: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2324a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2324a8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2324a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2324ac: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2324acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2324b0: 0x4616a8c2  mul.s       $f3, $f21, $f22
    ctx->pc = 0x2324b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x2324b4: 0x4614a882  mul.s       $f2, $f21, $f20
    ctx->pc = 0x2324b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x2324b8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2324b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2324bc: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2324bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2324c0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2324c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2324c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2324c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2324c8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2324c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2324cc: 0x165effe4  bne         $s2, $fp, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2324CCu;
    {
        const bool branch_taken_0x2324cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 30));
        ctx->pc = 0x2324D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324CCu;
        // 0x2324d0: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324cc) {
            ctx->pc = 0x232460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232460;
        }
    }
    ctx->pc = 0x2324D4u;
    // 0x2324d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2324D4u;
    {
        const bool branch_taken_0x2324d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2324D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324D4u;
        // 0x2324d8: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324d4) {
            ctx->pc = 0x232568u;
            goto label_232568;
        }
    }
    ctx->pc = 0x2324DCu;
    // 0x2324dc: 0x0  nop
    ctx->pc = 0x2324dcu;
    // NOP
label_2324e0:
    // 0x2324e0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2324e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2324e4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2324e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2324e8: 0x2470dda0  addiu       $s0, $v1, -0x2260
    ctx->pc = 0x2324e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x2324ec: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2324ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2324f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2324f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2324f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324f8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2324f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324fc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2324fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232500: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x232500u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232504: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x232504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232508: 0xc08dbea  jal         func_236FA8
    ctx->pc = 0x232508u;
    SET_GPR_U32(ctx, 31, 0x232510u);
    ctx->pc = 0x23250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232508u;
    // 0x23250c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FA8u, 0x232508u, 0x232510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232510u;
label_232510:
    // 0x232510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232514: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x232514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x232518: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x232518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23251c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x23251cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x232520: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x232520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232524: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232528: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x232528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23252c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x23252cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232530: 0xc08dc4a  jal         func_237128
    ctx->pc = 0x232530u;
    SET_GPR_U32(ctx, 31, 0x232538u);
    ctx->pc = 0x232534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232530u;
    // 0x232534: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237128u, 0x232530u, 0x232538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232538u;
label_232538:
    // 0x232538: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x232538u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23253c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x23253cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x232540: 0x4616a8c2  mul.s       $f3, $f21, $f22
    ctx->pc = 0x232540u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x232544: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x232544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x232548: 0x4614a882  mul.s       $f2, $f21, $f20
    ctx->pc = 0x232548u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x23254c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x23254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232550: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x232550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232554: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x232554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x232558: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x232558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x23255c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x23255cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x232560: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x232560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x232564: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x232564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232568:
    // 0x232568: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x232568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23256c: 0xc781a548  lwc1        $f1, -0x5AB8($gp)
    ctx->pc = 0x23256cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294944072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x232570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232574: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x232574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232578: 0xc08cbde  jal         func_232F78
    ctx->pc = 0x232578u;
    SET_GPR_U32(ctx, 31, 0x232580u);
    ctx->pc = 0x23257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232578u;
    // 0x23257c: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x232F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232F78u, 0x232578u, 0x232580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232580u;
label_232580:
    // 0x232580: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x232580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x232584: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x232584u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x232588: 0xc4402dbc  lwc1        $f0, 0x2DBC($v0)
    ctx->pc = 0x232588u;
    { uint32_t bits = FAST_READ32(0x152DBCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23258c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x23258cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232590: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x232590u;
    {
        const bool branch_taken_0x232590 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x232594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232590u;
        // 0x232594: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232590) {
            ctx->pc = 0x2325A8u;
            goto label_2325a8;
        }
    }
    ctx->pc = 0x232598u;
    // 0x232598: 0xc4402dc0  lwc1        $f0, 0x2DC0($v0)
    ctx->pc = 0x232598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23259c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x23259cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2325a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2325A0u;
    {
        const bool branch_taken_0x2325a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2325A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325A0u;
        // 0x2325a4: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325a0) {
            ctx->pc = 0x2325B8u;
            goto label_2325b8;
        }
    }
    ctx->pc = 0x2325A8u;
label_2325a8:
    // 0x2325a8: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2325a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2325ac: 0x2462d350  addiu       $v0, $v1, -0x2CB0
    ctx->pc = 0x2325acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
    // 0x2325b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2325B0u;
    {
        const bool branch_taken_0x2325b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2325B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325B0u;
        // 0x2325b4: 0xc4540044  lwc1        $f20, 0x44($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325b0) {
            ctx->pc = 0x2325C0u;
            goto label_2325c0;
        }
    }
    ctx->pc = 0x2325B8u;
label_2325b8:
    // 0x2325b8: 0x2482d350  addiu       $v0, $a0, -0x2CB0
    ctx->pc = 0x2325b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x2325bc: 0xe4540044  swc1        $f20, 0x44($v0)
    ctx->pc = 0x2325bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_2325c0:
    // 0x2325c0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2325c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2325c4: 0xc780a544  lwc1        $f0, -0x5ABC($gp)
    ctx->pc = 0x2325c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294944068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2325c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2325c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2325ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2325d0: 0xc08b672  jal         func_22D9C8
    ctx->pc = 0x2325D0u;
    SET_GPR_U32(ctx, 31, 0x2325D8u);
    ctx->pc = 0x2325D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325D0u;
    // 0x2325d4: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D9C8u, 0x2325D0u, 0x2325D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325D8u;
label_2325d8:
    // 0x2325d8: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x2325d8u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
    // 0x2325dc: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2325dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2325e0: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x2325e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2325e4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2325e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2325e8: 0xc0b7440  jal         func_2DD100
    ctx->pc = 0x2325E8u;
    SET_GPR_U32(ctx, 31, 0x2325F0u);
    ctx->pc = 0x2325ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325E8u;
    // 0x2325ec: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD100u, 0x2325E8u, 0x2325F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325F0u;
label_2325f0:
    // 0x2325f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2325f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325f4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2325f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2325f8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2325f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2325fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2325FCu;
    {
        const bool branch_taken_0x2325fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325FCu;
        // 0x232600: 0x28a28000  slti        $v0, $a1, -0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325fc) {
            ctx->pc = 0x232610u;
            goto label_232610;
        }
    }
    ctx->pc = 0x232604u;
    // 0x232604: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x232604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x232608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x232608u;
    {
        const bool branch_taken_0x232608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232608u;
        // 0x23260c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232608) {
            ctx->pc = 0x232620u;
            goto label_232620;
        }
    }
    ctx->pc = 0x232610u;
label_232610:
    // 0x232610: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x232610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x232614: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x232614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x232618: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x232618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x23261c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x23261cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_232620:
    // 0x232620: 0x52823  negu        $a1, $a1
    ctx->pc = 0x232620u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x232624: 0x24030aaa  addiu       $v1, $zero, 0xAAA
    ctx->pc = 0x232624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2730));
    // 0x232628: 0x28a20aab  slti        $v0, $a1, 0xAAB
    ctx->pc = 0x232628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2731) ? 1 : 0);
    // 0x23262c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x23262cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x232630: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x232630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x232634: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x232634u;
    {
        const bool branch_taken_0x232634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232634u;
        // 0x232638: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232634) {
            ctx->pc = 0x232648u;
            goto label_232648;
        }
    }
    ctx->pc = 0x23263Cu;
    // 0x23263c: 0x2482d350  addiu       $v0, $a0, -0x2CB0
    ctx->pc = 0x23263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x232640: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x232640u;
    {
        const bool branch_taken_0x232640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232640u;
        // 0x232644: 0xac450028  sw          $a1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232640) {
            ctx->pc = 0x232680u;
            goto label_232680;
        }
    }
    ctx->pc = 0x232648u;
label_232648:
    // 0x232648: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x232648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23264c: 0xc7828568  lwc1        $f2, -0x7A98($gp)
    ctx->pc = 0x23264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232650: 0x2444d350  addiu       $a0, $v0, -0x2CB0
    ctx->pc = 0x232650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955856));
    // 0x232654: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x232654u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x15D378u));
    // 0x232658: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x232658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23265c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23265cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232660: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x232660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x232664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x232668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23266c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23266cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x232670: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x232670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232674: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x232674u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x232678: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x232678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x23267c: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x23267cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
label_232680:
    // 0x232680: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x232680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x232684: 0x133023  negu        $a2, $s3
    ctx->pc = 0x232684u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x232688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x232688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23268c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23268cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232690: 0xc08c124  jal         func_230490
    ctx->pc = 0x232690u;
    SET_GPR_U32(ctx, 31, 0x232698u);
    ctx->pc = 0x232694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232690u;
    // 0x232694: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230490u, 0x232690u, 0x232698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232698u;
label_232698:
    // 0x232698: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x232698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23269c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23269cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2326a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2326a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2326a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2326a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2326ac: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2326acu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2326b0: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x2326b0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2326b4: 0x4bdf8428  vadd.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x2326b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2326b8: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2326b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2326bc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2326bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2326c0: 0xc780856c  lwc1        $f0, -0x7A94($gp)
    ctx->pc = 0x2326c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2326c4: 0x2462dda0  addiu       $v0, $v1, -0x2260
    ctx->pc = 0x2326c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x2326c8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2326c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2326cc: 0xc4540038  lwc1        $f20, 0x38($v0)
    ctx->pc = 0x2326ccu;
    { uint32_t bits = FAST_READ32(0x3ADDD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2326d0: 0x4600b606  mov.s       $f24, $f22
    ctx->pc = 0x2326d0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[22]);
    // 0x2326d4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2326d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2326d8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2326D8u;
    {
        const bool branch_taken_0x2326d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2326DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326D8u;
        // 0x2326dc: 0x4600b5c6  mov.s       $f23, $f22 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326d8) {
            ctx->pc = 0x232740u;
            goto label_232740;
        }
    }
    ctx->pc = 0x2326E0u;
    // 0x2326e0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2326e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2326e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2326e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2326e8: 0xc08b672  jal         func_22D9C8
    ctx->pc = 0x2326E8u;
    SET_GPR_U32(ctx, 31, 0x2326F0u);
    ctx->pc = 0x2326ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326E8u;
    // 0x2326ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D9C8u, 0x2326E8u, 0x2326F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326F0u;
label_2326f0:
    // 0x2326f0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2326f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2326f4: 0xc4412dc0  lwc1        $f1, 0x2DC0($v0)
    ctx->pc = 0x2326f4u;
    { uint32_t bits = FAST_READ32(0x152DC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2326f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2326f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2326fc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2326FCu;
    {
        const bool branch_taken_0x2326fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326FCu;
        // 0x232700: 0x3c030016  lui         $v1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326fc) {
            ctx->pc = 0x232744u;
            goto label_232744;
        }
    }
    ctx->pc = 0x232704u;
    // 0x232704: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x232704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x232708: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x232708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x23270c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23270cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232710: 0x2483d350  addiu       $v1, $a0, -0x2CB0
    ctx->pc = 0x232710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x232714: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x232714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x15D380u));
    // 0x232718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x232718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23271c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23271cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232720: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x232720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x232724: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x232724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232728: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x232728u;
    {
        const bool branch_taken_0x232728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232728u;
        // 0x23272c: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232728) {
            ctx->pc = 0x23275Cu;
            goto label_23275c;
        }
    }
    ctx->pc = 0x232730u;
    // 0x232730: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x232730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x232734: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x232734u;
    {
        const bool branch_taken_0x232734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232734u;
        // 0x232738: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232734) {
            ctx->pc = 0x23275Cu;
            goto label_23275c;
        }
    }
    ctx->pc = 0x23273Cu;
    // 0x23273c: 0x0  nop
    ctx->pc = 0x23273cu;
    // NOP
label_232740:
    // 0x232740: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x232740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_232744:
    // 0x232744: 0x2462d350  addiu       $v0, $v1, -0x2CB0
    ctx->pc = 0x232744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
    // 0x232748: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x232748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x23274c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x232750: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x232750u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x232754: 0x4180b  movn        $v1, $zero, $a0
    ctx->pc = 0x232754u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x232758: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x232758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_23275c:
    // 0x23275c: 0xc7818570  lwc1        $f1, -0x7A90($gp)
    ctx->pc = 0x23275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232760: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x232760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232764: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x232764u;
    {
        const bool branch_taken_0x232764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232764u;
        // 0x232768: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232764) {
            ctx->pc = 0x2327C0u;
            goto label_2327c0;
        }
    }
    ctx->pc = 0x23276Cu;
    // 0x23276c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x23276cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x232770: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x232770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x232774: 0x2482d350  addiu       $v0, $a0, -0x2CB0
    ctx->pc = 0x232774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x232778: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x232778u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x23277c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x23277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232780: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x232780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x232784: 0x3c014178  lui         $at, 0x4178
    ctx->pc = 0x232784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16760 << 16));
    // 0x232788: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x232788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x23278c: 0xc7828574  lwc1        $f2, -0x7A8C($gp)
    ctx->pc = 0x23278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232790: 0x0  nop
    ctx->pc = 0x232790u;
    // NOP
    // 0x232794: 0x0  nop
    ctx->pc = 0x232794u;
    // NOP
    // 0x232798: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x232798u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x23279c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23279cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2327a0: 0x0  nop
    ctx->pc = 0x2327a0u;
    // NOP
    // 0x2327a4: 0x0  nop
    ctx->pc = 0x2327a4u;
    // NOP
    // 0x2327a8: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x2327a8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x2327ac: 0x0  nop
    ctx->pc = 0x2327acu;
    // NOP
    // 0x2327b0: 0x0  nop
    ctx->pc = 0x2327b0u;
    // NOP
    // 0x2327b4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2327b4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x2327b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2327B8u;
    {
        const bool branch_taken_0x2327b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2327b8) {
            ctx->pc = 0x2327C8u;
            goto label_2327c8;
        }
    }
    ctx->pc = 0x2327C0u;
label_2327c0:
    // 0x2327c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2327c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2327c4: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x2327c4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_2327c8:
    // 0x2327c8: 0x4600b5a8  max.s       $f22, $f22, $f0
    ctx->pc = 0x2327c8u;
    ctx->f[22] = std::max(ctx->f[22], ctx->f[0]);
    // 0x2327cc: 0xc08b8a2  jal         func_22E288
    ctx->pc = 0x2327CCu;
    SET_GPR_U32(ctx, 31, 0x2327D4u);
    ctx->pc = 0x2327D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327CCu;
    // 0x2327d0: 0x4602bde8  max.s       $f23, $f23, $f2 (Delay Slot)
    ctx->f[23] = std::max(ctx->f[23], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E288u, 0x2327CCu, 0x2327D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327D4u;
label_2327d4:
    // 0x2327d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2327d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2327d8: 0x5460001e  bnel        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2327D8u;
    {
        const bool branch_taken_0x2327d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2327d8) {
            ctx->pc = 0x2327DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2327D8u;
            // 0x2327dc: 0x3c030016  lui         $v1, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232854u;
            goto label_232854;
        }
    }
    ctx->pc = 0x2327E0u;
    // 0x2327e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2327e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327e4: 0xc08b672  jal         func_22D9C8
    ctx->pc = 0x2327E4u;
    SET_GPR_U32(ctx, 31, 0x2327ECu);
    ctx->pc = 0x2327E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327E4u;
    // 0x2327e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D9C8u, 0x2327E4u, 0x2327ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327ECu;
label_2327ec:
    // 0x2327ec: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2327ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2327f0: 0xc4542dc0  lwc1        $f20, 0x2DC0($v0)
    ctx->pc = 0x2327f0u;
    { uint32_t bits = FAST_READ32(0x152DC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2327f4: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2327f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2327f8: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2327F8u;
    {
        const bool branch_taken_0x2327f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2327FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327F8u;
        // 0x2327fc: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327f8) {
            ctx->pc = 0x232850u;
            goto label_232850;
        }
    }
    ctx->pc = 0x232800u;
    // 0x232800: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x232800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232804: 0xc08b672  jal         func_22D9C8
    ctx->pc = 0x232804u;
    SET_GPR_U32(ctx, 31, 0x23280Cu);
    ctx->pc = 0x232808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232804u;
    // 0x232808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D9C8u, 0x232804u, 0x23280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23280Cu;
label_23280c:
    // 0x23280c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x23280cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232810: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x232810u;
    {
        const bool branch_taken_0x232810 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x232814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232810u;
        // 0x232814: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232810) {
            ctx->pc = 0x232850u;
            goto label_232850;
        }
    }
    ctx->pc = 0x232818u;
    // 0x232818: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x232818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x23281c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23281cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232820: 0x2483d350  addiu       $v1, $a0, -0x2CB0
    ctx->pc = 0x232820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x232824: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x232824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x232828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x232828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23282c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23282cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232830: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x232830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x232834: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x232834u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232838: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x232838u;
    {
        const bool branch_taken_0x232838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232838u;
        // 0x23283c: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232838) {
            ctx->pc = 0x232870u;
            goto label_232870;
        }
    }
    ctx->pc = 0x232840u;
    // 0x232840: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x232840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x232844: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x232844u;
    {
        const bool branch_taken_0x232844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232844u;
        // 0x232848: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232844) {
            ctx->pc = 0x232870u;
            goto label_232870;
        }
    }
    ctx->pc = 0x23284Cu;
    // 0x23284c: 0x0  nop
    ctx->pc = 0x23284cu;
    // NOP
label_232850:
    // 0x232850: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x232850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_232854:
    // 0x232854: 0x2462d350  addiu       $v0, $v1, -0x2CB0
    ctx->pc = 0x232854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
    // 0x232858: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x232858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x23285c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23285cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x232860: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x232860u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x232864: 0x4180b  movn        $v1, $zero, $a0
    ctx->pc = 0x232864u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x232868: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x232868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x23286c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x23286cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
label_232870:
    // 0x232870: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x232870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x232874: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x232874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x232878: 0x2483d350  addiu       $v1, $a0, -0x2CB0
    ctx->pc = 0x232878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x23287c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x23287cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x232880: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x232880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x232884: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x232884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232888: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x232888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23288c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x23288cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x232890: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x232890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x232894: 0xc7818578  lwc1        $f1, -0x7A88($gp)
    ctx->pc = 0x232894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232898: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x232898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x23289c: 0x0  nop
    ctx->pc = 0x23289cu;
    // NOP
    // 0x2328a0: 0x0  nop
    ctx->pc = 0x2328a0u;
    // NOP
    // 0x2328a4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2328a4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2328a8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2328a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2328ac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2328acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2328b0: 0x4600b5a8  max.s       $f22, $f22, $f0
    ctx->pc = 0x2328b0u;
    ctx->f[22] = std::max(ctx->f[22], ctx->f[0]);
    // 0x2328b4: 0x4600b106  mov.s       $f4, $f22
    ctx->pc = 0x2328b4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[22]);
    // 0x2328b8: 0x4601b968  max.s       $f5, $f23, $f1
    ctx->pc = 0x2328b8u;
    ctx->f[5] = std::max(ctx->f[23], ctx->f[1]);
    // 0x2328bc: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2328bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2328c0: 0x77102a  slt         $v0, $v1, $s7
    ctx->pc = 0x2328c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2328c4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2328C4u;
    {
        const bool branch_taken_0x2328c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2328c4) {
            ctx->pc = 0x2328C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2328C4u;
            // 0x2328c8: 0x772023  subu        $a0, $v1, $s7 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2328D0u;
            goto label_2328d0;
        }
    }
    ctx->pc = 0x2328CCu;
    // 0x2328cc: 0x2e32023  subu        $a0, $s7, $v1
    ctx->pc = 0x2328ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_2328d0:
    // 0x2328d0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2328d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2328d4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2328d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2328d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2328D8u;
    {
        const bool branch_taken_0x2328d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2328DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328D8u;
        // 0x2328dc: 0x28828000  slti        $v0, $a0, -0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328d8) {
            ctx->pc = 0x2328F0u;
            goto label_2328f0;
        }
    }
    ctx->pc = 0x2328E0u;
    // 0x2328e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2328e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2328e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2328E4u;
    {
        const bool branch_taken_0x2328e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2328E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328E4u;
        // 0x2328e8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328e4) {
            ctx->pc = 0x232900u;
            goto label_232900;
        }
    }
    ctx->pc = 0x2328ECu;
    // 0x2328ec: 0x0  nop
    ctx->pc = 0x2328ecu;
    // NOP
label_2328f0:
    // 0x2328f0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2328f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2328f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2328f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2328f8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2328f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2328fc: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2328fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_232900:
    // 0x232900: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x232900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232904: 0x2442ee39  addiu       $v0, $v0, -0x11C7
    ctx->pc = 0x232904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962745));
    // 0x232908: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232908u;
    {
        const bool branch_taken_0x232908 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x232908) {
            ctx->pc = 0x232928u;
            goto label_232928;
        }
    }
    ctx->pc = 0x232910u;
    // 0x232910: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x232910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232914: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x232914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x232918: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x232918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x23291c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23291cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x232920u;
    {
        const bool branch_taken_0x232920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232920u;
        // 0x232924: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232920) {
            ctx->pc = 0x23292Cu;
            goto label_23292c;
        }
    }
    ctx->pc = 0x232928u;
label_232928:
    // 0x232928: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x232928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23292c:
    // 0x23292c: 0x86a20148  lh          $v0, 0x148($s5)
    ctx->pc = 0x23292cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 328)));
    // 0x232930: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x232930u;
    {
        const bool branch_taken_0x232930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232930u;
        // 0x232934: 0x3c030016  lui         $v1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232930) {
            ctx->pc = 0x2329C8u;
            goto label_2329c8;
        }
    }
    ctx->pc = 0x232938u;
    // 0x232938: 0x86c20148  lh          $v0, 0x148($s6)
    ctx->pc = 0x232938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 328)));
    // 0x23293c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x23293Cu;
    {
        const bool branch_taken_0x23293c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23293Cu;
        // 0x232940: 0x2462d350  addiu       $v0, $v1, -0x2CB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23293c) {
            ctx->pc = 0x2329C8u;
            goto label_2329c8;
        }
    }
    ctx->pc = 0x232944u;
    // 0x232944: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x232944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232948: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x232948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23294c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x23294Cu;
    {
        const bool branch_taken_0x23294c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23294Cu;
        // 0x232950: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23294c) {
            ctx->pc = 0x232988u;
            goto label_232988;
        }
    }
    ctx->pc = 0x232954u;
    // 0x232954: 0x3c014443  lui         $at, 0x4443
    ctx->pc = 0x232954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17475 << 16));
    // 0x232958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23295c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23295cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232960: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x232960u;
    {
        const bool branch_taken_0x232960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232960) {
            ctx->pc = 0x232964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232960u;
            // 0x232964: 0x2482d350  addiu       $v0, $a0, -0x2CB0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23298Cu;
            goto label_23298c;
        }
    }
    ctx->pc = 0x232968u;
    // 0x232968: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x232968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x23296c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x23296cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x232970: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x232970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x232974: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x232974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232978: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x232978u;
    {
        const bool branch_taken_0x232978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232978) {
            ctx->pc = 0x23297Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232978u;
            // 0x23297c: 0xe4410038  swc1        $f1, 0x38($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x232988u;
            goto label_232988;
        }
    }
    ctx->pc = 0x232980u;
    // 0x232980: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x232980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x232984: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x232984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_232988:
    // 0x232988: 0x2482d350  addiu       $v0, $a0, -0x2CB0
    ctx->pc = 0x232988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
label_23298c:
    // 0x23298c: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x23298cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232990: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x232990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232994: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x232994u;
    {
        const bool branch_taken_0x232994 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232994u;
        // 0x232998: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232994) {
            ctx->pc = 0x2329F0u;
            goto label_2329f0;
        }
    }
    ctx->pc = 0x23299Cu;
    // 0x23299c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x23299cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2329a0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2329a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2329a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2329a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2329a8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2329a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2329ac: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2329ACu;
    {
        const bool branch_taken_0x2329ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2329ac) {
            ctx->pc = 0x2329B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2329ACu;
            // 0x2329b0: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2329C0u;
            goto label_2329c0;
        }
    }
    ctx->pc = 0x2329B4u;
    // 0x2329b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2329B4u;
    {
        const bool branch_taken_0x2329b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329B4u;
        // 0x2329b8: 0xe4410038  swc1        $f1, 0x38($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329b4) {
            ctx->pc = 0x2329F0u;
            goto label_2329f0;
        }
    }
    ctx->pc = 0x2329BCu;
    // 0x2329bc: 0x0  nop
    ctx->pc = 0x2329bcu;
    // NOP
label_2329c0:
    // 0x2329c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2329C0u;
    {
        const bool branch_taken_0x2329c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329C0u;
        // 0x2329c4: 0xe4400038  swc1        $f0, 0x38($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329c0) {
            ctx->pc = 0x2329ECu;
            goto label_2329ec;
        }
    }
    ctx->pc = 0x2329C8u;
label_2329c8:
    // 0x2329c8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2329c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2329cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2329ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2329d0: 0x2462d350  addiu       $v0, $v1, -0x2CB0
    ctx->pc = 0x2329d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
    // 0x2329d4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2329d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2329d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2329d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2329dc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2329DCu;
    {
        const bool branch_taken_0x2329dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2329dc) {
            ctx->pc = 0x2329E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2329DCu;
            // 0x2329e0: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2329ECu;
            goto label_2329ec;
        }
    }
    ctx->pc = 0x2329E4u;
    // 0x2329e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2329e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2329e8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2329e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2329ec:
    // 0x2329ec: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x2329ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
label_2329f0:
    // 0x2329f0: 0x2482d350  addiu       $v0, $a0, -0x2CB0
    ctx->pc = 0x2329f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x2329f4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2329f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2329f8: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x2329f8u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x2329fc: 0x46182034  c.lt.s      $f4, $f24
    ctx->pc = 0x2329fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232a00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x232A00u;
    {
        const bool branch_taken_0x232a00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x232a00) {
            ctx->pc = 0x232A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232A00u;
            // 0x232a04: 0x4600c586  mov.s       $f22, $f24 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232A08u;
            goto label_232a08;
        }
    }
    ctx->pc = 0x232A08u;
label_232a08:
    // 0x232a08: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x232a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232a0c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x232a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x232a10: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x232a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232a14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x232a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x232a18: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x232a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x232a1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x232a1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a20: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x232a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x232a24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x232a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a28: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x232a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x232a2c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x232a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x232a30: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x232a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x232a34: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x232a34u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232a38: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x232a38u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232a3c: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x232a3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x232a40: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x232a40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x232a44: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x232a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x232a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a4c: 0xc0847da  jal         func_211F68
    ctx->pc = 0x232A4Cu;
    SET_GPR_U32(ctx, 31, 0x232A54u);
    ctx->pc = 0x232A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A4Cu;
    // 0x232a50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x232A4Cu, 0x232A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A54u;
label_232a54:
    // 0x232a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x232a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a5c: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x232A5Cu;
    SET_GPR_U32(ctx, 31, 0x232A64u);
    ctx->pc = 0x232A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A5Cu;
    // 0x232a60: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x232A5Cu, 0x232A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A64u;
label_232a64:
    // 0x232a64: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x232a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x232a68: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x232a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x232a6c: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x232a6cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x232a70: 0xda3f0000  lqc2        $vf31, 0x0($s1)
    ctx->pc = 0x232a70u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x232a74: 0x4bff8428  vadd.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x232a74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x232a78: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x232a78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x232a7c: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x232a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x232a80: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x232a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x232a84: 0x2444dda0  addiu       $a0, $v0, -0x2260
    ctx->pc = 0x232a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958496));
    // 0x232a88: 0xc08db6a  jal         func_236DA8
    ctx->pc = 0x232A88u;
    SET_GPR_U32(ctx, 31, 0x232A90u);
    ctx->pc = 0x232A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A88u;
    // 0x232a8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236DA8u, 0x232A88u, 0x232A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A90u;
label_232a90:
    // 0x232a90: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x232a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x232a94: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x232A94u;
    {
        const bool branch_taken_0x232a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A94u;
        // 0x232a98: 0x3c030016  lui         $v1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a94) {
            ctx->pc = 0x232B98u;
            goto label_232b98;
        }
    }
    ctx->pc = 0x232A9Cu;
    // 0x232a9c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x232a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x232aa0: 0x96a60166  lhu         $a2, 0x166($s5)
    ctx->pc = 0x232aa0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 358)));
    // 0x232aa4: 0x244479d0  addiu       $a0, $v0, 0x79D0
    ctx->pc = 0x232aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31184));
    // 0x232aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232aac: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x232aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_232ab0:
    // 0x232ab0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x232ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232ab4: 0x50c30005  beql        $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x232AB4u;
    {
        const bool branch_taken_0x232ab4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x232ab4) {
            ctx->pc = 0x232AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232AB4u;
            // 0x232ab8: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x232ACCu;
            goto label_232acc;
        }
    }
    ctx->pc = 0x232ABCu;
    // 0x232abc: 0x96c20166  lhu         $v0, 0x166($s6)
    ctx->pc = 0x232abcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 358)));
    // 0x232ac0: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x232AC0u;
    {
        const bool branch_taken_0x232ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x232ac0) {
            ctx->pc = 0x232AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232AC0u;
            // 0x232ac4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232ADCu;
            goto label_232adc;
        }
    }
    ctx->pc = 0x232AC8u;
    // 0x232ac8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x232ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232acc:
    // 0x232acc: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x232accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232ad0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x232AD0u;
    {
        const bool branch_taken_0x232ad0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x232ad0) {
            ctx->pc = 0x232AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232AD0u;
            // 0x232ad4: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
            ctx->f[25] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232AD8u;
            goto label_232ad8;
        }
    }
    ctx->pc = 0x232AD8u;
label_232ad8:
    // 0x232ad8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x232ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_232adc:
    // 0x232adc: 0x14a7fff4  bne         $a1, $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x232ADCu;
    {
        const bool branch_taken_0x232adc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x232AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232ADCu;
        // 0x232ae0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232adc) {
            ctx->pc = 0x232AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232ab0;
        }
    }
    ctx->pc = 0x232AE4u;
    // 0x232ae4: 0x96a40166  lhu         $a0, 0x166($s5)
    ctx->pc = 0x232ae4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 358)));
    // 0x232ae8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x232ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x232aec: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232AECu;
    {
        const bool branch_taken_0x232aec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x232aec) {
            ctx->pc = 0x232AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232AECu;
            // 0x232af0: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232B08u;
            goto label_232b08;
        }
    }
    ctx->pc = 0x232AF4u;
    // 0x232af4: 0x96c20166  lhu         $v0, 0x166($s6)
    ctx->pc = 0x232af4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 358)));
    // 0x232af8: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232AF8u;
    {
        const bool branch_taken_0x232af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x232AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AF8u;
        // 0x232afc: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232af8) {
            ctx->pc = 0x232B08u;
            goto label_232b08;
        }
    }
    ctx->pc = 0x232B00u;
    // 0x232b00: 0xc780857c  lwc1        $f0, -0x7A84($gp)
    ctx->pc = 0x232b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232b04: 0x4600ce42  mul.s       $f25, $f25, $f0
    ctx->pc = 0x232b04u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_232b08:
    // 0x232b08: 0x2483d350  addiu       $v1, $a0, -0x2CB0
    ctx->pc = 0x232b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x232b0c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x232b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x232b10: 0x2c42003c  sltiu       $v0, $v0, 0x3C
    ctx->pc = 0x232b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x232b14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x232B14u;
    {
        const bool branch_taken_0x232b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B14u;
        // 0x232b18: 0xc4610024  lwc1        $f1, 0x24($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b14) {
            ctx->pc = 0x232B20u;
            goto label_232b20;
        }
    }
    ctx->pc = 0x232B1Cu;
    // 0x232b1c: 0xc7998580  lwc1        $f25, -0x7A80($gp)
    ctx->pc = 0x232b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_232b20:
    // 0x232b20: 0x46190834  c.lt.s      $f1, $f25
    ctx->pc = 0x232b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232b24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x232B24u;
    {
        const bool branch_taken_0x232b24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232b24) {
            ctx->pc = 0x232B38u;
            goto label_232b38;
        }
    }
    ctx->pc = 0x232B2Cu;
    // 0x232b2c: 0xc7808584  lwc1        $f0, -0x7A7C($gp)
    ctx->pc = 0x232b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232b30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x232B30u;
    {
        const bool branch_taken_0x232b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B30u;
        // 0x232b34: 0x46000e40  add.s       $f25, $f1, $f0 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b30) {
            ctx->pc = 0x232B4Cu;
            goto label_232b4c;
        }
    }
    ctx->pc = 0x232B38u;
label_232b38:
    // 0x232b38: 0x4601c834  c.lt.s      $f25, $f1
    ctx->pc = 0x232b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232b3c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x232B3Cu;
    {
        const bool branch_taken_0x232b3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B3Cu;
        // 0x232b40: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b3c) {
            ctx->pc = 0x232B50u;
            goto label_232b50;
        }
    }
    ctx->pc = 0x232B44u;
    // 0x232b44: 0xc7808588  lwc1        $f0, -0x7A78($gp)
    ctx->pc = 0x232b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232b48: 0x46000e41  sub.s       $f25, $f1, $f0
    ctx->pc = 0x232b48u;
    ctx->f[25] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_232b4c:
    // 0x232b4c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x232b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_232b50:
    // 0x232b50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x232b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232b54: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x232b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x232b58: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x232b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b5c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x232b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x232b60: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x232b60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x232b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b70: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x232b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b74: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x232b74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x232b78: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x232b78u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x232b7c: 0xc08daf8  jal         func_236BE0
    ctx->pc = 0x232B7Cu;
    SET_GPR_U32(ctx, 31, 0x232B84u);
    ctx->pc = 0x232B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B7Cu;
    // 0x232b80: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x232B7Cu, 0x232B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B84u;
label_232b84:
    // 0x232b84: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x232b84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x232b88: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x232b88u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x232b8c: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x232b8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x232b90: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x232b90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x232b94: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x232b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_232b98:
    // 0x232b98: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x232b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x232b9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x232b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232ba0: 0x2470d350  addiu       $s0, $v1, -0x2CB0
    ctx->pc = 0x232ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
    // 0x232ba4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x232ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ba8: 0xc08c69e  jal         func_231A78
    ctx->pc = 0x232BA8u;
    SET_GPR_U32(ctx, 31, 0x232BB0u);
    ctx->pc = 0x232BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BA8u;
    // 0x232bac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A78u, 0x232BA8u, 0x232BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BB0u;
label_232bb0:
    // 0x232bb0: 0xae13002c  sw          $s3, 0x2C($s0)
    ctx->pc = 0x232bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
    // 0x232bb4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x232bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x232bb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x232bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x232bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232bc0: 0xe6190024  swc1        $f25, 0x24($s0)
    ctx->pc = 0x232bc0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x232bc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232bc8: 0xc08c22c  jal         func_2308B0
    ctx->pc = 0x232BC8u;
    SET_GPR_U32(ctx, 31, 0x232BD0u);
    ctx->pc = 0x232BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BC8u;
    // 0x232bcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308B0u, 0x232BC8u, 0x232BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BD0u;
label_232bd0:
    // 0x232bd0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x232bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x232bd4: 0x2c620078  sltiu       $v0, $v1, 0x78
    ctx->pc = 0x232bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
    // 0x232bd8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x232BD8u;
    {
        const bool branch_taken_0x232bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232bd8) {
            ctx->pc = 0x232BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232BD8u;
            // 0x232bdc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232BECu;
            goto label_232bec;
        }
    }
    ctx->pc = 0x232BE0u;
    // 0x232be0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x232be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x232be4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x232be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x232be8: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x232be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_232bec:
    // 0x232bec: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x232becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x232bf0: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x232bf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x232bf4: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x232bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x232bf8: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x232bf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x232bfc: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x232bfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x232c00: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x232c00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x232c04: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x232c04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x232c08: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x232c08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x232c0c: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x232c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x232c10: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x232c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x232c14: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x232c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x232c18: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x232c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x232c1c: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x232c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x232c20: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x232c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x232c24: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x232c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x232c28: 0x3e00008  jr          $ra
    ctx->pc = 0x232C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C28u;
        // 0x232c2c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232C30u;
}
