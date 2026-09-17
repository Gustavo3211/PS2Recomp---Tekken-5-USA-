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

// Function: sub_0031C070
// Address: 0x31c070 - 0x31c640
void sub_0031C070_0x31c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C070_0x31c070");
#endif

    switch (ctx->pc) {
        case 0x31c0c0u: goto label_31c0c0;
        case 0x31c0e8u: goto label_31c0e8;
        case 0x31c114u: goto label_31c114;
        case 0x31c120u: goto label_31c120;
        case 0x31c14cu: goto label_31c14c;
        case 0x31c16cu: goto label_31c16c;
        case 0x31c19cu: goto label_31c19c;
        case 0x31c258u: goto label_31c258;
        case 0x31c290u: goto label_31c290;
        case 0x31c2d8u: goto label_31c2d8;
        case 0x31c308u: goto label_31c308;
        case 0x31c3a0u: goto label_31c3a0;
        case 0x31c4d8u: goto label_31c4d8;
        case 0x31c520u: goto label_31c520;
        case 0x31c550u: goto label_31c550;
        case 0x31c598u: goto label_31c598;
        case 0x31c5c8u: goto label_31c5c8;
        case 0x31c610u: goto label_31c610;
        default: break;
    }

    ctx->pc = 0x31c070u;

    // 0x31c070: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31c074: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31c078: 0x30b10003  andi        $s1, $a1, 0x3
    ctx->pc = 0x31c078u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x31c07c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x31c07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x31c080: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31c080u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c084: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31c088: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31c088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31c08c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31c08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x31c090: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x31c090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31c094: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x31c094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x31c098: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x31c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x31c09c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x31c09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x31c0a0: 0x1220015b  beqz        $s1, . + 4 + (0x15B << 2)
    ctx->pc = 0x31C0A0u;
    {
        const bool branch_taken_0x31c0a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0A0u;
        // 0x31c0a4: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0a0) {
            ctx->pc = 0x31C610u;
            goto label_31c610;
        }
    }
    ctx->pc = 0x31C0A8u;
    // 0x31c0a8: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x31c0a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x31c0ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31c0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0b0: 0x26c203c0  addiu       $v0, $s6, 0x3C0
    ctx->pc = 0x31c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    // 0x31c0b4: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x31c0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x31c0b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x31c0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0bc: 0x0  nop
    ctx->pc = 0x31c0bcu;
    // NOP
label_31c0c0:
    // 0x31c0c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x31c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31c0c4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31c0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31c0c8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x31C0C8u;
    {
        const bool branch_taken_0x31c0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0C8u;
        // 0x31c0cc: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0c8) {
            ctx->pc = 0x31C238u;
            goto label_31c238;
        }
    }
    ctx->pc = 0x31C0D0u;
    // 0x31c0d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31c0d4: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x31c0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31c0d8: 0x0  nop
    ctx->pc = 0x31c0d8u;
    // NOP
    // 0x31c0dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31C0DCu;
    {
        const bool branch_taken_0x31c0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0DCu;
        // 0x31c0e0: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0dc) {
            ctx->pc = 0x31C0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c0c0;
        }
    }
    ctx->pc = 0x31C0E4u;
    // 0x31c0e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31c0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31c0e8:
    // 0x31c0e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x31c0ec: 0x26d003c0  addiu       $s0, $s6, 0x3C0
    ctx->pc = 0x31c0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    // 0x31c0f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31c0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31c0f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x31c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c0fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c100: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x31c100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x31c104: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x31c104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c108: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31c108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31c10c: 0xc0c722c  jal         func_31C8B0
    ctx->pc = 0x31C10Cu;
    SET_GPR_U32(ctx, 31, 0x31C114u);
    ctx->pc = 0x31C110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C10Cu;
    // 0x31c110: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C8B0u, 0x31C10Cu, 0x31C114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C114u;
label_31c114:
    // 0x31c114: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31c114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31c118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c11c: 0x0  nop
    ctx->pc = 0x31c11cu;
    // NOP
label_31c120:
    // 0x31c120: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x31c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31c124: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31c124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31c128: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x31C128u;
    {
        const bool branch_taken_0x31c128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C128u;
        // 0x31c12c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c128) {
            ctx->pc = 0x31C210u;
            goto label_31c210;
        }
    }
    ctx->pc = 0x31C130u;
    // 0x31c130: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31c130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31c134: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x31c134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31c138: 0x0  nop
    ctx->pc = 0x31c138u;
    // NOP
    // 0x31c13c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31C13Cu;
    {
        const bool branch_taken_0x31c13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C13Cu;
        // 0x31c140: 0x24700004  addiu       $s0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c13c) {
            ctx->pc = 0x31C120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c120;
        }
    }
    ctx->pc = 0x31C144u;
    // 0x31c144: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31c144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c148: 0x26d303c0  addiu       $s3, $s6, 0x3C0
    ctx->pc = 0x31c148u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
label_31c14c:
    // 0x31c14c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31c14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c150: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x31c150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31c154: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31c154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c158: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x31c158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x31c15c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31c15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c160: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c164: 0xc0c71ea  jal         func_31C7A8
    ctx->pc = 0x31C164u;
    SET_GPR_U32(ctx, 31, 0x31C16Cu);
    ctx->pc = 0x31C168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C164u;
    // 0x31c168: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C7A8u, 0x31C164u, 0x31C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C16Cu;
label_31c16c:
    // 0x31c16c: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x31c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x31c170: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x31c170u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31c174: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x31c174u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31c178: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x31C178u;
    {
        const bool branch_taken_0x31c178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C178u;
        // 0x31c17c: 0x3c1e0040  lui         $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c178) {
            ctx->pc = 0x31C278u;
            goto label_31c278;
        }
    }
    ctx->pc = 0x31C180u;
    // 0x31c180: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31c180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c184: 0x27c30400  addiu       $v1, $fp, 0x400
    ctx->pc = 0x31c184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1024));
    // 0x31c188: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x31c188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x31c18c: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x31c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x31c190: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x31c190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c194: 0xc0ce218  jal         func_338860
    ctx->pc = 0x31C194u;
    SET_GPR_U32(ctx, 31, 0x31C19Cu);
    ctx->pc = 0x31C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C194u;
    // 0x31c198: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x31C194u, 0x31C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C19Cu;
label_31c19c:
    // 0x31c19c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31c1a0: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x31c1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x31c1a4: 0x112902  srl         $a1, $s1, 4
    ctx->pc = 0x31c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x31c1a8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31c1ac: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x31c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x31c1b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31c1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31c1b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31c1b8: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x31c1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x31c1bc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x31c1bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x31c1c0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x31c1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c1c4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x31c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x31c1c8: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x31c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x31c1cc: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x31c1ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
    // 0x31c1d0: 0x32423fff  andi        $v0, $s2, 0x3FFF
    ctx->pc = 0x31c1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16383);
    // 0x31c1d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31c1d8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x31c1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31c1dc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x31c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31c1e0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x31c1e0u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 2)); // MMIO: 0x1000d080
    // 0x31c1e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x31c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x31c1e8: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x31c1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x31c1ec: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x31c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x31c1f0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x31c1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000D080u)); // MMIO: 0x1000d080
    // 0x31c1f4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x31c1f4u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x31c1f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x31c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x31c1fc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x31c1fcu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x31c200: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31c200u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x31c204: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x31C204u;
    {
        const bool branch_taken_0x31c204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C204u;
        // 0x31c208: 0xae720008  sw          $s2, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c204) {
            ctx->pc = 0x31C27Cu;
            goto label_31c27c;
        }
    }
    ctx->pc = 0x31C20Cu;
    // 0x31c20c: 0x0  nop
    ctx->pc = 0x31c20cu;
    // NOP
label_31c210:
    // 0x31c210: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31c210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31c214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31c214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c218: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31c21c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x31c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x31c220: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x31c220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x31c224: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x31c224u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x31c228: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31c228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31c22c: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x31C22Cu;
    {
        const bool branch_taken_0x31c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C22Cu;
        // 0x31c230: 0x26d303c0  addiu       $s3, $s6, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c22c) {
            ctx->pc = 0x31C14Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c14c;
        }
    }
    ctx->pc = 0x31C234u;
    // 0x31c234: 0x0  nop
    ctx->pc = 0x31c234u;
    // NOP
label_31c238:
    // 0x31c238: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31c238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31c23c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c240: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31c244: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x31c244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x31c248: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x31c248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x31c24c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x31c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x31c250: 0x1000ffa5  b           . + 4 + (-0x5B << 2)
    ctx->pc = 0x31C250u;
    {
        const bool branch_taken_0x31c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C250u;
        // 0x31c254: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c250) {
            ctx->pc = 0x31C0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c0e8;
        }
    }
    ctx->pc = 0x31C258u;
label_31c258:
    // 0x31c258: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31c258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31c25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c260: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31c260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31c264: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x31c264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x31c268: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x31c268u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x31c26c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31c26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31c270: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31C270u;
    {
        const bool branch_taken_0x31c270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C270u;
        // 0x31c274: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c270) {
            ctx->pc = 0x31C2B8u;
            goto label_31c2b8;
        }
    }
    ctx->pc = 0x31C278u;
label_31c278:
    // 0x31c278: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31c278u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31c27c:
    // 0x31c27c: 0x26c203c0  addiu       $v0, $s6, 0x3C0
    ctx->pc = 0x31c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    // 0x31c280: 0x27b70008  addiu       $s7, $sp, 0x8
    ctx->pc = 0x31c280u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x31c284: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x31c284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x31c288: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31c288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c28c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x31c28cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31c290:
    // 0x31c290: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c294: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x31C294u;
    {
        const bool branch_taken_0x31c294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C294u;
        // 0x31c298: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c294) {
            ctx->pc = 0x31C258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c258;
        }
    }
    ctx->pc = 0x31C29Cu;
    // 0x31c29c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31c2a0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x31c2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31c2a4: 0x0  nop
    ctx->pc = 0x31c2a4u;
    // NOP
    // 0x31c2a8: 0x0  nop
    ctx->pc = 0x31c2a8u;
    // NOP
    // 0x31c2ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31C2ACu;
    {
        const bool branch_taken_0x31c2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2ACu;
        // 0x31c2b0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2ac) {
            ctx->pc = 0x31C290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c290;
        }
    }
    ctx->pc = 0x31C2B4u;
    // 0x31c2b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31c2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31c2b8:
    // 0x31c2b8: 0x26d303c0  addiu       $s3, $s6, 0x3C0
    ctx->pc = 0x31c2b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    // 0x31c2bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31c2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c2c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x31c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31c2c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31c2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c2c8: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x31c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
    // 0x31c2cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c2d0: 0xc0c7190  jal         func_31C640
    ctx->pc = 0x31C2D0u;
    SET_GPR_U32(ctx, 31, 0x31C2D8u);
    ctx->pc = 0x31C2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2D0u;
    // 0x31c2d4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C640u, 0x31C2D0u, 0x31C2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2D8u;
label_31c2d8:
    // 0x31c2d8: 0x8ef20000  lw          $s2, 0x0($s7)
    ctx->pc = 0x31c2d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x31c2dc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x31c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x31c2e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31c2e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31c2e8: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x31c2e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31c2ec: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x31C2ECu;
    {
        const bool branch_taken_0x31c2ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2ECu;
        // 0x31c2f0: 0x27c30400  addiu       $v1, $fp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2ec) {
            ctx->pc = 0x31C374u;
            goto label_31c374;
        }
    }
    ctx->pc = 0x31C2F4u;
    // 0x31c2f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31c2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c2f8: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x31c2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x31c2fc: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x31c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x31c300: 0xc0ce218  jal         func_338860
    ctx->pc = 0x31C300u;
    SET_GPR_U32(ctx, 31, 0x31C308u);
    ctx->pc = 0x31C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C300u;
    // 0x31c304: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x31C300u, 0x31C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C308u;
label_31c308:
    // 0x31c308: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31c308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31c30c: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x31c30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x31c310: 0x112902  srl         $a1, $s1, 4
    ctx->pc = 0x31c310u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x31c314: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31c314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31c318: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x31c318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x31c31c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31c31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31c320: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31c320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31c324: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x31c324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x31c328: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x31c328u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x31c32c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x31c32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c330: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x31c330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x31c334: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x31c334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x31c338: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x31c338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
    // 0x31c33c: 0x32423fff  andi        $v0, $s2, 0x3FFF
    ctx->pc = 0x31c33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16383);
    // 0x31c340: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31c340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31c344: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x31c344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31c348: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x31c348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31c34c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x31c34cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 2)); // MMIO: 0x1000d080
    // 0x31c350: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x31c350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x31c354: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x31c354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x31c358: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x31c358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x31c35c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x31c35cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000D080u)); // MMIO: 0x1000d080
    // 0x31c360: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x31c360u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x31c364: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x31c364u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x31c368: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x31c368u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x31c36c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x31c370: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x31c370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
label_31c374:
    // 0x31c374: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x31c374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x31c378: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x31c378u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c37c: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x31c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x31c380: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x31c380u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31c384: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x31C384u;
    {
        const bool branch_taken_0x31c384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C384u;
        // 0x31c388: 0x27c30400  addiu       $v1, $fp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c384) {
            ctx->pc = 0x31C40Cu;
            goto label_31c40c;
        }
    }
    ctx->pc = 0x31C38Cu;
    // 0x31c38c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31c38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c390: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x31c390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x31c394: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x31c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x31c398: 0xc0ce218  jal         func_338860
    ctx->pc = 0x31C398u;
    SET_GPR_U32(ctx, 31, 0x31C3A0u);
    ctx->pc = 0x31C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C398u;
    // 0x31c39c: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x31C398u, 0x31C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C3A0u;
label_31c3a0:
    // 0x31c3a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31c3a4: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x31c3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x31c3a8: 0x112902  srl         $a1, $s1, 4
    ctx->pc = 0x31c3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x31c3ac: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31c3b0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x31c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x31c3b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31c3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31c3b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31c3bc: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x31c3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x31c3c0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x31c3c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x31c3c4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x31c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c3c8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x31c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x31c3cc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x31c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x31c3d0: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x31c3d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
    // 0x31c3d4: 0x32423fff  andi        $v0, $s2, 0x3FFF
    ctx->pc = 0x31c3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16383);
    // 0x31c3d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31c3dc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x31c3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31c3e0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x31c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31c3e4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x31c3e4u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 2)); // MMIO: 0x1000d080
    // 0x31c3e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x31c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x31c3ec: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x31c3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x31c3f0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x31c3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x31c3f4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x31c3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000D080u)); // MMIO: 0x1000d080
    // 0x31c3f8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x31c3f8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x31c3fc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x31c3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x31c400: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x31c400u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x31c404: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31c404u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x31c408: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x31c408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
label_31c40c:
    // 0x31c40c: 0x27c20400  addiu       $v0, $fp, 0x400
    ctx->pc = 0x31c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1024));
    // 0x31c410: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x31c410u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x31c414: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x31c414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x31c418: 0x2449002c  addiu       $t1, $v0, 0x2C
    ctx->pc = 0x31c418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x31c41c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x31c41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x31c420: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x31c420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x31c424: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x31c424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x31c428: 0x2872024  and         $a0, $s4, $a3
    ctx->pc = 0x31c428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & GPR_U64(ctx, 7));
    // 0x31c42c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x31c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x31c430: 0x14870005  bne         $a0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C430u;
    {
        const bool branch_taken_0x31c430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x31C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C430u;
        // 0x31c434: 0xc53025  or          $a2, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c430) {
            ctx->pc = 0x31C448u;
            goto label_31c448;
        }
    }
    ctx->pc = 0x31C438u;
    // 0x31c438: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31c438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31c43c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31c440: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31C440u;
    {
        const bool branch_taken_0x31c440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C440u;
        // 0x31c444: 0x2821025  or          $v0, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c440) {
            ctx->pc = 0x31C458u;
            goto label_31c458;
        }
    }
    ctx->pc = 0x31C448u;
label_31c448:
    // 0x31c448: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31c448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31c44c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31c450: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31c450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31c454: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x31c454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_31c458:
    // 0x31c458: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31c458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31c45c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31c45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31c460: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x31c460u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x31c464: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31c464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31c468: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x31c468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x31c46c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31c46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31c470: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C470u;
    {
        const bool branch_taken_0x31c470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31c470) {
            ctx->pc = 0x31C474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C470u;
            // 0x31c474: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C488u;
            goto label_31c488;
        }
    }
    ctx->pc = 0x31C478u;
    // 0x31c478: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31c478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31c47c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31c480: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31C480u;
    {
        const bool branch_taken_0x31c480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C480u;
        // 0x31c484: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c480) {
            ctx->pc = 0x31C494u;
            goto label_31c494;
        }
    }
    ctx->pc = 0x31C488u;
label_31c488:
    // 0x31c488: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31c488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31c48c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31c48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31c490: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31c490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31c494:
    // 0x31c494: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31c494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31c498: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31c498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31c49c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31c49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c4a0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31c4a0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31c4a4: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x31c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x31c4a8: 0x26c303c0  addiu       $v1, $s6, 0x3C0
    ctx->pc = 0x31c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    // 0x31c4ac: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x31c4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x31c4b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x31c4b4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C4B4u;
    {
        const bool branch_taken_0x31c4b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x31C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4B4u;
        // 0x31c4b8: 0xad280000  sw          $t0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4b4) {
            ctx->pc = 0x31C4C8u;
            goto label_31c4c8;
        }
    }
    ctx->pc = 0x31C4BCu;
    // 0x31c4bc: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x31c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x31c4c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31C4C0u;
    {
        const bool branch_taken_0x31c4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4C0u;
        // 0x31c4c4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4c0) {
            ctx->pc = 0x31C504u;
            goto label_31c504;
        }
    }
    ctx->pc = 0x31C4C8u;
label_31c4c8:
    // 0x31c4c8: 0x2467000c  addiu       $a3, $v1, 0xC
    ctx->pc = 0x31c4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x31c4cc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x31c4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x31c4d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31c4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c4d4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x31c4d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_31c4d8:
    // 0x31c4d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c4dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C4DCu;
    {
        const bool branch_taken_0x31c4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4DCu;
        // 0x31c4e0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4dc) {
            ctx->pc = 0x31C4ECu;
            goto label_31c4ec;
        }
    }
    ctx->pc = 0x31C4E4u;
    // 0x31c4e4: 0x50c50007  beql        $a2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C4E4u;
    {
        const bool branch_taken_0x31c4e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x31c4e4) {
            ctx->pc = 0x31C4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C4E4u;
            // 0x31c4e8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C504u;
            goto label_31c504;
        }
    }
    ctx->pc = 0x31C4ECu;
label_31c4ec:
    // 0x31c4ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31c4f0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x31c4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x31c4f4: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x31c4f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31c4f8: 0x0  nop
    ctx->pc = 0x31c4f8u;
    // NOP
    // 0x31c4fc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31C4FCu;
    {
        const bool branch_taken_0x31c4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4FCu;
        // 0x31c500: 0x24c60c00  addiu       $a2, $a2, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4fc) {
            ctx->pc = 0x31C4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c4d8;
        }
    }
    ctx->pc = 0x31C504u;
label_31c504:
    // 0x31c504: 0x26d003c0  addiu       $s0, $s6, 0x3C0
    ctx->pc = 0x31c504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    // 0x31c508: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31c50c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31c510: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C510u;
    {
        const bool branch_taken_0x31c510 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C510u;
        // 0x31c514: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c510) {
            ctx->pc = 0x31C520u;
            goto label_31c520;
        }
    }
    ctx->pc = 0x31C518u;
    // 0x31c518: 0xc0ce218  jal         func_338860
    ctx->pc = 0x31C518u;
    SET_GPR_U32(ctx, 31, 0x31C520u);
    ctx->pc = 0x31C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C518u;
    // 0x31c51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x31C518u, 0x31C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C520u;
label_31c520:
    // 0x31c520: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x31c520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31c524: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31c528: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C528u;
    {
        const bool branch_taken_0x31c528 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x31c528) {
            ctx->pc = 0x31C52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C528u;
            // 0x31c52c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C540u;
            goto label_31c540;
        }
    }
    ctx->pc = 0x31C530u;
    // 0x31c530: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x31c530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x31c534: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31C534u;
    {
        const bool branch_taken_0x31c534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C534u;
        // 0x31c538: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c534) {
            ctx->pc = 0x31C57Cu;
            goto label_31c57c;
        }
    }
    ctx->pc = 0x31C53Cu;
    // 0x31c53c: 0x0  nop
    ctx->pc = 0x31c53cu;
    // NOP
label_31c540:
    // 0x31c540: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x31c540u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x31c544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31c544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c548: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x31c548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c54c: 0x0  nop
    ctx->pc = 0x31c54cu;
    // NOP
label_31c550:
    // 0x31c550: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31c550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c554: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C554u;
    {
        const bool branch_taken_0x31c554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C554u;
        // 0x31c558: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c554) {
            ctx->pc = 0x31C564u;
            goto label_31c564;
        }
    }
    ctx->pc = 0x31C55Cu;
    // 0x31c55c: 0x50e50007  beql        $a3, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C55Cu;
    {
        const bool branch_taken_0x31c55c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x31c55c) {
            ctx->pc = 0x31C560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C55Cu;
            // 0x31c560: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C57Cu;
            goto label_31c57c;
        }
    }
    ctx->pc = 0x31C564u;
label_31c564:
    // 0x31c564: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31c564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31c568: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x31c568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x31c56c: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x31c56cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31c570: 0x0  nop
    ctx->pc = 0x31c570u;
    // NOP
    // 0x31c574: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31C574u;
    {
        const bool branch_taken_0x31c574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C574u;
        // 0x31c578: 0x24e70c00  addiu       $a3, $a3, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c574) {
            ctx->pc = 0x31C550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c550;
        }
    }
    ctx->pc = 0x31C57Cu;
label_31c57c:
    // 0x31c57c: 0x26d003c0  addiu       $s0, $s6, 0x3C0
    ctx->pc = 0x31c57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    // 0x31c580: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31c580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31c584: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31c584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31c588: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C588u;
    {
        const bool branch_taken_0x31c588 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C588u;
        // 0x31c58c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c588) {
            ctx->pc = 0x31C598u;
            goto label_31c598;
        }
    }
    ctx->pc = 0x31C590u;
    // 0x31c590: 0xc0ce218  jal         func_338860
    ctx->pc = 0x31C590u;
    SET_GPR_U32(ctx, 31, 0x31C598u);
    ctx->pc = 0x31C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C590u;
    // 0x31c594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x31C590u, 0x31C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C598u;
label_31c598:
    // 0x31c598: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x31c598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c59c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31c5a0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C5A0u;
    {
        const bool branch_taken_0x31c5a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x31C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5A0u;
        // 0x31c5a4: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5a0) {
            ctx->pc = 0x31C5B8u;
            goto label_31c5b8;
        }
    }
    ctx->pc = 0x31C5A8u;
    // 0x31c5a8: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x31c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x31c5ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31C5ACu;
    {
        const bool branch_taken_0x31c5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5ACu;
        // 0x31c5b0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5ac) {
            ctx->pc = 0x31C5F4u;
            goto label_31c5f4;
        }
    }
    ctx->pc = 0x31C5B4u;
    // 0x31c5b4: 0x0  nop
    ctx->pc = 0x31c5b4u;
    // NOP
label_31c5b8:
    // 0x31c5b8: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x31c5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x31c5bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31c5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5c0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x31c5c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5c4: 0x0  nop
    ctx->pc = 0x31c5c4u;
    // NOP
label_31c5c8:
    // 0x31c5c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c5cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C5CCu;
    {
        const bool branch_taken_0x31c5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5CCu;
        // 0x31c5d0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5cc) {
            ctx->pc = 0x31C5DCu;
            goto label_31c5dc;
        }
    }
    ctx->pc = 0x31C5D4u;
    // 0x31c5d4: 0x50e50007  beql        $a3, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C5D4u;
    {
        const bool branch_taken_0x31c5d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x31c5d4) {
            ctx->pc = 0x31C5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C5D4u;
            // 0x31c5d8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C5F4u;
            goto label_31c5f4;
        }
    }
    ctx->pc = 0x31C5DCu;
label_31c5dc:
    // 0x31c5dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31c5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31c5e0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x31c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x31c5e4: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x31c5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31c5e8: 0x0  nop
    ctx->pc = 0x31c5e8u;
    // NOP
    // 0x31c5ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31C5ECu;
    {
        const bool branch_taken_0x31c5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5ECu;
        // 0x31c5f0: 0x24e70c00  addiu       $a3, $a3, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5ec) {
            ctx->pc = 0x31C5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c5c8;
        }
    }
    ctx->pc = 0x31C5F4u;
label_31c5f4:
    // 0x31c5f4: 0x26c403c0  addiu       $a0, $s6, 0x3C0
    ctx->pc = 0x31c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    // 0x31c5f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31c5fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31c600: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C600u;
    {
        const bool branch_taken_0x31c600 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C600u;
        // 0x31c604: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c600) {
            ctx->pc = 0x31C610u;
            goto label_31c610;
        }
    }
    ctx->pc = 0x31C608u;
    // 0x31c608: 0xc0ce218  jal         func_338860
    ctx->pc = 0x31C608u;
    SET_GPR_U32(ctx, 31, 0x31C610u);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x31C608u, 0x31C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C610u;
label_31c610:
    // 0x31c610: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31c610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c614: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31c614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31c618: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31c618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c61c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x31c61cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31c620: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x31c620u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c624: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x31c624u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31c628: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x31c628u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31c62c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x31c62cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31c630: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x31c630u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31c634: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x31c634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31c638: 0x3e00008  jr          $ra
    ctx->pc = 0x31C638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C638u;
        // 0x31c63c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C640u;
}
