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

// Function: sub_00334220
// Address: 0x334220 - 0x3342c8
void sub_00334220_0x334220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334220_0x334220");
#endif

    switch (ctx->pc) {
        case 0x3342b0u: goto label_3342b0;
        default: break;
    }

    ctx->pc = 0x334220u;

    // 0x334220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334224: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x334224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x334228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33422c: 0x2447ff80  addiu       $a3, $v0, -0x80
    ctx->pc = 0x33422cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x334230: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x334230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x334234: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x334234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x334238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33423c: 0x8ce30404  lw          $v1, 0x404($a3)
    ctx->pc = 0x33423cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x440384u));
    // 0x334240: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x334240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x334244: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x334244u;
    {
        const bool branch_taken_0x334244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x334248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334244u;
        // 0x334248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334244) {
            ctx->pc = 0x3342B8u;
            goto label_3342b8;
        }
    }
    ctx->pc = 0x33424Cu;
    // 0x33424c: 0x8ce30404  lw          $v1, 0x404($a3)
    ctx->pc = 0x33424cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1028)));
    // 0x334250: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x334250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334254: 0x8ce20404  lw          $v0, 0x404($a3)
    ctx->pc = 0x334254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1028)));
    // 0x334258: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x334258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33425c: 0x678021  addu        $s0, $v1, $a3
    ctx->pc = 0x33425cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x334260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x334264: 0xace20404  sw          $v0, 0x404($a3)
    ctx->pc = 0x334264u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1028), GPR_U32(ctx, 2));
    // 0x334268: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x334268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x33426c: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x33426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x334270: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x334270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x334274: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x334274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x334278: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x334278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x33427c: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x33427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x334280: 0x8ce30404  lw          $v1, 0x404($a3)
    ctx->pc = 0x334280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1028)));
    // 0x334284: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x334288: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x334288u;
    {
        const bool branch_taken_0x334288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x33428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334288u;
        // 0x33428c: 0xace20400  sw          $v0, 0x400($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334288) {
            ctx->pc = 0x3342B0u;
            goto label_3342b0;
        }
    }
    ctx->pc = 0x334290u;
    // 0x334290: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x334290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x334294: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x334294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x334298: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x334298u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u)); // MMIO: 0x10009000
    // 0x33429c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x33429cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3342a0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3342A0u;
    {
        const bool branch_taken_0x3342a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3342a0) {
            ctx->pc = 0x3342A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3342A0u;
            // 0x3342a4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3342B4u;
            goto label_3342b4;
        }
    }
    ctx->pc = 0x3342A8u;
    // 0x3342a8: 0xc0cd23a  jal         func_3348E8
    ctx->pc = 0x3342A8u;
    SET_GPR_U32(ctx, 31, 0x3342B0u);
    ctx->pc = 0x3348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3348E8u, 0x3342A8u, 0x3342B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342B0u;
label_3342b0:
    // 0x3342b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3342b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3342b4:
    // 0x3342b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3342b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3342b8:
    // 0x3342b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3342b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3342bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3342BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3342C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342BCu;
        // 0x3342c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3342BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3342C4u;
    // 0x3342c4: 0x0  nop
    ctx->pc = 0x3342c4u;
    // NOP
    ctx->pc = 0x3342c8u;
}
