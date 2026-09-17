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

// Function: sub_00368DF8
// Address: 0x368df8 - 0x369150
void sub_00368DF8_0x368df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368DF8_0x368df8");
#endif

    switch (ctx->pc) {
        case 0x368e74u: goto label_368e74;
        case 0x368e98u: goto label_368e98;
        case 0x368eb0u: goto label_368eb0;
        case 0x368ec8u: goto label_368ec8;
        case 0x368ee4u: goto label_368ee4;
        case 0x368f00u: goto label_368f00;
        case 0x368f20u: goto label_368f20;
        case 0x368f7cu: goto label_368f7c;
        case 0x368f98u: goto label_368f98;
        case 0x368fc0u: goto label_368fc0;
        case 0x368fe4u: goto label_368fe4;
        case 0x369000u: goto label_369000;
        case 0x369018u: goto label_369018;
        case 0x369048u: goto label_369048;
        case 0x369054u: goto label_369054;
        case 0x369078u: goto label_369078;
        case 0x36909cu: goto label_36909c;
        case 0x3690b0u: goto label_3690b0;
        case 0x3690dcu: goto label_3690dc;
        case 0x3690e4u: goto label_3690e4;
        case 0x369100u: goto label_369100;
        case 0x369118u: goto label_369118;
        default: break;
    }

    ctx->pc = 0x368df8u;

    // 0x368df8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x368df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x368dfc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x368dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x368e00: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x368e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x368e04: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x368e04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x368e08: 0x8fb50168  lw          $s5, 0x168($sp)
    ctx->pc = 0x368e08u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x368e0c: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x368e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x368e10: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x368e10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x368e14: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x368e14u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x368e18: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x368e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x368e1c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x368e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368e20: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x368e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x368e24: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x368e24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x368e28: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x368e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x368e2c: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x368e2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x368e30: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x368e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x368e34: 0x8b603  sra         $s6, $t0, 24
    ctx->pc = 0x368e34u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 8), 24));
    // 0x368e38: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x368e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x368e3c: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x368e3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368e40: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x368e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x368e44: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x368e44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368e48: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x368e48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x368e4c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x368e4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x368e50: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x368e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x368e54: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x368e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x368e58: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x368e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x368e5c: 0xafa600e4  sw          $a2, 0xE4($sp)
    ctx->pc = 0x368e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 6));
    // 0x368e60: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x368E60u;
    {
        const bool branch_taken_0x368e60 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x368E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E60u;
        // 0x368e64: 0xafa700e8  sw          $a3, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e60) {
            ctx->pc = 0x368E80u;
            goto label_368e80;
        }
    }
    ctx->pc = 0x368E68u;
    // 0x368e68: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x368e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x368e6c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x368E6Cu;
    SET_GPR_U32(ctx, 31, 0x368E74u);
    ctx->pc = 0x368E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E6Cu;
    // 0x368e70: 0x24847df8  addiu       $a0, $a0, 0x7DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x368E6Cu, 0x368E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E74u;
label_368e74:
    // 0x368e74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x368e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x368e78: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x368E78u;
    {
        const bool branch_taken_0x368e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E78u;
        // 0x368e7c: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e78) {
            ctx->pc = 0x36911Cu;
            goto label_36911c;
        }
    }
    ctx->pc = 0x368E80u;
label_368e80:
    // 0x368e80: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x368e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368e84: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x368E84u;
    {
        const bool branch_taken_0x368e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E84u;
        // 0x368e88: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e84) {
            ctx->pc = 0x368EA8u;
            goto label_368ea8;
        }
    }
    ctx->pc = 0x368E8Cu;
    // 0x368e8c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x368e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x368e90: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x368E90u;
    SET_GPR_U32(ctx, 31, 0x368E98u);
    ctx->pc = 0x368E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E90u;
    // 0x368e94: 0x24847e30  addiu       $a0, $a0, 0x7E30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x368E90u, 0x368E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E98u;
label_368e98:
    // 0x368e98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x368e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x368e9c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x368E9Cu;
    {
        const bool branch_taken_0x368e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E9Cu;
        // 0x368ea0: 0x34420019  ori         $v0, $v0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e9c) {
            ctx->pc = 0x36911Cu;
            goto label_36911c;
        }
    }
    ctx->pc = 0x368EA4u;
    // 0x368ea4: 0x0  nop
    ctx->pc = 0x368ea4u;
    // NOP
label_368ea8:
    // 0x368ea8: 0xc0d7c82  jal         func_35F208
    ctx->pc = 0x368EA8u;
    SET_GPR_U32(ctx, 31, 0x368EB0u);
    ctx->pc = 0x368EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368EA8u;
    // 0x368eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F208u, 0x368EA8u, 0x368EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368EB0u;
label_368eb0:
    // 0x368eb0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x368EB0u;
    {
        const bool branch_taken_0x368eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368eb0) {
            ctx->pc = 0x368EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368EB0u;
            // 0x368eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368ED8u;
            goto label_368ed8;
        }
    }
    ctx->pc = 0x368EB8u;
    // 0x368eb8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x368eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x368ebc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x368ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ec0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x368EC0u;
    SET_GPR_U32(ctx, 31, 0x368EC8u);
    ctx->pc = 0x368EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368EC0u;
    // 0x368ec4: 0x24847e68  addiu       $a0, $a0, 0x7E68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x368EC0u, 0x368EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368EC8u;
label_368ec8:
    // 0x368ec8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x368ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x368ecc: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x368ECCu;
    {
        const bool branch_taken_0x368ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368ECCu;
        // 0x368ed0: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x368ecc) {
            ctx->pc = 0x36911Cu;
            goto label_36911c;
        }
    }
    ctx->pc = 0x368ED4u;
    // 0x368ed4: 0x0  nop
    ctx->pc = 0x368ed4u;
    // NOP
label_368ed8:
    // 0x368ed8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x368ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368edc: 0xc0d7c20  jal         func_35F080
    ctx->pc = 0x368EDCu;
    SET_GPR_U32(ctx, 31, 0x368EE4u);
    ctx->pc = 0x368EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368EDCu;
    // 0x368ee0: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F080u, 0x368EDCu, 0x368EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368EE4u;
label_368ee4:
    // 0x368ee4: 0x5440008e  bnel        $v0, $zero, . + 4 + (0x8E << 2)
    ctx->pc = 0x368EE4u;
    {
        const bool branch_taken_0x368ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368ee4) {
            ctx->pc = 0x368EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368EE4u;
            // 0x368ee8: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369120u;
            goto label_369120;
        }
    }
    ctx->pc = 0x368EECu;
    // 0x368eec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x368eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x368ef0: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x368EF0u;
    {
        const bool branch_taken_0x368ef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x368EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EF0u;
        // 0x368ef4: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368ef0) {
            ctx->pc = 0x368F20u;
            goto label_368f20;
        }
    }
    ctx->pc = 0x368EF8u;
    // 0x368ef8: 0xc0d82d8  jal         func_360B60
    ctx->pc = 0x368EF8u;
    SET_GPR_U32(ctx, 31, 0x368F00u);
    ctx->pc = 0x368EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368EF8u;
    // 0x368efc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360B60u, 0x368EF8u, 0x368F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F00u;
label_368f00:
    // 0x368f00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x368f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f04: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x368f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x368f08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x368f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f0c: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x368f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x368f10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x368f10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x368f14: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x368f14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x368f18: 0xc0d82ec  jal         func_360BB0
    ctx->pc = 0x368F18u;
    SET_GPR_U32(ctx, 31, 0x368F20u);
    ctx->pc = 0x368F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F18u;
    // 0x368f1c: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360BB0u, 0x368F18u, 0x368F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F20u;
label_368f20:
    // 0x368f20: 0x6ae60007  ldl         $a2, 0x7($s7)
    ctx->pc = 0x368f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x368f24: 0x6ee60000  ldr         $a2, 0x0($s7)
    ctx->pc = 0x368f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x368f28: 0x8ee70008  lw          $a3, 0x8($s7)
    ctx->pc = 0x368f28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x368f2c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x368f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368f30: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x368f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368f34: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x368f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x368f38: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x368f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x368f3c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x368f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f40: 0x6bc30007  ldl         $v1, 0x7($fp)
    ctx->pc = 0x368f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x368f44: 0x6fc30000  ldr         $v1, 0x0($fp)
    ctx->pc = 0x368f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x368f48: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x368f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x368f4c: 0xb3a30023  sdl         $v1, 0x23($sp)
    ctx->pc = 0x368f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368f50: 0xb7a3001c  sdr         $v1, 0x1C($sp)
    ctx->pc = 0x368f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368f54: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x368f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x368f58: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x368f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x368f5c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x368f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x368f60: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x368f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x368f64: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x368f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x368f68: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x368f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368f6c: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x368f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368f70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x368f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x368f74: 0xc0d923c  jal         func_3648F0
    ctx->pc = 0x368F74u;
    SET_GPR_U32(ctx, 31, 0x368F7Cu);
    ctx->pc = 0x368F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F74u;
    // 0x368f78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3648F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3648F0u, 0x368F74u, 0x368F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F7Cu;
label_368f7c:
    // 0x368f7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x368f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x368f80: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x368F80u;
    {
        const bool branch_taken_0x368f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x368f80) {
            ctx->pc = 0x368F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368F80u;
            // 0x368f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368F90u;
            goto label_368f90;
        }
    }
    ctx->pc = 0x368F88u;
    // 0x368f88: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x368F88u;
    {
        const bool branch_taken_0x368f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F88u;
        // 0x368f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f88) {
            ctx->pc = 0x36911Cu;
            goto label_36911c;
        }
    }
    ctx->pc = 0x368F90u;
label_368f90:
    // 0x368f90: 0xc0da1c2  jal         func_368708
    ctx->pc = 0x368F90u;
    SET_GPR_U32(ctx, 31, 0x368F98u);
    ctx->pc = 0x368F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F90u;
    // 0x368f94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368708u, 0x368F90u, 0x368F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F98u;
label_368f98:
    // 0x368f98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x368f98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f9c: 0x1260005f  beqz        $s3, . + 4 + (0x5F << 2)
    ctx->pc = 0x368F9Cu;
    {
        const bool branch_taken_0x368f9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x368FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F9Cu;
        // 0x368fa0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f9c) {
            ctx->pc = 0x36911Cu;
            goto label_36911c;
        }
    }
    ctx->pc = 0x368FA4u;
    // 0x368fa4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x368fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x368fa8: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x368fa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368fac: 0x8fa80160  lw          $t0, 0x160($sp)
    ctx->pc = 0x368facu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x368fb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x368fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368fb4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x368fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368fb8: 0xc0d9f40  jal         func_367D00
    ctx->pc = 0x368FB8u;
    SET_GPR_U32(ctx, 31, 0x368FC0u);
    ctx->pc = 0x368FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368FB8u;
    // 0x368fbc: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367D00u, 0x368FB8u, 0x368FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368FC0u;
label_368fc0:
    // 0x368fc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x368fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368fc4: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x368fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x368fc8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x368fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368fcc: 0x87a50004  lh          $a1, 0x4($sp)
    ctx->pc = 0x368fccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x368fd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x368fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368fd4: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x368fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x368fd8: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x368fd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368fdc: 0xc0da454  jal         func_369150
    ctx->pc = 0x368FDCu;
    SET_GPR_U32(ctx, 31, 0x368FE4u);
    ctx->pc = 0x368FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368FDCu;
    // 0x368fe0: 0x93a6000c  lbu         $a2, 0xC($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369150u, 0x368FDCu, 0x368FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368FE4u;
label_368fe4:
    // 0x368fe4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x368fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368fe8: 0x16800033  bnez        $s4, . + 4 + (0x33 << 2)
    ctx->pc = 0x368FE8u;
    {
        const bool branch_taken_0x368fe8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x368FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368FE8u;
        // 0x368fec: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368fe8) {
            ctx->pc = 0x3690B8u;
            goto label_3690b8;
        }
    }
    ctx->pc = 0x368FF0u;
    // 0x368ff0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x368ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x368ff4: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x368ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x368ff8: 0xc0da068  jal         func_3681A0
    ctx->pc = 0x368FF8u;
    SET_GPR_U32(ctx, 31, 0x369000u);
    ctx->pc = 0x368FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368FF8u;
    // 0x368ffc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3681A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3681A0u, 0x368FF8u, 0x369000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369000u;
label_369000:
    // 0x369000: 0x1680002d  bnez        $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x369000u;
    {
        const bool branch_taken_0x369000 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x369004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369000u;
        // 0x369004: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369000) {
            ctx->pc = 0x3690B8u;
            goto label_3690b8;
        }
    }
    ctx->pc = 0x369008u;
    // 0x369008: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x369008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x36900c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x36900cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x369010: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x369010u;
    SET_GPR_U32(ctx, 31, 0x369018u);
    ctx->pc = 0x369014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369010u;
    // 0x369014: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x369010u, 0x369018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369018u;
label_369018:
    // 0x369018: 0x93a30076  lbu         $v1, 0x76($sp)
    ctx->pc = 0x369018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 118)));
    // 0x36901c: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x36901Cu;
    {
        const bool branch_taken_0x36901c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36901Cu;
        // 0x369020: 0x93a20077  lbu         $v0, 0x77($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 119)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36901c) {
            ctx->pc = 0x3690DCu;
            goto label_3690dc;
        }
    }
    ctx->pc = 0x369024u;
    // 0x369024: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x369024u;
    {
        const bool branch_taken_0x369024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369024u;
        // 0x369028: 0x2c42007f  sltiu       $v0, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x369024) {
            ctx->pc = 0x3690DCu;
            goto label_3690dc;
        }
    }
    ctx->pc = 0x36902Cu;
    // 0x36902c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x36902Cu;
    {
        const bool branch_taken_0x36902c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36902Cu;
        // 0x369030: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36902c) {
            ctx->pc = 0x3690DCu;
            goto label_3690dc;
        }
    }
    ctx->pc = 0x369034u;
    // 0x369034: 0x93a60077  lbu         $a2, 0x77($sp)
    ctx->pc = 0x369034u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 119)));
    // 0x369038: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x369038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x36903c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x36903cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369040: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x369040u;
    SET_GPR_U32(ctx, 31, 0x369048u);
    ctx->pc = 0x369044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369040u;
    // 0x369044: 0x24847ec0  addiu       $a0, $a0, 0x7EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x369040u, 0x369048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369048u;
label_369048:
    // 0x369048: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x369048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36904c: 0xc0d82d8  jal         func_360B60
    ctx->pc = 0x36904Cu;
    SET_GPR_U32(ctx, 31, 0x369054u);
    ctx->pc = 0x369050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36904Cu;
    // 0x369050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360B60u, 0x36904Cu, 0x369054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369054u;
label_369054:
    // 0x369054: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x369054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369058: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x369058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x36905c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36905cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369060: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x369060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x369064: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x369064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x369068: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x369068u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x36906c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x36906cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369070: 0xc0d8310  jal         func_360C40
    ctx->pc = 0x369070u;
    SET_GPR_U32(ctx, 31, 0x369078u);
    ctx->pc = 0x369074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369070u;
    // 0x369074: 0x8ea90008  lw          $t1, 0x8($s5) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360C40u, 0x369070u, 0x369078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369078u;
label_369078:
    // 0x369078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x369078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36907c: 0x87a50004  lh          $a1, 0x4($sp)
    ctx->pc = 0x36907cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x369080: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x369080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369084: 0x93a6000c  lbu         $a2, 0xC($sp)
    ctx->pc = 0x369084u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x369088: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x369088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36908c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x36908cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x369090: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x369090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369094: 0xc0da454  jal         func_369150
    ctx->pc = 0x369094u;
    SET_GPR_U32(ctx, 31, 0x36909Cu);
    ctx->pc = 0x369098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369094u;
    // 0x369098: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x369150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369150u, 0x369094u, 0x36909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36909Cu;
label_36909c:
    // 0x36909c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x36909cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690a0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3690a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3690a4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3690a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690a8: 0xc0da068  jal         func_3681A0
    ctx->pc = 0x3690A8u;
    SET_GPR_U32(ctx, 31, 0x3690B0u);
    ctx->pc = 0x3690ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690A8u;
    // 0x3690ac: 0x8fa70160  lw          $a3, 0x160($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3681A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3681A0u, 0x3690A8u, 0x3690B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690B0u;
label_3690b0:
    // 0x3690b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3690B0u;
    {
        const bool branch_taken_0x3690b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3690b0) {
            ctx->pc = 0x3690DCu;
            goto label_3690dc;
        }
    }
    ctx->pc = 0x3690B8u;
label_3690b8:
    // 0x3690b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3690b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3690bc: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x3690bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x3690c0: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3690C0u;
    {
        const bool branch_taken_0x3690c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x3690C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3690C0u;
        // 0x3690c4: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3690c0) {
            ctx->pc = 0x3690DCu;
            goto label_3690dc;
        }
    }
    ctx->pc = 0x3690C8u;
    // 0x3690c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3690c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3690cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3690ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690d0: 0x24847ef0  addiu       $a0, $a0, 0x7EF0
    ctx->pc = 0x3690d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32496));
    // 0x3690d4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3690D4u;
    SET_GPR_U32(ctx, 31, 0x3690DCu);
    ctx->pc = 0x3690D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690D4u;
    // 0x3690d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3690D4u, 0x3690DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690DCu;
label_3690dc:
    // 0x3690dc: 0xc0d7bc2  jal         func_35EF08
    ctx->pc = 0x3690DCu;
    SET_GPR_U32(ctx, 31, 0x3690E4u);
    ctx->pc = 0x3690E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690DCu;
    // 0x3690e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF08u, 0x3690DCu, 0x3690E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690E4u;
label_3690e4:
    // 0x3690e4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3690e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3690e8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3690E8u;
    {
        const bool branch_taken_0x3690e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3690ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3690E8u;
        // 0x3690ec: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3690e8) {
            ctx->pc = 0x369118u;
            goto label_369118;
        }
    }
    ctx->pc = 0x3690F0u;
    // 0x3690f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3690f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3690f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690f8: 0xc0d8f70  jal         func_363DC0
    ctx->pc = 0x3690F8u;
    SET_GPR_U32(ctx, 31, 0x369100u);
    ctx->pc = 0x3690FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690F8u;
    // 0x3690fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363DC0u, 0x3690F8u, 0x369100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369100u;
label_369100:
    // 0x369100: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x369100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369104: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x369104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x369108: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x369108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x36910c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36910cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369110: 0xc0d924e  jal         func_364938
    ctx->pc = 0x369110u;
    SET_GPR_U32(ctx, 31, 0x369118u);
    ctx->pc = 0x369114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369110u;
    // 0x369114: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364938u, 0x369110u, 0x369118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369118u;
label_369118:
    // 0x369118: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x369118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36911c:
    // 0x36911c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x36911cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_369120:
    // 0x369120: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x369120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x369124: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x369124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x369128: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x369128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x36912c: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x36912cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x369130: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x369130u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x369134: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x369134u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x369138: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x369138u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x36913c: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x36913cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x369140: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x369140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x369144: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x369144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x369148: 0x3e00008  jr          $ra
    ctx->pc = 0x369148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369148u;
        // 0x36914c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369150u;
}
