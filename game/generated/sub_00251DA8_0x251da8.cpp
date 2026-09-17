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

// Function: sub_00251DA8
// Address: 0x251da8 - 0x251fd8
void sub_00251DA8_0x251da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251DA8_0x251da8");
#endif

    switch (ctx->pc) {
        case 0x251e24u: goto label_251e24;
        case 0x251e30u: goto label_251e30;
        case 0x251e40u: goto label_251e40;
        case 0x251e58u: goto label_251e58;
        case 0x251eb8u: goto label_251eb8;
        case 0x251ed0u: goto label_251ed0;
        case 0x251f10u: goto label_251f10;
        case 0x251f4cu: goto label_251f4c;
        case 0x251f80u: goto label_251f80;
        case 0x251fa8u: goto label_251fa8;
        default: break;
    }

    ctx->pc = 0x251da8u;

    // 0x251da8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x251da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x251dac: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x251dacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x251db0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x251db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x251db4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x251db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251db8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x251db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x251dbc: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x251dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x251dc0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x251dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x251dc4: 0x24e73270  addiu       $a3, $a3, 0x3270
    ctx->pc = 0x251dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12912));
    // 0x251dc8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x251dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x251dcc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x251dccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251dd0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x251dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x251dd4: 0x34c60003  ori         $a2, $a2, 0x3
    ctx->pc = 0x251dd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
    // 0x251dd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x251dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x251ddc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x251ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x251de0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x251de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x251de4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x251de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x251de8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x251de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x251dec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x251decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x251df0: 0x8ec30894  lw          $v1, 0x894($s6)
    ctx->pc = 0x251df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2196)));
    // 0x251df4: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x251df4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x251df8: 0x86d30012  lh          $s3, 0x12($s6)
    ctx->pc = 0x251df8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x251dfc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x251dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x251e00: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x251e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x251e04: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x251e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x251e08: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x251e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x251e0c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x251e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x251e10: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x251e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x251e14: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x251e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x251e18: 0x13a940  sll         $s5, $s3, 5
    ctx->pc = 0x251e18u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x251e1c: 0xc089248  jal         func_224920
    ctx->pc = 0x251E1Cu;
    SET_GPR_U32(ctx, 31, 0x251E24u);
    ctx->pc = 0x251E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251E1Cu;
    // 0x251e20: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x251E1Cu, 0x251E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E24u;
label_251e24:
    // 0x251e24: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x251e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251e28: 0xc0940ec  jal         func_2503B0
    ctx->pc = 0x251E28u;
    SET_GPR_U32(ctx, 31, 0x251E30u);
    ctx->pc = 0x251E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251E28u;
    // 0x251e2c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2503B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2503B0u, 0x251E28u, 0x251E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E30u;
label_251e30:
    // 0x251e30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x251e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e34: 0x26620065  addiu       $v0, $s3, 0x65
    ctx->pc = 0x251e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 101));
    // 0x251e38: 0xc094708  jal         func_251C20
    ctx->pc = 0x251E38u;
    SET_GPR_U32(ctx, 31, 0x251E40u);
    ctx->pc = 0x251E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251E38u;
    // 0x251e3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251C20u, 0x251E38u, 0x251E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E40u;
label_251e40:
    // 0x251e40: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x251e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x251e44: 0x8e570000  lw          $s7, 0x0($s2)
    ctx->pc = 0x251e44u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x251e48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x251e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e4c: 0x2446ae00  addiu       $a2, $v0, -0x5200
    ctx->pc = 0x251e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946304));
    // 0x251e50: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x251e50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e54: 0x0  nop
    ctx->pc = 0x251e54u;
    // NOP
label_251e58:
    // 0x251e58: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x251e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x251e5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x251e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x251e60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x251e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x251e64: 0x28a40010  slti        $a0, $a1, 0x10
    ctx->pc = 0x251e64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x251e68: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x251e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x251e6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x251e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e70: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x251e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x251e74: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x251E74u;
    {
        const bool branch_taken_0x251e74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x251E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E74u;
        // 0x251e78: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e74) {
            ctx->pc = 0x251E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251e58;
        }
    }
    ctx->pc = 0x251E7Cu;
    // 0x251e7c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x251e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x251e80: 0x24420047  addiu       $v0, $v0, 0x47
    ctx->pc = 0x251e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 71));
    // 0x251e84: 0x2c430067  sltiu       $v1, $v0, 0x67
    ctx->pc = 0x251e84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)103) ? 1 : 0);
    // 0x251e88: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x251e88u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x251e8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x251e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x251e90: 0x3c110016  lui         $s1, 0x16
    ctx->pc = 0x251e90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
    // 0x251e94: 0x26317f70  addiu       $s1, $s1, 0x7F70
    ctx->pc = 0x251e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32624));
    // 0x251e98: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x251e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x251e9c: 0x1ae0002f  blez        $s7, . + 4 + (0x2F << 2)
    ctx->pc = 0x251E9Cu;
    {
        const bool branch_taken_0x251e9c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x251EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E9Cu;
        // 0x251ea0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e9c) {
            ctx->pc = 0x251F5Cu;
            goto label_251f5c;
        }
    }
    ctx->pc = 0x251EA4u;
    // 0x251ea4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x251ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x251ea8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x251ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x251eac: 0x245eae00  addiu       $fp, $v0, -0x5200
    ctx->pc = 0x251eacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946304));
    // 0x251eb0: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x251eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x251eb4: 0x0  nop
    ctx->pc = 0x251eb4u;
    // NOP
label_251eb8:
    // 0x251eb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ebc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x251ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x251ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x251ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ec4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x251ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x251ec8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x251EC8u;
    {
        const bool branch_taken_0x251ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x251ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EC8u;
        // 0x251ecc: 0x5e3021  addu        $a2, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ec8) {
            ctx->pc = 0x251EECu;
            goto label_251eec;
        }
    }
    ctx->pc = 0x251ED0u;
label_251ed0:
    // 0x251ed0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x251ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251ed4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x251ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x251ed8: 0xb0182b  sltu        $v1, $a1, $s0
    ctx->pc = 0x251ed8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x251edc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x251edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x251ee0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x251ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x251ee4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x251EE4u;
    {
        const bool branch_taken_0x251ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x251EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EE4u;
        // 0x251ee8: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ee4) {
            ctx->pc = 0x251ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251ed0;
        }
    }
    ctx->pc = 0x251EECu;
label_251eec:
    // 0x251eec: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x251eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x251ef0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x251ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251ef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x251ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x251ef8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x251ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251efc: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x251efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x251f00: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x251f00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x251f04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x251f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f08: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x251F08u;
    {
        const bool branch_taken_0x251f08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x251F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F08u;
        // 0x251f0c: 0xac540000  sw          $s4, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f08) {
            ctx->pc = 0x251F2Cu;
            goto label_251f2c;
        }
    }
    ctx->pc = 0x251F10u;
label_251f10:
    // 0x251f10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x251f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x251f14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x251f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x251f18: 0x90182b  sltu        $v1, $a0, $s0
    ctx->pc = 0x251f18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x251f1c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x251f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x251f20: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x251f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x251f24: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x251F24u;
    {
        const bool branch_taken_0x251f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x251F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F24u;
        // 0x251f28: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f24) {
            ctx->pc = 0x251F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251f10;
        }
    }
    ctx->pc = 0x251F2Cu;
label_251f2c:
    // 0x251f2c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x251f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251f30: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x251f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f34: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x251f34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x251f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x251f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f3c: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x251f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251f40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x251f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x251f44: 0xc093884  jal         func_24E210
    ctx->pc = 0x251F44u;
    SET_GPR_U32(ctx, 31, 0x251F4Cu);
    ctx->pc = 0x251F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F44u;
    // 0x251f48: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E210u, 0x251F44u, 0x251F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F4Cu;
label_251f4c:
    // 0x251f4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x251f4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f50: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x251f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x251f54: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x251F54u;
    {
        const bool branch_taken_0x251f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F54u;
        // 0x251f58: 0x2b01021  addu        $v0, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f54) {
            ctx->pc = 0x251EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251eb8;
        }
    }
    ctx->pc = 0x251F5Cu;
label_251f5c:
    // 0x251f5c: 0x86c30040  lh          $v1, 0x40($s6)
    ctx->pc = 0x251f5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x251f60: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x251f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x251f64: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x251F64u;
    {
        const bool branch_taken_0x251f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F64u;
        // 0x251f68: 0x96c40040  lhu         $a0, 0x40($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f64) {
            ctx->pc = 0x251F78u;
            goto label_251f78;
        }
    }
    ctx->pc = 0x251F6Cu;
    // 0x251f6c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x251f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x251f70: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251F70u;
    {
        const bool branch_taken_0x251f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x251F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F70u;
        // 0x251f74: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f70) {
            ctx->pc = 0x251F88u;
            goto label_251f88;
        }
    }
    ctx->pc = 0x251F78u;
label_251f78:
    // 0x251f78: 0xc08bf82  jal         func_22FE08
    ctx->pc = 0x251F78u;
    SET_GPR_U32(ctx, 31, 0x251F80u);
    ctx->pc = 0x251F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F78u;
    // 0x251f7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE08u, 0x251F78u, 0x251F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F80u;
label_251f80:
    // 0x251f80: 0x96c40040  lhu         $a0, 0x40($s6)
    ctx->pc = 0x251f80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x251f84: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x251f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_251f88:
    // 0x251f88: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x251f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x251f8c: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x251f8cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x251f90: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x251F90u;
    {
        const bool branch_taken_0x251f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x251F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F90u;
        // 0x251f94: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f90) {
            ctx->pc = 0x251FA0u;
            goto label_251fa0;
        }
    }
    ctx->pc = 0x251F98u;
    // 0x251f98: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x251F98u;
    {
        const bool branch_taken_0x251f98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x251f98) {
            ctx->pc = 0x251F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251F98u;
            // 0x251f9c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251FACu;
            goto label_251fac;
        }
    }
    ctx->pc = 0x251FA0u;
label_251fa0:
    // 0x251fa0: 0xc08e426  jal         func_239098
    ctx->pc = 0x251FA0u;
    SET_GPR_U32(ctx, 31, 0x251FA8u);
    ctx->pc = 0x251FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251FA0u;
    // 0x251fa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239098u, 0x251FA0u, 0x251FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FA8u;
label_251fa8:
    // 0x251fa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x251fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_251fac:
    // 0x251fac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x251facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251fb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x251fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251fb4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x251fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251fb8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x251fb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251fbc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x251fbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x251fc0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x251fc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251fc4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x251fc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x251fc8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x251fc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251fcc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x251fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x251fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x251FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FD0u;
        // 0x251fd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251FD8u;
}
