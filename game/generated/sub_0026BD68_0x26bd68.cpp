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

// Function: sub_0026BD68
// Address: 0x26bd68 - 0x26be18
void sub_0026BD68_0x26bd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BD68_0x26bd68");
#endif

    switch (ctx->pc) {
        case 0x26bde8u: goto label_26bde8;
        default: break;
    }

    ctx->pc = 0x26bd68u;

    // 0x26bd68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26bd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26bd6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26bd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26bd70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26bd74: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x26bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26bd78: 0x94a20026  lhu         $v0, 0x26($a1)
    ctx->pc = 0x26bd78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x26bd7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26BD7Cu;
    {
        const bool branch_taken_0x26bd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD7Cu;
        // 0x26bd80: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd7c) {
            ctx->pc = 0x26BDA8u;
            goto label_26bda8;
        }
    }
    ctx->pc = 0x26BD84u;
    // 0x26bd84: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x26bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x26bd88: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x26bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x26bd8c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26BD8Cu;
    {
        const bool branch_taken_0x26bd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bd8c) {
            ctx->pc = 0x26BD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BD8Cu;
            // 0x26bd90: 0x94a20044  lhu         $v0, 0x44($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BDACu;
            goto label_26bdac;
        }
    }
    ctx->pc = 0x26BD94u;
    // 0x26bd94: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x26bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x26bd98: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x26bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x26bd9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26bd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26bda0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x26BDA0u;
    {
        const bool branch_taken_0x26bda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDA0u;
        // 0x26bda4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bda0) {
            ctx->pc = 0x26BE04u;
            goto label_26be04;
        }
    }
    ctx->pc = 0x26BDA8u;
label_26bda8:
    // 0x26bda8: 0x94a20044  lhu         $v0, 0x44($a1)
    ctx->pc = 0x26bda8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
label_26bdac:
    // 0x26bdac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26BDACu;
    {
        const bool branch_taken_0x26bdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDACu;
        // 0x26bdb0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bdac) {
            ctx->pc = 0x26BE00u;
            goto label_26be00;
        }
    }
    ctx->pc = 0x26BDB4u;
    // 0x26bdb4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x26bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x26bdb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26bdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26bdbc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26BDBCu;
    {
        const bool branch_taken_0x26bdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDBCu;
        // 0x26bdc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bdbc) {
            ctx->pc = 0x26BE04u;
            goto label_26be04;
        }
    }
    ctx->pc = 0x26BDC4u;
    // 0x26bdc4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x26bdc8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x26bdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x26bdcc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26BDCCu;
    {
        const bool branch_taken_0x26bdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDCCu;
        // 0x26bdd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bdcc) {
            ctx->pc = 0x26BE04u;
            goto label_26be04;
        }
    }
    ctx->pc = 0x26BDD4u;
    // 0x26bdd4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26bdd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x26bdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26bddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bde0: 0xc09ae62  jal         func_26B988
    ctx->pc = 0x26BDE0u;
    SET_GPR_U32(ctx, 31, 0x26BDE8u);
    ctx->pc = 0x26BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BDE0u;
    // 0x26bde4: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B988u, 0x26BDE0u, 0x26BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BDE8u;
label_26bde8:
    // 0x26bde8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BDE8u;
    {
        const bool branch_taken_0x26bde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDE8u;
        // 0x26bdec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bde8) {
            ctx->pc = 0x26BE04u;
            goto label_26be04;
        }
    }
    ctx->pc = 0x26BDF0u;
    // 0x26bdf0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26bdf4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x26bdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x26bdf8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x26BDF8u;
    {
        const bool branch_taken_0x26bdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bdf8) {
            ctx->pc = 0x26BDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BDF8u;
            // 0x26bdfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE04u;
            goto label_26be04;
        }
    }
    ctx->pc = 0x26BE00u;
label_26be00:
    // 0x26be00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26be00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26be04:
    // 0x26be04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26be04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26be08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26be08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26be0c: 0x3e00008  jr          $ra
    ctx->pc = 0x26BE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE0Cu;
        // 0x26be10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BE14u;
    // 0x26be14: 0x0  nop
    ctx->pc = 0x26be14u;
    // NOP
    ctx->pc = 0x26be18u;
}
