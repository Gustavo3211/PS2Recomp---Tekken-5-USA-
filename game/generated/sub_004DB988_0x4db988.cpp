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

// Function: sub_004DB988
// Address: 0x4db988 - 0x4dc010
void sub_004DB988_0x4db988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB988_0x4db988");
#endif

    switch (ctx->pc) {
        case 0x4db9a0u: goto label_4db9a0;
        case 0x4db9b0u: goto label_4db9b0;
        case 0x4db9c4u: goto label_4db9c4;
        case 0x4dba50u: goto label_4dba50;
        case 0x4dbab8u: goto label_4dbab8;
        case 0x4dbbecu: goto label_4dbbec;
        case 0x4dbdb4u: goto label_4dbdb4;
        case 0x4dbee8u: goto label_4dbee8;
        case 0x4dbf28u: goto label_4dbf28;
        case 0x4dbf50u: goto label_4dbf50;
        case 0x4dbf68u: goto label_4dbf68;
        case 0x4dbfd0u: goto label_4dbfd0;
        case 0x4dbfd8u: goto label_4dbfd8;
        case 0x4dbfe0u: goto label_4dbfe0;
        default: break;
    }

    ctx->pc = 0x4db988u;

    // 0x4db988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db98c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db98cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db998: 0x8136ffe  j           func_4DBFF8
    ctx->pc = 0x4DB998u;
    ctx->pc = 0x4DB99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB998u;
    // 0x4db99c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DBFF8u;
    goto label_4dbff8;
    ctx->pc = 0x4DB9A0u;
label_4db9a0:
    // 0x4db9a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db9a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db9a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB9A8u;
        // 0x4db9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB9B0u;
label_4db9b0:
    // 0x4db9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4db9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4db9b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4db9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4db9b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4db9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4db9bc: 0xc12b5f2  jal         func_4AD7C8
    ctx->pc = 0x4DB9BCu;
    SET_GPR_U32(ctx, 31, 0x4DB9C4u);
    ctx->pc = 0x4DB9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB9BCu;
    // 0x4db9c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4DB9BCu, 0x4DB9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB9C4u;
label_4db9c4:
    // 0x4db9c4: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x4db9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x4db9c8: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4db9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4db9cc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4db9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4db9d0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4db9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4db9d4: 0x24a51120  addiu       $a1, $a1, 0x1120
    ctx->pc = 0x4db9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4384));
    // 0x4db9d8: 0x260901be  addiu       $t1, $s0, 0x1BE
    ctx->pc = 0x4db9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 446));
    // 0x4db9dc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x4db9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4db9e0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4db9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4db9e4: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4db9e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4db9e8: 0x240a001e  addiu       $t2, $zero, 0x1E
    ctx->pc = 0x4db9e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x4db9ec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4db9ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4db9f0: 0x260801bc  addiu       $t0, $s0, 0x1BC
    ctx->pc = 0x4db9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4db9f4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4db9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4db9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db9fc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4db9fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4dba00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4dba00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dba04: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x4dba04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x4dba08: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4dba08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dba0c: 0xa44301be  sh          $v1, 0x1BE($v0)
    ctx->pc = 0x4dba0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dba10: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4dba10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dba14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4dba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dba18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4dba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4dba1c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4dba1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4dba20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dba20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dba24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dba24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dba28: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dba28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dba2c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dba2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dba30: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4dba30u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dba34: 0xa60a014a  sh          $t2, 0x14A($s0)
    ctx->pc = 0x4dba34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 10));
    // 0x4dba38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dba38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dba3c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4dba3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dba40: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4dba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4dba44: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4dba44u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dba48: 0x8136ea8  j           func_4DBAA0
    ctx->pc = 0x4DBA48u;
    ctx->pc = 0x4DBA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBA48u;
    // 0x4dba4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DBAA0u;
    goto label_4dbaa0;
    ctx->pc = 0x4DBA50u;
label_4dba50:
    // 0x4dba50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dba54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4dba54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dba58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dba5c: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4dba5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4dba60: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4dba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4dba64: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4dba64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4dba68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4dba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4dba6c: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4dba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dba70: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DBA70u;
    {
        const bool branch_taken_0x4dba70 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4DBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBA70u;
        // 0x4dba74: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dba70) {
            ctx->pc = 0x4DBA88u;
            goto label_4dba88;
        }
    }
    ctx->pc = 0x4DBA78u;
    // 0x4dba78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dba78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dba7c: 0x8136ea8  j           func_4DBAA0
    ctx->pc = 0x4DBA7Cu;
    ctx->pc = 0x4DBA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBA7Cu;
    // 0x4dba80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DBAA0u;
    goto label_4dbaa0;
    ctx->pc = 0x4DBA84u;
    // 0x4dba84: 0x0  nop
    ctx->pc = 0x4dba84u;
    // NOP
label_4dba88:
    // 0x4dba88: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4dba88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dba8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dba8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dba90: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4dba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4dba94: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4dba94u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dba98: 0x8136ea8  j           func_4DBAA0
    ctx->pc = 0x4DBA98u;
    ctx->pc = 0x4DBA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBA98u;
    // 0x4dba9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DBAA0u;
    goto label_4dbaa0;
    ctx->pc = 0x4DBAA0u;
label_4dbaa0:
    // 0x4dbaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dbaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dbaa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dbaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dbaa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dbaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dbaac: 0x8136eae  j           func_4DBAB8
    ctx->pc = 0x4DBAACu;
    ctx->pc = 0x4DBAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBAACu;
    // 0x4dbab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DBAB8u;
    goto label_4dbab8;
    ctx->pc = 0x4DBAB4u;
    // 0x4dbab4: 0x0  nop
    ctx->pc = 0x4dbab4u;
    // NOP
label_4dbab8:
    // 0x4dbab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dbab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dbabc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4dbabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4dbac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dbac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dbac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dbac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dbac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4dbac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4dbacc: 0x24ad1120  addiu       $t5, $a1, 0x1120
    ctx->pc = 0x4dbaccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 4384));
    // 0x4dbad0: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x4dbad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dbad4: 0x2608015e  addiu       $t0, $s0, 0x15E
    ctx->pc = 0x4dbad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4dbad8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4dbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4dbadc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4dbadcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4dbae0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4dbae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dbae4: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4dbae4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4dbae8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dbae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dbaec: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4dbaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4dbaf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dbaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dbaf4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dbaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dbaf8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dbaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dbafc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4dbafcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dbb00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4dbb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4dbb04: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4dbb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4dbb08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dbb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dbb0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dbb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dbb10: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dbb10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dbb14: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x4dbb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4dbb18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DBB18u;
    {
        const bool branch_taken_0x4dbb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBB18u;
        // 0x4dbb1c: 0x25c71124  addiu       $a3, $t6, 0x1124 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), 4388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbb18) {
            ctx->pc = 0x4DBB30u;
            goto label_4dbb30;
        }
    }
    ctx->pc = 0x4DBB20u;
    // 0x4dbb20: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4dbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4dbb24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4DBB24u;
    {
        const bool branch_taken_0x4dbb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DBB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBB24u;
        // 0x4dbb28: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbb24) {
            ctx->pc = 0x4DBB3Cu;
            goto label_4dbb3c;
        }
    }
    ctx->pc = 0x4DBB2Cu;
    // 0x4dbb2c: 0x0  nop
    ctx->pc = 0x4dbb2cu;
    // NOP
label_4dbb30:
    // 0x4dbb30: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4dbb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4dbb34: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4dbb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4dbb38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4dbb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4dbb3c:
    // 0x4dbb3c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4dbb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4dbb40: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4dbb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4dbb44: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x4dbb44u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x4dbb48: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4dbb48u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4dbb4c: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4dbb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dbb50: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4dbb50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4dbb54: 0x91a70000  lbu         $a3, 0x0($t5)
    ctx->pc = 0x4dbb54u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dbb58: 0x256b112c  addiu       $t3, $t3, 0x112C
    ctx->pc = 0x4dbb58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4396));
    // 0x4dbb5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dbb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dbb60: 0x91c21124  lbu         $v0, 0x1124($t6)
    ctx->pc = 0x4dbb60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4388)));
    // 0x4dbb64: 0x25291130  addiu       $t1, $t1, 0x1130
    ctx->pc = 0x4dbb64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4400));
    // 0x4dbb68: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4dbb68u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4dbb6c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4dbb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4dbb70: 0x354a0511  ori         $t2, $t2, 0x511
    ctx->pc = 0x4dbb70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)1297);
    // 0x4dbb74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4dbb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4dbb78: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x4dbb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dbb7c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4dbb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4dbb80: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4dbb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dbb84: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4dbb84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dbb88: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4dbb88u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dbb8c: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4dbb8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dbb90: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4dbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dbb94: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x4dbb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x4dbb98: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4dbb98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dbb9c: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4dbb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4dbba0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dbba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dbba4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dbba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dbba8: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x4dbba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dbbac: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4dbbacu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4dbbb0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4dbbb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4dbbb4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4dbbb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4dbbb8: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4dbbb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dbbbc: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x4dbbbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x4dbbc0: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x4dbbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x4dbbc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dbbc8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4dbbc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4dbbcc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4dbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4dbbd0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4dbbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4dbbd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4dbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4dbbd8: 0x84637c30  lh          $v1, 0x7C30($v1)
    ctx->pc = 0x4dbbd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 31792)));
    // 0x4dbbdc: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4dbbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4dbbe0: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4dbbe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4dbbe4: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4DBBE4u;
    SET_GPR_U32(ctx, 31, 0x4DBBECu);
    ctx->pc = 0x4DBBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBBE4u;
    // 0x4dbbe8: 0xad680000  sw          $t0, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4DBBE4u, 0x4DBBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBBECu;
label_4dbbec:
    // 0x4dbbec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dbbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dbbf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4dbbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dbbf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dbbf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dbbf8: 0x8136f00  j           func_4DBC00
    ctx->pc = 0x4DBBF8u;
    ctx->pc = 0x4DBBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBBF8u;
    // 0x4dbbfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DBC00u;
    goto label_4dbc00;
    ctx->pc = 0x4DBC00u;
label_4dbc00:
    // 0x4dbc00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4dbc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4dbc04: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4dbc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4dbc08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dbc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dbc0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dbc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dbc10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4dbc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4dbc14: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4dbc14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4dbc18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4dbc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4dbc1c: 0x25081128  addiu       $t0, $t0, 0x1128
    ctx->pc = 0x4dbc1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4392));
    // 0x4dbc20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4dbc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4dbc24: 0x24731124  addiu       $s3, $v1, 0x1124
    ctx->pc = 0x4dbc24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4388));
    // 0x4dbc28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4dbc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4dbc2c: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4dbc2cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4dbc30: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4dbc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4dbc34: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4dbc34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x4dbc38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4dbc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4dbc3c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4dbc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4dbc40: 0x24711120  addiu       $s1, $v1, 0x1120
    ctx->pc = 0x4dbc40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4384));
    // 0x4dbc44: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4dbc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4dbc48: 0x8602011e  lh          $v0, 0x11E($s0)
    ctx->pc = 0x4dbc48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 286)));
    // 0x4dbc4c: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x4dbc4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4dbc50: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4dbc50u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1124u));
    // 0x4dbc54: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x4dbc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x4dbc58: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dbc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dbc5c: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x4dbc5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dbc60: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4dbc60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4dbc64: 0x260f0128  addiu       $t7, $s0, 0x128
    ctx->pc = 0x4dbc64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4dbc68: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4dbc68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4dbc6c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x4dbc6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4dbc70: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4dbc70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4dbc74: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4dbc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4dbc78: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x4dbc78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x4dbc7c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4dbc7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dbc80: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4dbc80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dbc84: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4dbc84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4dbc88: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4dbc88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dbc8c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x4dbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x4dbc90: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4dbc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dbc94: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dbc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dbc98: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4dbc98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4dbc9c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4dbc9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4dbca0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4dbca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4dbca4: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4dbca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4dbca8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4dbca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4dbcac: 0xb45824  and         $t3, $a1, $s4
    ctx->pc = 0x4dbcacu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
    // 0x4dbcb0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4dbcb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4dbcb4: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4dbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4dbcb8: 0x966a0000  lhu         $t2, 0x0($s3)
    ctx->pc = 0x4dbcb8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dbcbc: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4dbcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4dbcc0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4dbcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4dbcc4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dbcc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dbcc8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4dbcc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4dbccc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dbcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dbcd0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4dbcd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dbcd4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4dbcd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4dbcd8: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4dbcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4dbcdc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4dbcdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dbce0: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4dbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4dbce4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x4dbce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x4dbce8: 0x162280b  movn        $a1, $t3, $v0
    ctx->pc = 0x4dbce8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 11));
    // 0x4dbcec: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4dbcecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4dbcf0: 0x95870000  lhu         $a3, 0x0($t4)
    ctx->pc = 0x4dbcf0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dbcf4: 0x671826  xor         $v1, $v1, $a3
    ctx->pc = 0x4dbcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
    // 0x4dbcf8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4dbcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4dbcfc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dbcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dbd00: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4dbd00u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4dbd04: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4dbd04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4dbd08: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4dbd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4dbd0c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4dbd0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4dbd10: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4dbd10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4dbd14: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4dbd14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4dbd18: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4dbd18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dbd1c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4dbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4dbd20: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4dbd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4dbd24: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4dbd24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4dbd28: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4dbd28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4dbd2c: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4dbd2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dbd30: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4dbd30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4dbd34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dbd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dbd38: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4dbd38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dbd3c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4dbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4dbd40: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4dbd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4dbd44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dbd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dbd48: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4dbd48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4dbd4c: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4dbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4dbd50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4dbd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4dbd54: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x4dbd54u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4dbd58: 0x5680a  movz        $t5, $zero, $a1
    ctx->pc = 0x4dbd58u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
    // 0x4dbd5c: 0x4d1026  xor         $v0, $v0, $t5
    ctx->pc = 0x4dbd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 13));
    // 0x4dbd60: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x4dbd60u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x4dbd64: 0x4d1023  subu        $v0, $v0, $t5
    ctx->pc = 0x4dbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x4dbd68: 0x122482b  sltu        $t1, $t1, $v0
    ctx->pc = 0x4dbd68u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4dbd6c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DBD6Cu;
    {
        const bool branch_taken_0x4dbd6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DBD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBD6Cu;
        // 0x4dbd70: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbd6c) {
            ctx->pc = 0x4DBD7Cu;
            goto label_4dbd7c;
        }
    }
    ctx->pc = 0x4DBD74u;
    // 0x4dbd74: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4dbd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x4dbd78: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4dbd78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4dbd7c:
    // 0x4dbd7c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4dbd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dbd80: 0x2605011c  addiu       $a1, $s0, 0x11C
    ctx->pc = 0x4dbd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x4dbd84: 0x4d1026  xor         $v0, $v0, $t5
    ctx->pc = 0x4dbd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 13));
    // 0x4dbd88: 0x4d1023  subu        $v0, $v0, $t5
    ctx->pc = 0x4dbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x4dbd8c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4dbd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4dbd90: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4dbd90u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4dbd94: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4dbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dbd98: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4dbd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4dbd9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4dbd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4dbda0: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4dbda0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4dbda4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dbda4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dbda8: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x4dbda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x4dbdac: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4DBDACu;
    SET_GPR_U32(ctx, 31, 0x4DBDB4u);
    ctx->pc = 0x4DBDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBDACu;
    // 0x4dbdb0: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4DBDACu, 0x4DBDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBDB4u;
label_4dbdb4:
    // 0x4dbdb4: 0x2608016a  addiu       $t0, $s0, 0x16A
    ctx->pc = 0x4dbdb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 362));
    // 0x4dbdb8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4dbdb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dbdbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4dbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4dbdc0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4dbdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dbdc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4dbdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dbdc8: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x4dbdc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x4dbdcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dbdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dbdd0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4dbdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4dbdd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dbdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dbdd8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4dbdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4dbddc: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4dbddcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dbde0: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x4dbde0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4dbde4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DBDE4u;
    {
        const bool branch_taken_0x4dbde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dbde4) {
            ctx->pc = 0x4DBDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DBDE4u;
            // 0x4dbde8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DBE08u;
            goto label_4dbe08;
        }
    }
    ctx->pc = 0x4DBDECu;
    // 0x4dbdec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4dbdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4dbdf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dbdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dbdf4: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x4dbdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x4dbdf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dbdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dbdfc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4dbdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4dbe00: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4dbe00u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dbe04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4dbe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4dbe08:
    // 0x4dbe08: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4dbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4dbe0c: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x4dbe0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4dbe10: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4dbe10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dbe14: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dbe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dbe18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dbe18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dbe1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dbe1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dbe20: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dbe20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dbe24: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dbe24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4dbe28: 0x26050162  addiu       $a1, $s0, 0x162
    ctx->pc = 0x4dbe28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 354));
    // 0x4dbe2c: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x4dbe2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x4dbe30: 0x26060138  addiu       $a2, $s0, 0x138
    ctx->pc = 0x4dbe30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
    // 0x4dbe34: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4dbe34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dbe38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dbe38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dbe3c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4dbe3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4dbe40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4dbe40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4dbe44: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4dbe44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4dbe48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4dbe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4dbe4c: 0x84637c38  lh          $v1, 0x7C38($v1)
    ctx->pc = 0x4dbe4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 31800)));
    // 0x4dbe50: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4dbe50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4dbe54: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dbe54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dbe58: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4dbe58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4dbe5c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4dbe5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dbe60: 0xa6020164  sh          $v0, 0x164($s0)
    ctx->pc = 0x4dbe60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dbe64: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4dbe64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4dbe68: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4dbe68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dbe6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4dbe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4dbe70: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4dbe70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dbe74: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4dbe74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dbe78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dbe7c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4dbe7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4dbe80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4dbe80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4dbe84: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4dbe84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4dbe88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4dbe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4dbe8c: 0x94637c48  lhu         $v1, 0x7C48($v1)
    ctx->pc = 0x4dbe8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 31816)));
    // 0x4dbe90: 0xa6070136  sh          $a3, 0x136($s0)
    ctx->pc = 0x4dbe90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 7));
    // 0x4dbe94: 0xa6030166  sh          $v1, 0x166($s0)
    ctx->pc = 0x4dbe94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dbe98: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4dbe98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dbe9c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4dbe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4dbea0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4dbea0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dbea4: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4dbea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dbea8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4dbea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dbeac: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x4dbeacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x4dbeb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dbeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dbeb4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4dbeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4dbeb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dbeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4dbebc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dbebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dbec0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4dbec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dbec4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4dbec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4dbec8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dbec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dbecc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dbeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dbed0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dbed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4dbed4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4dbed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dbed8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4DBED8u;
    {
        const bool branch_taken_0x4dbed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dbed8) {
            ctx->pc = 0x4DBEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DBED8u;
            // 0x4dbedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DBF2Cu;
            goto label_4dbf2c;
        }
    }
    ctx->pc = 0x4DBEE0u;
    // 0x4dbee0: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4DBEE0u;
    SET_GPR_U32(ctx, 31, 0x4DBEE8u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4DBEE0u, 0x4DBEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBEE8u;
label_4dbee8:
    // 0x4dbee8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4dbee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dbeec: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dbeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dbef0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dbef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dbef4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dbef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dbef8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dbef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4dbefc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dbefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dbf00: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4dbf00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dbf04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4dbf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4dbf08: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dbf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dbf0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dbf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dbf10: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dbf10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4dbf14: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4dbf14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dbf18: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DBF18u;
    {
        const bool branch_taken_0x4dbf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dbf18) {
            ctx->pc = 0x4DBF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DBF18u;
            // 0x4dbf1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DBF2Cu;
            goto label_4dbf2c;
        }
    }
    ctx->pc = 0x4DBF20u;
    // 0x4dbf20: 0xc137004  jal         func_4DC010
    ctx->pc = 0x4DBF20u;
    SET_GPR_U32(ctx, 31, 0x4DBF28u);
    ctx->pc = 0x4DBF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBF20u;
    // 0x4dbf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DC010u, 0x4DBF20u, 0x4DBF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBF28u;
label_4dbf28:
    // 0x4dbf28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dbf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dbf2c:
    // 0x4dbf2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dbf2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dbf30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4dbf30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dbf34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4dbf34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dbf38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4dbf38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4dbf3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4dbf3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dbf40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4dbf40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4dbf44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4dbf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4dbf48: 0x8136fd4  j           func_4DBF50
    ctx->pc = 0x4DBF48u;
    ctx->pc = 0x4DBF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBF48u;
    // 0x4dbf4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DBF50u;
    goto label_4dbf50;
    ctx->pc = 0x4DBF50u;
label_4dbf50:
    // 0x4dbf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dbf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dbf54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4dbf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dbf58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dbf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dbf5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4dbf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4dbf60: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4DBF60u;
    SET_GPR_U32(ctx, 31, 0x4DBF68u);
    ctx->pc = 0x4DBF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBF60u;
    // 0x4dbf64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4DBF60u, 0x4DBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBF68u;
label_4dbf68:
    // 0x4dbf68: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4dbf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4dbf6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dbf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dbf70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DBF70u;
    {
        const bool branch_taken_0x4dbf70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBF70u;
        // 0x4dbf74: 0x2467d680  addiu       $a3, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbf70) {
            ctx->pc = 0x4DBF88u;
            goto label_4dbf88;
        }
    }
    ctx->pc = 0x4DBF78u;
    // 0x4dbf78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dbf78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dbf7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4dbf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dbf80: 0x8137a6c  j           func_4DE9B0
    ctx->pc = 0x4DBF80u;
    ctx->pc = 0x4DBF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBF80u;
    // 0x4dbf84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE9B0u, 0x4DBF80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DBF88u;
label_4dbf88:
    // 0x4dbf88: 0x8e050140  lw          $a1, 0x140($s0)
    ctx->pc = 0x4dbf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x4dbf8c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4dbf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4dbf90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dbf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dbf94: 0xac651140  sw          $a1, 0x1140($v1)
    ctx->pc = 0x4dbf94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F1140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1140u, _value); } while (0);
    // 0x4dbf98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4dbf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4dbf9c: 0x24a6016a  addiu       $a2, $a1, 0x16A
    ctx->pc = 0x4dbf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 362));
    // 0x4dbfa0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4dbfa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dbfa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4dbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4dbfa8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4dbfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dbfac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4dbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4dbfb0: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x4dbfb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dbfb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4dbfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4dbfb8: 0xa6020160  sh          $v0, 0x160($s0)
    ctx->pc = 0x4dbfb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dbfbc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4dbfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4dbfc0: 0xa4e2232e  sh          $v0, 0x232E($a3)
    ctx->pc = 0x4dbfc0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9006), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dbfc4: 0xa4e323c4  sh          $v1, 0x23C4($a3)
    ctx->pc = 0x4dbfc4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9156), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dbfc8: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4DBFC8u;
    SET_GPR_U32(ctx, 31, 0x4DBFD0u);
    ctx->pc = 0x4DBFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBFC8u;
    // 0x4dbfcc: 0xa4e0232c  sh          $zero, 0x232C($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4DBFC8u, 0x4DBFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBFD0u;
label_4dbfd0:
    // 0x4dbfd0: 0xc122f12  jal         func_48BC48
    ctx->pc = 0x4DBFD0u;
    SET_GPR_U32(ctx, 31, 0x4DBFD8u);
    ctx->pc = 0x4DBFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DBFD0u;
    // 0x4dbfd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC48u, 0x4DBFD0u, 0x4DBFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBFD8u;
label_4dbfd8:
    // 0x4dbfd8: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4DBFD8u;
    SET_GPR_U32(ctx, 31, 0x4DBFE0u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4DBFD8u, 0x4DBFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DBFE0u;
label_4dbfe0:
    // 0x4dbfe0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4dbfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4dbfe4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4dbfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dbfe8: 0xa60201bc  sh          $v0, 0x1BC($s0)
    ctx->pc = 0x4dbfe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dbfec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dbfecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dbff0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DBFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DBFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DBFF0u;
        // 0x4dbff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DBFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DBFF8u;
label_4dbff8:
    // 0x4dbff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dbff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dbffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dbffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dc000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc004: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4DC004u;
    ctx->pc = 0x4DC008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC004u;
    // 0x4dc008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DC00Cu;
    // 0x4dc00c: 0x0  nop
    ctx->pc = 0x4dc00cu;
    // NOP
    ctx->pc = 0x4dc010u;
}
