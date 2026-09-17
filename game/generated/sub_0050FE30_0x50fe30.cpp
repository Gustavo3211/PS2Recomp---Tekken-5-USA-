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

// Function: sub_0050FE30
// Address: 0x50fe30 - 0x510070
void sub_0050FE30_0x50fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050FE30_0x50fe30");
#endif

    switch (ctx->pc) {
        case 0x50ff70u: goto label_50ff70;
        case 0x50ffd8u: goto label_50ffd8;
        default: break;
    }

    ctx->pc = 0x50fe30u;

    // 0x50fe30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50fe34: 0x3c09008f  lui         $t1, 0x8F
    ctx->pc = 0x50fe34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)143 << 16));
    // 0x50fe38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50fe3c: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x50fe3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x50fe40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50fe44: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x50fe44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x50fe48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50fe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50fe4c: 0x3c120090  lui         $s2, 0x90
    ctx->pc = 0x50fe4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)144 << 16));
    // 0x50fe50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50fe50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50fe54: 0x2525c6a0  addiu       $a1, $t1, -0x3960
    ctx->pc = 0x50fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952608));
    // 0x50fe58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50fe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x50fe5c: 0x2642f080  addiu       $v0, $s2, -0xF80
    ctx->pc = 0x50fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963328));
    // 0x50fe60: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x50fe60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x50fe64: 0x8e26c690  lw          $a2, -0x3970($s1)
    ctx->pc = 0x50fe64u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8EC690u));
    // 0x50fe68: 0x84444cc0  lh          $a0, 0x4CC0($v0)
    ctx->pc = 0x50fe68u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x903D40u));
    // 0x50fe6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC6A0u));
    // 0x50fe70: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x50fe70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x50fe74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50fe74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50fe78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50fe78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50fe7c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50fe80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50fe80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50fe84: 0x84c40010  lh          $a0, 0x10($a2)
    ctx->pc = 0x50fe84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x50fe88: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50fe88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50fe8c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x50fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x50fe90: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x50fe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x50fe94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50fe94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50fe98: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50fe9c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50fe9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50fea0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x50FEA0u;
    {
        const bool branch_taken_0x50fea0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FEA0u;
        // 0x50fea4: 0x2607c6a8  addiu       $a3, $s0, -0x3958 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50fea0) {
            ctx->pc = 0x50FEB8u;
            goto label_50feb8;
        }
    }
    ctx->pc = 0x50FEA8u;
    // 0x50fea8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x50fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50feac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x50FEACu;
    {
        const bool branch_taken_0x50feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FEACu;
        // 0x50feb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x50feac) {
            ctx->pc = 0x50FEC0u;
            goto label_50fec0;
        }
    }
    ctx->pc = 0x50FEB4u;
    // 0x50feb4: 0x0  nop
    ctx->pc = 0x50feb4u;
    // NOP
label_50feb8:
    // 0x50feb8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x50feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50febc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x50febcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_50fec0:
    // 0x50fec0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x50fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x50fec4: 0x2607c6a8  addiu       $a3, $s0, -0x3958
    ctx->pc = 0x50fec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952616));
    // 0x50fec8: 0x2526c6a0  addiu       $a2, $t1, -0x3960
    ctx->pc = 0x50fec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952608));
    // 0x50fecc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x50feccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x50fed0: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x50fed0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50fed4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x50fed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50fed8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x50fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50fedc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x50fedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x50fee0: 0x8644f080  lh          $a0, -0xF80($s2)
    ctx->pc = 0x50fee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294963328)));
    // 0x50fee4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50fee8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50fee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50feec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50feecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50fef0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x50fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50fef4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x50fef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x50fef8: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x50fef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x50fefc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50fefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50ff00: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50ff00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50ff04: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x50ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x50ff08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50ff08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50ff0c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x50ff0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x50ff10: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x50ff10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50ff14: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x50ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x50ff18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x50ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x50ff1c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x50ff1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x50ff20: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x50ff20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50ff24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50ff24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50ff28: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x50ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x50ff2c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x50ff2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50ff30: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x50ff30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x50ff34: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x50FF34u;
    {
        const bool branch_taken_0x50ff34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FF34u;
        // 0x50ff38: 0x3c13008f  lui         $s3, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ff34) {
            ctx->pc = 0x51000Cu;
            goto label_51000c;
        }
    }
    ctx->pc = 0x50FF3Cu;
    // 0x50ff3c: 0x8e24c690  lw          $a0, -0x3970($s1)
    ctx->pc = 0x50ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952592)));
    // 0x50ff40: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50ff44: 0x2446c69c  addiu       $a2, $v0, -0x3964
    ctx->pc = 0x50ff44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952604));
    // 0x50ff48: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x50ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x50ff4c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x50ff4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC69Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC69Cu, _value); } while (0);
    // 0x50ff50: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x50ff50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50ff54: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x50FF54u;
    {
        const bool branch_taken_0x50ff54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FF54u;
        // 0x50ff58: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ff54) {
            ctx->pc = 0x50FFE0u;
            goto label_50ffe0;
        }
    }
    ctx->pc = 0x50FF5Cu;
    // 0x50ff5c: 0x3c13008f  lui         $s3, 0x8F
    ctx->pc = 0x50ff5cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
    // 0x50ff60: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x50ff60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ff64: 0x2666c6ac  addiu       $a2, $s3, -0x3954
    ctx->pc = 0x50ff64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952620));
    // 0x50ff68: 0x24c03  sra         $t1, $v0, 16
    ctx->pc = 0x50ff68u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50ff6c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x50ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_50ff70:
    // 0x50ff70: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x50ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50ff74: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x50ff74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50ff78: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x50ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50ff7c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x50ff7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x50ff80: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x50ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x50ff84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50ff88: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x50ff88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50ff8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50ff8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50ff90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50ff90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50ff94: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x50ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x50ff98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50ff98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50ff9c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50ff9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50ffa0: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x50ffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x50ffa4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x50ffa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x50ffa8: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x50ffa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50ffac: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x50ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x50ffb0: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x50ffb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50ffb4: 0x10490006  beq         $v0, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x50FFB4u;
    {
        const bool branch_taken_0x50ffb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x50ffb4) {
            ctx->pc = 0x50FFD0u;
            goto label_50ffd0;
        }
    }
    ctx->pc = 0x50FFBCu;
    // 0x50ffbc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50ffbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50ffc0: 0x443ffeb  bgezl       $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x50FFC0u;
    {
        const bool branch_taken_0x50ffc0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x50ffc0) {
            ctx->pc = 0x50FFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50FFC0u;
            // 0x50ffc4: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50FF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50ff70;
        }
    }
    ctx->pc = 0x50FFC8u;
    // 0x50ffc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x50FFC8u;
    {
        const bool branch_taken_0x50ffc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FFC8u;
        // 0x50ffcc: 0x2604c6a8  addiu       $a0, $s0, -0x3958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ffc8) {
            ctx->pc = 0x50FFE4u;
            goto label_50ffe4;
        }
    }
    ctx->pc = 0x50FFD0u;
label_50ffd0:
    // 0x50ffd0: 0xc1444c0  jal         func_511300
    ctx->pc = 0x50FFD0u;
    SET_GPR_U32(ctx, 31, 0x50FFD8u);
    ctx->pc = 0x511300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511300u, 0x50FFD0u, 0x50FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50FFD8u;
label_50ffd8:
    // 0x50ffd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x50FFD8u;
    {
        const bool branch_taken_0x50ffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FFD8u;
        // 0x50ffdc: 0x2604c6a8  addiu       $a0, $s0, -0x3958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ffd8) {
            ctx->pc = 0x50FFE4u;
            goto label_50ffe4;
        }
    }
    ctx->pc = 0x50FFE0u;
label_50ffe0:
    // 0x50ffe0: 0x2604c6a8  addiu       $a0, $s0, -0x3958
    ctx->pc = 0x50ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952616));
label_50ffe4:
    // 0x50ffe4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x50ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x50ffe8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50ffe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50ffec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x50ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50fff0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x50fff4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x50fff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x50fff8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50fff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50fffc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50fffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x510000: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x510000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x510004: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x510004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x510008: 0xa642f080  sh          $v0, -0xF80($s2)
    ctx->pc = 0x510008u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4294963328), (uint16_t)GPR_U32(ctx, 2));
label_51000c:
    // 0x51000c: 0x8e28c690  lw          $t0, -0x3970($s1)
    ctx->pc = 0x51000cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952592)));
    // 0x510010: 0x2666c6ac  addiu       $a2, $s3, -0x3954
    ctx->pc = 0x510010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952620));
    // 0x510014: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x510014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x510018: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x510018u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x51001c: 0x85040008  lh          $a0, 0x8($t0)
    ctx->pc = 0x51001cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x510020: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x510020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x510024: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x510024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x510028: 0x24a5c6b0  addiu       $a1, $a1, -0x3950
    ctx->pc = 0x510028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952624));
    // 0x51002c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x51002cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x510030: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x510030u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC6B0u));
    // 0x510034: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x510034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x510038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x510038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51003c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x51003cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x510040: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x510040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x510044: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x510044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x510048: 0x8502000a  lh          $v0, 0xA($t0)
    ctx->pc = 0x510048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x51004c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x51004cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x510050: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x510050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x510054: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x510054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x510058: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x510058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51005c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x51005cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x510060: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x510060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x510064: 0x8143e3e  j           func_50F8F8
    ctx->pc = 0x510064u;
    ctx->pc = 0x510068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510064u;
    // 0x510068: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50F8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F8F8u, 0x510064u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x51006Cu;
    // 0x51006c: 0x0  nop
    ctx->pc = 0x51006cu;
    // NOP
    ctx->pc = 0x510070u;
}
