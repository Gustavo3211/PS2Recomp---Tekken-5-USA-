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

// Function: sub_002DEE80
// Address: 0x2dee80 - 0x2defd0
void sub_002DEE80_0x2dee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEE80_0x2dee80");
#endif

    switch (ctx->pc) {
        case 0x2deee0u: goto label_2deee0;
        case 0x2deeecu: goto label_2deeec;
        case 0x2def0cu: goto label_2def0c;
        case 0x2def20u: goto label_2def20;
        default: break;
    }

    ctx->pc = 0x2dee80u;

    // 0x2dee80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dee84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dee88: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2dee88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dee8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dee90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2dee90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2dee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2dee98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dee98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2dee9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2deea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2deea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2deea4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2deea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2deea8: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x2deea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2deeac: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x2deeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2deeb0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DEEB0u;
    {
        const bool branch_taken_0x2deeb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEB0u;
        // 0x2deeb4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deeb0) {
            ctx->pc = 0x2DEEC4u;
            goto label_2deec4;
        }
    }
    ctx->pc = 0x2DEEB8u;
    // 0x2deeb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2deeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deebc: 0x1103003b  beq         $t0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2DEEBCu;
    {
        const bool branch_taken_0x2deebc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEBCu;
        // 0x2deec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deebc) {
            ctx->pc = 0x2DEFACu;
            goto label_2defac;
        }
    }
    ctx->pc = 0x2DEEC4u;
label_2deec4:
    // 0x2deec4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2deec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2deec8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2deec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2deecc: 0x2442ea20  addiu       $v0, $v0, -0x15E0
    ctx->pc = 0x2deeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x2deed0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2deed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deed4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2deed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2deed8: 0xc0b7cf2  jal         func_2DF3C8
    ctx->pc = 0x2DEED8u;
    SET_GPR_U32(ctx, 31, 0x2DEEE0u);
    ctx->pc = 0x2DEEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEED8u;
    // 0x2deedc: 0xae630050  sw          $v1, 0x50($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3C8u, 0x2DEED8u, 0x2DEEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEE0u;
label_2deee0:
    // 0x2deee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2deee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deee4: 0xc0b798e  jal         func_2DE638
    ctx->pc = 0x2DEEE4u;
    SET_GPR_U32(ctx, 31, 0x2DEEECu);
    ctx->pc = 0x2DEEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEE4u;
    // 0x2deee8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE638u, 0x2DEEE4u, 0x2DEEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEECu;
label_2deeec:
    // 0x2deeec: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2deeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2deef0: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x2deef0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2deef4: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x2deef4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2deef8: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DEEF8u;
    {
        const bool branch_taken_0x2deef8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2deef8) {
            ctx->pc = 0x2DEF18u;
            goto label_2def18;
        }
    }
    ctx->pc = 0x2DEF00u;
    // 0x2def00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2def00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2def04: 0xc0b7af0  jal         func_2DEBC0
    ctx->pc = 0x2DEF04u;
    SET_GPR_U32(ctx, 31, 0x2DEF0Cu);
    ctx->pc = 0x2DEF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEF04u;
    // 0x2def08: 0x8e510028  lw          $s1, 0x28($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEBC0u, 0x2DEF04u, 0x2DEF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF0Cu;
label_2def0c:
    // 0x2def0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2def0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2def10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DEF10u;
    {
        const bool branch_taken_0x2def10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF10u;
        // 0x2def14: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def10) {
            ctx->pc = 0x2DEF44u;
            goto label_2def44;
        }
    }
    ctx->pc = 0x2DEF18u;
label_2def18:
    // 0x2def18: 0x1a200008  blez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DEF18u;
    {
        const bool branch_taken_0x2def18 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2DEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF18u;
        // 0x2def1c: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def18) {
            ctx->pc = 0x2DEF3Cu;
            goto label_2def3c;
        }
    }
    ctx->pc = 0x2DEF20u;
label_2def20:
    // 0x2def20: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2def20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2def24: 0x0  nop
    ctx->pc = 0x2def24u;
    // NOP
    // 0x2def28: 0x0  nop
    ctx->pc = 0x2def28u;
    // NOP
    // 0x2def2c: 0x0  nop
    ctx->pc = 0x2def2cu;
    // NOP
    // 0x2def30: 0x0  nop
    ctx->pc = 0x2def30u;
    // NOP
    // 0x2def34: 0x1e20fffa  bgtz        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DEF34u;
    {
        const bool branch_taken_0x2def34 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2DEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF34u;
        // 0x2def38: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def34) {
            ctx->pc = 0x2DEF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2def20;
        }
    }
    ctx->pc = 0x2DEF3Cu;
label_2def3c:
    // 0x2def3c: 0x8c910020  lw          $s1, 0x20($a0)
    ctx->pc = 0x2def3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2def40: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2def40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2def44:
    // 0x2def44: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2def44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2def48: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2def48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2def4c: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x2def4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
    // 0x2def50: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2def50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2def54: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x2def54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x2def58: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2def58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2def5c: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x2def5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x2def60: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x2def60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x2def64: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DEF64u;
    {
        const bool branch_taken_0x2def64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF64u;
        // 0x2def68: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def64) {
            ctx->pc = 0x2DEF78u;
            goto label_2def78;
        }
    }
    ctx->pc = 0x2DEF6Cu;
    // 0x2def6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DEF6Cu;
    {
        const bool branch_taken_0x2def6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF6Cu;
        // 0x2def70: 0xac900020  sw          $s0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def6c) {
            ctx->pc = 0x2DEF7Cu;
            goto label_2def7c;
        }
    }
    ctx->pc = 0x2DEF74u;
    // 0x2def74: 0x0  nop
    ctx->pc = 0x2def74u;
    // NOP
label_2def78:
    // 0x2def78: 0xae500028  sw          $s0, 0x28($s2)
    ctx->pc = 0x2def78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 16));
label_2def7c:
    // 0x2def7c: 0x52200002  beql        $s1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DEF7Cu;
    {
        const bool branch_taken_0x2def7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2def7c) {
            ctx->pc = 0x2DEF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEF7Cu;
            // 0x2def80: 0xae500024  sw          $s0, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEF88u;
            goto label_2def88;
        }
    }
    ctx->pc = 0x2DEF84u;
    // 0x2def84: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x2def84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
label_2def88:
    // 0x2def88: 0xae14002c  sw          $s4, 0x2C($s0)
    ctx->pc = 0x2def88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 20));
    // 0x2def8c: 0x2643003c  addiu       $v1, $s2, 0x3C
    ctx->pc = 0x2def8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x2def90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2def90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2def94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2def94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2def98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2def98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2def9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2def9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2defa0: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x2defa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2defa4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2defa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2defa8: 0xae65005c  sw          $a1, 0x5C($s3)
    ctx->pc = 0x2defa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 5));
label_2defac:
    // 0x2defac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2defacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2defb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2defb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2defb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2defb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2defb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2defb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2defbc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2defbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2defc0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2defc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2defc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFC4u;
        // 0x2defc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEFCCu;
    // 0x2defcc: 0x0  nop
    ctx->pc = 0x2defccu;
    // NOP
    ctx->pc = 0x2defd0u;
}
