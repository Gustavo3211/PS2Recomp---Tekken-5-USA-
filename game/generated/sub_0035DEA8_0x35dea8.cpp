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

// Function: sub_0035DEA8
// Address: 0x35dea8 - 0x35dfe8
void sub_0035DEA8_0x35dea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DEA8_0x35dea8");
#endif

    switch (ctx->pc) {
        case 0x35dec0u: goto label_35dec0;
        case 0x35df08u: goto label_35df08;
        case 0x35df24u: goto label_35df24;
        case 0x35df40u: goto label_35df40;
        case 0x35df54u: goto label_35df54;
        case 0x35dfb4u: goto label_35dfb4;
        case 0x35dfd0u: goto label_35dfd0;
        default: break;
    }

    ctx->pc = 0x35dea8u;

    // 0x35dea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35dea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35deac: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x35deacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x35deb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35deb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35deb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35deb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35deb8: 0xc0d60f0  jal         func_3583C0
    ctx->pc = 0x35DEB8u;
    SET_GPR_U32(ctx, 31, 0x35DEC0u);
    ctx->pc = 0x35DEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DEB8u;
    // 0x35debc: 0x48603  sra         $s0, $a0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3583C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3583C0u, 0x35DEB8u, 0x35DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DEC0u;
label_35dec0:
    // 0x35dec0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x35dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x35dec4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35dec8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35decc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x35deccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x35ded0: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x35ded0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x35ded4: 0x24845d38  addiu       $a0, $a0, 0x5D38
    ctx->pc = 0x35ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23864));
    // 0x35ded8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35DED8u;
    {
        const bool branch_taken_0x35ded8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DED8u;
        // 0x35dedc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ded8) {
            ctx->pc = 0x35DF1Cu;
            goto label_35df1c;
        }
    }
    ctx->pc = 0x35DEE0u;
    // 0x35dee0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35dee4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x35DEE4u;
    {
        const bool branch_taken_0x35dee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dee4) {
            ctx->pc = 0x35DEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DEE4u;
            // 0x35dee8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DF18u;
            goto label_35df18;
        }
    }
    ctx->pc = 0x35DEECu;
    // 0x35deec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35deecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35def0: 0x5c40000f  bgtzl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35DEF0u;
    {
        const bool branch_taken_0x35def0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x35def0) {
            ctx->pc = 0x35DEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DEF0u;
            // 0x35def4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DF30u;
            goto label_35df30;
        }
    }
    ctx->pc = 0x35DEF8u;
    // 0x35def8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35def8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35defc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35defcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35df00: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35DF00u;
    SET_GPR_U32(ctx, 31, 0x35DF08u);
    ctx->pc = 0x35DF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF00u;
    // 0x35df04: 0x24845d70  addiu       $a0, $a0, 0x5D70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35DF00u, 0x35DF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF08u;
label_35df08:
    // 0x35df08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35df08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35df0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35DF0Cu;
    {
        const bool branch_taken_0x35df0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF0Cu;
        // 0x35df10: 0x34420013  ori         $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35df0c) {
            ctx->pc = 0x35DF2Cu;
            goto label_35df2c;
        }
    }
    ctx->pc = 0x35DF14u;
    // 0x35df14: 0x0  nop
    ctx->pc = 0x35df14u;
    // NOP
label_35df18:
    // 0x35df18: 0x24845dc8  addiu       $a0, $a0, 0x5DC8
    ctx->pc = 0x35df18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24008));
label_35df1c:
    // 0x35df1c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35DF1Cu;
    SET_GPR_U32(ctx, 31, 0x35DF24u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35DF1Cu, 0x35DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF24u;
label_35df24:
    // 0x35df24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35df24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35df28: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x35df28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
label_35df2c:
    // 0x35df2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35df2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35df30:
    // 0x35df30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35df30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35df34: 0x3e00008  jr          $ra
    ctx->pc = 0x35DF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF34u;
        // 0x35df38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DF3Cu;
    // 0x35df3c: 0x0  nop
    ctx->pc = 0x35df3cu;
    // NOP
label_35df40:
    // 0x35df40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35df44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35df48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35df4c: 0xc0d8b04  jal         func_362C10
    ctx->pc = 0x35DF4Cu;
    SET_GPR_U32(ctx, 31, 0x35DF54u);
    ctx->pc = 0x35DF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF4Cu;
    // 0x35df50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C10u, 0x35DF4Cu, 0x35DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF54u;
label_35df54:
    // 0x35df54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35df54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35df58: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35df58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35df5c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x35df5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35df60: 0x24845e68  addiu       $a0, $a0, 0x5E68
    ctx->pc = 0x35df60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24168));
    // 0x35df64: 0x18c00018  blez        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x35DF64u;
    {
        const bool branch_taken_0x35df64 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x35DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF64u;
        // 0x35df68: 0x206102a  slt         $v0, $s0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35df64) {
            ctx->pc = 0x35DFC8u;
            goto label_35dfc8;
        }
    }
    ctx->pc = 0x35DF6Cu;
    // 0x35df6c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35DF6Cu;
    {
        const bool branch_taken_0x35df6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF6Cu;
        // 0x35df70: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35df6c) {
            ctx->pc = 0x35DFC0u;
            goto label_35dfc0;
        }
    }
    ctx->pc = 0x35DF74u;
    // 0x35df74: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x35df74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x35df78: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x35df78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x35df7c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x35DF7Cu;
    {
        const bool branch_taken_0x35df7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF7Cu;
        // 0x35df80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35df7c) {
            ctx->pc = 0x35DFC4u;
            goto label_35dfc4;
        }
    }
    ctx->pc = 0x35DF84u;
    // 0x35df84: 0x206001a  div         $zero, $s0, $a2
    ctx->pc = 0x35df84u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35df88: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x35df88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x35df8c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35df90: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35DF90u;
    {
        const bool branch_taken_0x35df90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x35df90) {
            ctx->pc = 0x35DF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DF90u;
            // 0x35df94: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DF98u;
            goto label_35df98;
        }
    }
    ctx->pc = 0x35DF98u;
label_35df98:
    // 0x35df98: 0x24845e40  addiu       $a0, $a0, 0x5E40
    ctx->pc = 0x35df98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24128));
    // 0x35df9c: 0x1812  mflo        $v1
    ctx->pc = 0x35df9cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x35dfa0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x35dfa0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35dfa4: 0x1012  mflo        $v0
    ctx->pc = 0x35dfa4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x35dfa8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x35dfa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35dfac: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35DFACu;
    SET_GPR_U32(ctx, 31, 0x35DFB4u);
    ctx->pc = 0x35DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DFACu;
    // 0x35dfb0: 0xa782c7dc  sh          $v0, -0x3824($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294952924), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35DFACu, 0x35DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DFB4u;
label_35dfb4:
    // 0x35dfb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35DFB4u;
    {
        const bool branch_taken_0x35dfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DFB4u;
        // 0x35dfb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dfb4) {
            ctx->pc = 0x35DFD4u;
            goto label_35dfd4;
        }
    }
    ctx->pc = 0x35DFBCu;
    // 0x35dfbc: 0x0  nop
    ctx->pc = 0x35dfbcu;
    // NOP
label_35dfc0:
    // 0x35dfc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35dfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35dfc4:
    // 0x35dfc4: 0x24845e08  addiu       $a0, $a0, 0x5E08
    ctx->pc = 0x35dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24072));
label_35dfc8:
    // 0x35dfc8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35DFC8u;
    SET_GPR_U32(ctx, 31, 0x35DFD0u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35DFC8u, 0x35DFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DFD0u;
label_35dfd0:
    // 0x35dfd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_35dfd4:
    // 0x35dfd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35dfd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35dfd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35dfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35dfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x35DFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DFDCu;
        // 0x35dfe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DFE4u;
    // 0x35dfe4: 0x0  nop
    ctx->pc = 0x35dfe4u;
    // NOP
    ctx->pc = 0x35dfe8u;
}
