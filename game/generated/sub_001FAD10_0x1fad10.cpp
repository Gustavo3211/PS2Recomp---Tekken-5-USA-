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

// Function: sub_001FAD10
// Address: 0x1fad10 - 0x1fae30
void sub_001FAD10_0x1fad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAD10_0x1fad10");
#endif

    ctx->pc = 0x1fad10u;

    // 0x1fad10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fad14: 0x24030512  addiu       $v1, $zero, 0x512
    ctx->pc = 0x1fad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1fad18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fad1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fad20: 0x94450150  lhu         $a1, 0x150($v0)
    ctx->pc = 0x1fad20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x1fad24: 0x10a30024  beq         $a1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1FAD24u;
    {
        const bool branch_taken_0x1fad24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD24u;
        // 0x1fad28: 0x28a20513  slti        $v0, $a1, 0x513 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad24) {
            ctx->pc = 0x1FADB8u;
            goto label_1fadb8;
        }
    }
    ctx->pc = 0x1FAD2Cu;
    // 0x1fad2c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FAD2Cu;
    {
        const bool branch_taken_0x1fad2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD2Cu;
        // 0x1fad30: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad2c) {
            ctx->pc = 0x1FAD78u;
            goto label_1fad78;
        }
    }
    ctx->pc = 0x1FAD34u;
    // 0x1fad34: 0x24020217  addiu       $v0, $zero, 0x217
    ctx->pc = 0x1fad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x1fad38: 0x10a20025  beq         $a1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FAD38u;
    {
        const bool branch_taken_0x1fad38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD38u;
        // 0x1fad3c: 0x28a20218  slti        $v0, $a1, 0x218 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)536) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad38) {
            ctx->pc = 0x1FADD0u;
            goto label_1fadd0;
        }
    }
    ctx->pc = 0x1FAD40u;
    // 0x1fad40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAD40u;
    {
        const bool branch_taken_0x1fad40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD40u;
        // 0x1fad44: 0x2402031f  addiu       $v0, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad40) {
            ctx->pc = 0x1FAD60u;
            goto label_1fad60;
        }
    }
    ctx->pc = 0x1FAD48u;
    // 0x1fad48: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x1fad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x1fad4c: 0x10a2002c  beq         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1FAD4Cu;
    {
        const bool branch_taken_0x1fad4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD4Cu;
        // 0x1fad50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad4c) {
            ctx->pc = 0x1FAE00u;
            goto label_1fae00;
        }
    }
    ctx->pc = 0x1FAD54u;
    // 0x1fad54: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1FAD54u;
    {
        const bool branch_taken_0x1fad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fad54) {
            ctx->pc = 0x1FAE28u;
            goto label_1fae28;
        }
    }
    ctx->pc = 0x1FAD5Cu;
    // 0x1fad5c: 0x0  nop
    ctx->pc = 0x1fad5cu;
    // NOP
label_1fad60:
    // 0x1fad60: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FAD60u;
    {
        const bool branch_taken_0x1fad60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD60u;
        // 0x1fad64: 0x2402041f  addiu       $v0, $zero, 0x41F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad60) {
            ctx->pc = 0x1FADE8u;
            goto label_1fade8;
        }
    }
    ctx->pc = 0x1FAD68u;
    // 0x1fad68: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FAD68u;
    {
        const bool branch_taken_0x1fad68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD68u;
        // 0x1fad6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad68) {
            ctx->pc = 0x1FADE8u;
            goto label_1fade8;
        }
    }
    ctx->pc = 0x1FAD70u;
    // 0x1fad70: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1FAD70u;
    {
        const bool branch_taken_0x1fad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fad70) {
            ctx->pc = 0x1FAE28u;
            goto label_1fae28;
        }
    }
    ctx->pc = 0x1FAD78u;
label_1fad78:
    // 0x1fad78: 0x10a20025  beq         $a1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FAD78u;
    {
        const bool branch_taken_0x1fad78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD78u;
        // 0x1fad7c: 0x28a20807  slti        $v0, $a1, 0x807 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2055) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad78) {
            ctx->pc = 0x1FAE10u;
            goto label_1fae10;
        }
    }
    ctx->pc = 0x1FAD80u;
    // 0x1fad80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FAD80u;
    {
        const bool branch_taken_0x1fad80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD80u;
        // 0x1fad84: 0x24020907  addiu       $v0, $zero, 0x907 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2311));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad80) {
            ctx->pc = 0x1FADA8u;
            goto label_1fada8;
        }
    }
    ctx->pc = 0x1FAD88u;
    // 0x1fad88: 0x2402061f  addiu       $v0, $zero, 0x61F
    ctx->pc = 0x1fad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1567));
    // 0x1fad8c: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FAD8Cu;
    {
        const bool branch_taken_0x1fad8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD8Cu;
        // 0x1fad90: 0x24020707  addiu       $v0, $zero, 0x707 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad8c) {
            ctx->pc = 0x1FADD0u;
            goto label_1fadd0;
        }
    }
    ctx->pc = 0x1FAD94u;
    // 0x1fad94: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FAD94u;
    {
        const bool branch_taken_0x1fad94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FAD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD94u;
        // 0x1fad98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad94) {
            ctx->pc = 0x1FAE10u;
            goto label_1fae10;
        }
    }
    ctx->pc = 0x1FAD9Cu;
    // 0x1fad9c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1FAD9Cu;
    {
        const bool branch_taken_0x1fad9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fad9c) {
            ctx->pc = 0x1FAE28u;
            goto label_1fae28;
        }
    }
    ctx->pc = 0x1FADA4u;
    // 0x1fada4: 0x0  nop
    ctx->pc = 0x1fada4u;
    // NOP
label_1fada8:
    // 0x1fada8: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FADA8u;
    {
        const bool branch_taken_0x1fada8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADA8u;
        // 0x1fadac: 0x24020b07  addiu       $v0, $zero, 0xB07 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2823));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fada8) {
            ctx->pc = 0x1FAE10u;
            goto label_1fae10;
        }
    }
    ctx->pc = 0x1FADB0u;
    // 0x1fadb0: 0x14a2001d  bne         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FADB0u;
    {
        const bool branch_taken_0x1fadb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADB0u;
        // 0x1fadb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadb0) {
            ctx->pc = 0x1FAE28u;
            goto label_1fae28;
        }
    }
    ctx->pc = 0x1FADB8u;
label_1fadb8:
    // 0x1fadb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fadb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fadbc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1fadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1fadc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fadc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fadc4: 0x80959fc  j           func_2567F0
    ctx->pc = 0x1FADC4u;
    ctx->pc = 0x1FADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FADC4u;
    // 0x1fadc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2567F0u;
    sub_002567F0_0x2567f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1FADCCu;
    // 0x1fadcc: 0x0  nop
    ctx->pc = 0x1fadccu;
    // NOP
label_1fadd0:
    // 0x1fadd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fadd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fadd4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1fadd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1fadd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fadd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faddc: 0x80959fc  j           func_2567F0
    ctx->pc = 0x1FADDCu;
    ctx->pc = 0x1FADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FADDCu;
    // 0x1fade0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2567F0u;
    sub_002567F0_0x2567f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1FADE4u;
    // 0x1fade4: 0x0  nop
    ctx->pc = 0x1fade4u;
    // NOP
label_1fade8:
    // 0x1fade8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fade8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fadec: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1fadecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1fadf0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fadf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fadf4: 0x80959fc  j           func_2567F0
    ctx->pc = 0x1FADF4u;
    ctx->pc = 0x1FADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FADF4u;
    // 0x1fadf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2567F0u;
    sub_002567F0_0x2567f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1FADFCu;
    // 0x1fadfc: 0x0  nop
    ctx->pc = 0x1fadfcu;
    // NOP
label_1fae00:
    // 0x1fae00: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1fae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1fae04: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fae04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fae08: 0x80959fc  j           func_2567F0
    ctx->pc = 0x1FAE08u;
    ctx->pc = 0x1FAE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE08u;
    // 0x1fae0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2567F0u;
    sub_002567F0_0x2567f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1FAE10u;
label_1fae10:
    // 0x1fae10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fae10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fae14: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1fae14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1fae18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fae1c: 0x80959fc  j           func_2567F0
    ctx->pc = 0x1FAE1Cu;
    ctx->pc = 0x1FAE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE1Cu;
    // 0x1fae20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2567F0u;
    sub_002567F0_0x2567f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1FAE24u;
    // 0x1fae24: 0x0  nop
    ctx->pc = 0x1fae24u;
    // NOP
label_1fae28:
    // 0x1fae28: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE28u;
        // 0x1fae2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAE30u;
}
