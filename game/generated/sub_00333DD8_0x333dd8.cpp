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

// Function: sub_00333DD8
// Address: 0x333dd8 - 0x333ff8
void sub_00333DD8_0x333dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333DD8_0x333dd8");
#endif

    ctx->pc = 0x333dd8u;

    // 0x333dd8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x333dd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333ddc: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x333ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x333de0: 0x8d060014  lw          $a2, 0x14($t0)
    ctx->pc = 0x333de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x333de4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x333de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x333de8: 0x25030024  addiu       $v1, $t0, 0x24
    ctx->pc = 0x333de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
    // 0x333dec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x333decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333df0: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x333df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x333df4: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x333df4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x333df8: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x333df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x333dfc: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x333dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x333e00: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x333e00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x333e04: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x333E04u;
    {
        const bool branch_taken_0x333e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x333E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E04u;
        // 0x333e08: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e04) {
            ctx->pc = 0x333E20u;
            goto label_333e20;
        }
    }
    ctx->pc = 0x333E0Cu;
    // 0x333e0c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x333e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x333e10: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x333e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x333e14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x333E14u;
    {
        const bool branch_taken_0x333e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E14u;
        // 0x333e18: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e14) {
            ctx->pc = 0x333E30u;
            goto label_333e30;
        }
    }
    ctx->pc = 0x333E1Cu;
    // 0x333e1c: 0x0  nop
    ctx->pc = 0x333e1cu;
    // NOP
label_333e20:
    // 0x333e20: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x333e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x333e24: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x333e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x333e28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x333e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x333e2c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x333e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_333e30:
    // 0x333e30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x333e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x333e34: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x333e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333e38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x333e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e3c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x333e3cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x333e40: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x333e40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x333e44: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333e48: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x333e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x333e4c: 0x246508c0  addiu       $a1, $v1, 0x8C0
    ctx->pc = 0x333e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2240));
    // 0x333e50: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x333e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x333e54: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x333E54u;
    {
        const bool branch_taken_0x333e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x333E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E54u;
        // 0x333e58: 0x24e60010  addiu       $a2, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e54) {
            ctx->pc = 0x333E70u;
            goto label_333e70;
        }
    }
    ctx->pc = 0x333E5Cu;
    // 0x333e5c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x333e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x333e60: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x333e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x333e64: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x333e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x333e68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x333E68u;
    {
        const bool branch_taken_0x333e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E68u;
        // 0x333e6c: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e68) {
            ctx->pc = 0x333E84u;
            goto label_333e84;
        }
    }
    ctx->pc = 0x333E70u;
label_333e70:
    // 0x333e70: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x333e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x333e74: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x333e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x333e78: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x333e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x333e7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x333e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x333e80: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x333e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_333e84:
    // 0x333e84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x333e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x333e88: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x333e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333e8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x333e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e90: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x333e90u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x333e94: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x333e94u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x333e98: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x333e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x333e9c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x333e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x333ea0: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x333ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x333ea4: 0x2503002c  addiu       $v1, $t0, 0x2C
    ctx->pc = 0x333ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 44));
    // 0x333ea8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x333ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x333eac: 0xe52024  and         $a0, $a3, $a1
    ctx->pc = 0x333eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x333eb0: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x333eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x333eb4: 0xc24825  or          $t1, $a2, $v0
    ctx->pc = 0x333eb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x333eb8: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x333EB8u;
    {
        const bool branch_taken_0x333eb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x333EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333EB8u;
        // 0x333ebc: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333eb8) {
            ctx->pc = 0x333ED0u;
            goto label_333ed0;
        }
    }
    ctx->pc = 0x333EC0u;
    // 0x333ec0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x333ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x333ec4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x333ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x333ec8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x333EC8u;
    {
        const bool branch_taken_0x333ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333EC8u;
        // 0x333ecc: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ec8) {
            ctx->pc = 0x333EE0u;
            goto label_333ee0;
        }
    }
    ctx->pc = 0x333ED0u;
label_333ed0:
    // 0x333ed0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x333ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x333ed4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x333ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x333ed8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x333ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x333edc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x333edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_333ee0:
    // 0x333ee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x333ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x333ee4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x333ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333ee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x333ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333eec: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x333eecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x333ef0: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x333ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x333ef4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x333ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333ef8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x333ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x333efc: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x333efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x333f00: 0x25030034  addiu       $v1, $t0, 0x34
    ctx->pc = 0x333f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 52));
    // 0x333f04: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x333f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x333f08: 0xe52024  and         $a0, $a3, $a1
    ctx->pc = 0x333f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x333f0c: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x333f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x333f10: 0xc24825  or          $t1, $a2, $v0
    ctx->pc = 0x333f10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x333f14: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x333F14u;
    {
        const bool branch_taken_0x333f14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x333F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F14u;
        // 0x333f18: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f14) {
            ctx->pc = 0x333F30u;
            goto label_333f30;
        }
    }
    ctx->pc = 0x333F1Cu;
    // 0x333f1c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x333f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x333f20: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x333f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x333f24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x333F24u;
    {
        const bool branch_taken_0x333f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F24u;
        // 0x333f28: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f24) {
            ctx->pc = 0x333F40u;
            goto label_333f40;
        }
    }
    ctx->pc = 0x333F2Cu;
    // 0x333f2c: 0x0  nop
    ctx->pc = 0x333f2cu;
    // NOP
label_333f30:
    // 0x333f30: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x333f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x333f34: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x333f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x333f38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x333f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x333f3c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x333f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_333f40:
    // 0x333f40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x333f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x333f44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x333f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333f48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x333f48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f4c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x333f4cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x333f50: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x333f50u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x333f54: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x333f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f58: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x333f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x333f5c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x333f5cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x333f60: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x333f60u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x333f64: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x333f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x333f68: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x333f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x333f6c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x333f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x333f70: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x333f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x333f74: 0x2502003c  addiu       $v0, $t0, 0x3C
    ctx->pc = 0x333f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 60));
    // 0x333f78: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x333f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x333f7c: 0xad060020  sw          $a2, 0x20($t0)
    ctx->pc = 0x333f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 6));
    // 0x333f80: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x333f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x333f84: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x333f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x333f88: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x333F88u;
    {
        const bool branch_taken_0x333f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x333F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F88u;
        // 0x333f8c: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f88) {
            ctx->pc = 0x333FA0u;
            goto label_333fa0;
        }
    }
    ctx->pc = 0x333F90u;
    // 0x333f90: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x333f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x333f94: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x333f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x333f98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x333F98u;
    {
        const bool branch_taken_0x333f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F98u;
        // 0x333f9c: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f98) {
            ctx->pc = 0x333FB0u;
            goto label_333fb0;
        }
    }
    ctx->pc = 0x333FA0u;
label_333fa0:
    // 0x333fa0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x333fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x333fa4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x333fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x333fa8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x333fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x333fac: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x333facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_333fb0:
    // 0x333fb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x333fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x333fb4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x333fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333fb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x333fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333fbc: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x333fbcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x333fc0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x333fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x333fc4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x333fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333fc8: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x333fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x333fcc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x333fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x333fd0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x333fd0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x333fd4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x333fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x333fd8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x333fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x333fdc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x333fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x333fe0: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x333fe0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x333fe4: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x333fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x333fe8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x333fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x333fec: 0x3e00008  jr          $ra
    ctx->pc = 0x333FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333FECu;
        // 0x333ff0: 0xad060014  sw          $a2, 0x14($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333FF4u;
    // 0x333ff4: 0x0  nop
    ctx->pc = 0x333ff4u;
    // NOP
    ctx->pc = 0x333ff8u;
}
