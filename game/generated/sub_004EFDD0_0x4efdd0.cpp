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

// Function: sub_004EFDD0
// Address: 0x4efdd0 - 0x4efee8
void sub_004EFDD0_0x4efdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFDD0_0x4efdd0");
#endif

    ctx->pc = 0x4efdd0u;

    // 0x4efdd0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4efdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4efdd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efdd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4efdd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4efddc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4efddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4efde0: 0x8c461228  lw          $a2, 0x1228($v0)
    ctx->pc = 0x4efde0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1228u));
    // 0x4efde4: 0x24a51210  addiu       $a1, $a1, 0x1210
    ctx->pc = 0x4efde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4624));
    // 0x4efde8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4efde8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4efdec: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4efdecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4efdf0: 0x84c20160  lh          $v0, 0x160($a2)
    ctx->pc = 0x4efdf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x4efdf4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4efdf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4efdf8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4efdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4efdfc: 0x24c80014  addiu       $t0, $a2, 0x14
    ctx->pc = 0x4efdfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x4efe00: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4efe00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4efe04: 0x24c90018  addiu       $t1, $a2, 0x18
    ctx->pc = 0x4efe04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x4efe08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4efe08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4efe0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4efe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4efe10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4efe10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4efe14: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4efe14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4efe18: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4efe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4efe1c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4efe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4efe20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4efe20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4efe24: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4efe24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4efe28: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4efe28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4efe2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EFE2Cu;
    {
        const bool branch_taken_0x4efe2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFE2Cu;
        // 0x4efe30: 0x24ca01bc  addiu       $t2, $a2, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efe2c) {
            ctx->pc = 0x4EFE40u;
            goto label_4efe40;
        }
    }
    ctx->pc = 0x4EFE34u;
    // 0x4efe34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efe34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efe38: 0x813c222  j           func_4F0888
    ctx->pc = 0x4EFE38u;
    ctx->pc = 0x4EFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFE38u;
    // 0x4efe3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0888u;
    sub_004F0888_0x4f0888(rdram, ctx, runtime); return;
    ctx->pc = 0x4EFE40u;
label_4efe40:
    // 0x4efe40: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4efe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4efe44: 0x240204ee  addiu       $v0, $zero, 0x4EE
    ctx->pc = 0x4efe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1262));
    // 0x4efe48: 0xacc70128  sw          $a3, 0x128($a2)
    ctx->pc = 0x4efe48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 296), GPR_U32(ctx, 7));
    // 0x4efe4c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4efe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4efe50: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x4efe50u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4efe54: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4efe54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4efe58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efe58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efe5c: 0xa4c30164  sh          $v1, 0x164($a2)
    ctx->pc = 0x4efe5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4efe60: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4efe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4efe64: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4efe64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4efe68: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4efe68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4efe6c: 0xa4c20166  sh          $v0, 0x166($a2)
    ctx->pc = 0x4efe6cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 358), (uint16_t)GPR_U32(ctx, 2));
    // 0x4efe70: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4efe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4efe74: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4efe74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4efe78: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4efe78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4efe7c: 0xa4c3011a  sh          $v1, 0x11A($a2)
    ctx->pc = 0x4efe7cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 282), (uint16_t)GPR_U32(ctx, 3));
    // 0x4efe80: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4efe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4efe84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4efe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4efe88: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4efe88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4efe8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4efe8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4efe90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4efe90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4efe94: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4efe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4efe98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4efe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4efe9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4efe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4efea0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4efea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4efea4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4efea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4efea8: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x4efea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x4efeac: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4efeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4efeb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4efeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4efeb4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4efeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4efeb8: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x4efeb8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4efebc: 0xa4c5011e  sh          $a1, 0x11E($a2)
    ctx->pc = 0x4efebcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 286), (uint16_t)GPR_U32(ctx, 5));
    // 0x4efec0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4efec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4efec4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4efec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4efec8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4efec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4efecc: 0xa4c20122  sh          $v0, 0x122($a2)
    ctx->pc = 0x4efeccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 290), (uint16_t)GPR_U32(ctx, 2));
    // 0x4efed0: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x4efed0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4efed4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4efed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4efed8: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4efed8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4efedc: 0x813bfba  j           func_4EFEE8
    ctx->pc = 0x4EFEDCu;
    ctx->pc = 0x4EFEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFEDCu;
    // 0x4efee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFEE8u;
    sub_004EFEE8_0x4efee8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EFEE4u;
    // 0x4efee4: 0x0  nop
    ctx->pc = 0x4efee4u;
    // NOP
    ctx->pc = 0x4efee8u;
}
