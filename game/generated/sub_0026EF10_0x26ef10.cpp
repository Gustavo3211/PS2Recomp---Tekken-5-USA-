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

// Function: sub_0026EF10
// Address: 0x26ef10 - 0x26fb20
void sub_0026EF10_0x26ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EF10_0x26ef10");
#endif

    switch (ctx->pc) {
        case 0x26ef4cu: goto label_26ef4c;
        case 0x26ef80u: goto label_26ef80;
        case 0x26eff4u: goto label_26eff4;
        case 0x26f03cu: goto label_26f03c;
        case 0x26f05cu: goto label_26f05c;
        case 0x26f0a0u: goto label_26f0a0;
        case 0x26f118u: goto label_26f118;
        case 0x26f138u: goto label_26f138;
        case 0x26f1e4u: goto label_26f1e4;
        case 0x26f210u: goto label_26f210;
        case 0x26f228u: goto label_26f228;
        case 0x26f244u: goto label_26f244;
        case 0x26f270u: goto label_26f270;
        case 0x26f278u: goto label_26f278;
        case 0x26f2ecu: goto label_26f2ec;
        case 0x26f31cu: goto label_26f31c;
        case 0x26f35cu: goto label_26f35c;
        case 0x26f380u: goto label_26f380;
        case 0x26f398u: goto label_26f398;
        case 0x26f3b4u: goto label_26f3b4;
        case 0x26f3d8u: goto label_26f3d8;
        case 0x26f404u: goto label_26f404;
        case 0x26f438u: goto label_26f438;
        case 0x26f474u: goto label_26f474;
        case 0x26f490u: goto label_26f490;
        case 0x26f4d0u: goto label_26f4d0;
        case 0x26f544u: goto label_26f544;
        case 0x26f564u: goto label_26f564;
        case 0x26f5a0u: goto label_26f5a0;
        case 0x26f5c8u: goto label_26f5c8;
        case 0x26f5fcu: goto label_26f5fc;
        case 0x26f620u: goto label_26f620;
        case 0x26f64cu: goto label_26f64c;
        case 0x26f66cu: goto label_26f66c;
        case 0x26f718u: goto label_26f718;
        case 0x26f720u: goto label_26f720;
        case 0x26f768u: goto label_26f768;
        case 0x26f778u: goto label_26f778;
        case 0x26f788u: goto label_26f788;
        case 0x26f7ccu: goto label_26f7cc;
        case 0x26f810u: goto label_26f810;
        case 0x26f828u: goto label_26f828;
        case 0x26f850u: goto label_26f850;
        case 0x26f898u: goto label_26f898;
        case 0x26f8b0u: goto label_26f8b0;
        case 0x26f8e8u: goto label_26f8e8;
        case 0x26f910u: goto label_26f910;
        case 0x26f94cu: goto label_26f94c;
        case 0x26f978u: goto label_26f978;
        case 0x26f9bcu: goto label_26f9bc;
        case 0x26f9f0u: goto label_26f9f0;
        case 0x26fa0cu: goto label_26fa0c;
        case 0x26fa30u: goto label_26fa30;
        case 0x26fa54u: goto label_26fa54;
        case 0x26fa90u: goto label_26fa90;
        case 0x26faccu: goto label_26facc;
        case 0x26fae4u: goto label_26fae4;
        case 0x26faf4u: goto label_26faf4;
        default: break;
    }

    ctx->pc = 0x26ef10u;

    // 0x26ef10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ef14: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26ef18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26ef18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26ef1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26ef1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26ef20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x26ef24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26ef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26ef28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26ef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26ef2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26ef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26ef30: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x26ef30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x26ef34: 0x8ca2013c  lw          $v0, 0x13C($a1)
    ctx->pc = 0x26ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 316)));
    // 0x26ef38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26EF38u;
    {
        const bool branch_taken_0x26ef38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF38u;
        // 0x26ef3c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef38) {
            ctx->pc = 0x26EF50u;
            goto label_26ef50;
        }
    }
    ctx->pc = 0x26EF40u;
    // 0x26ef40: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26ef44: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x26EF44u;
    SET_GPR_U32(ctx, 31, 0x26EF4Cu);
    ctx->pc = 0x26EF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF44u;
    // 0x26ef48: 0x2484bd48  addiu       $a0, $a0, -0x42B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x26EF44u, 0x26EF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF4Cu;
label_26ef4c:
    // 0x26ef4c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26ef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26ef50:
    // 0x26ef50: 0x8ca200b8  lw          $v0, 0xB8($a1)
    ctx->pc = 0x26ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x26ef54: 0x2842001a  slti        $v0, $v0, 0x1A
    ctx->pc = 0x26ef54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x26ef58: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x26EF58u;
    {
        const bool branch_taken_0x26ef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ef58) {
            ctx->pc = 0x26EF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EF58u;
            // 0x26ef5c: 0x8ca30094  lw          $v1, 0x94($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EFBCu;
            goto label_26efbc;
        }
    }
    ctx->pc = 0x26EF60u;
    // 0x26ef60: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x26ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x26ef64: 0x4430015  bgezl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26EF64u;
    {
        const bool branch_taken_0x26ef64 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26ef64) {
            ctx->pc = 0x26EF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EF64u;
            // 0x26ef68: 0x8ca30094  lw          $v1, 0x94($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EFBCu;
            goto label_26efbc;
        }
    }
    ctx->pc = 0x26EF6Cu;
    // 0x26ef6c: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x26ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x26ef70: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x26EF70u;
    {
        const bool branch_taken_0x26ef70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ef70) {
            ctx->pc = 0x26EF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EF70u;
            // 0x26ef74: 0x8ca30094  lw          $v1, 0x94($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EFBCu;
            goto label_26efbc;
        }
    }
    ctx->pc = 0x26EF78u;
    // 0x26ef78: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26EF78u;
    SET_GPR_U32(ctx, 31, 0x26EF80u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26EF78u, 0x26EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF80u;
label_26ef80:
    // 0x26ef80: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26ef84: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x26ef84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x26ef88: 0x8c830298  lw          $v1, 0x298($a0)
    ctx->pc = 0x26ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x26ef8c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ef90: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x26ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x26ef94: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x26ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
    // 0x26ef98: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26ef98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26ef9c: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x26ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x26efa0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x26efa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26efa4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26EFA4u;
    {
        const bool branch_taken_0x26efa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26efa4) {
            ctx->pc = 0x26EFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EFA4u;
            // 0x26efa8: 0x8ca30094  lw          $v1, 0x94($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EFBCu;
            goto label_26efbc;
        }
    }
    ctx->pc = 0x26EFACu;
    // 0x26efac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26efacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26efb0: 0xaca20094  sw          $v0, 0x94($a1)
    ctx->pc = 0x26efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 2));
    // 0x26efb4: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26efb8: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x26efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_26efbc:
    // 0x26efbc: 0x1c6002cf  bgtz        $v1, . + 4 + (0x2CF << 2)
    ctx->pc = 0x26EFBCu;
    {
        const bool branch_taken_0x26efbc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x26EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFBCu;
        // 0x26efc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26efbc) {
            ctx->pc = 0x26FAFCu;
            goto label_26fafc;
        }
    }
    ctx->pc = 0x26EFC4u;
    // 0x26efc4: 0x8ca200dc  lw          $v0, 0xDC($a1)
    ctx->pc = 0x26efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x26efc8: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x26EFC8u;
    {
        const bool branch_taken_0x26efc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26efc8) {
            ctx->pc = 0x26EFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EFC8u;
            // 0x26efcc: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F054u;
            goto label_26f054;
        }
    }
    ctx->pc = 0x26EFD0u;
    // 0x26efd0: 0x8ca200e4  lw          $v0, 0xE4($a1)
    ctx->pc = 0x26efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x26efd4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x26EFD4u;
    {
        const bool branch_taken_0x26efd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26efd4) {
            ctx->pc = 0x26EFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EFD4u;
            // 0x26efd8: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F054u;
            goto label_26f054;
        }
    }
    ctx->pc = 0x26EFDCu;
    // 0x26efdc: 0x8ca200b8  lw          $v0, 0xB8($a1)
    ctx->pc = 0x26efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x26efe0: 0x2842001a  slti        $v0, $v0, 0x1A
    ctx->pc = 0x26efe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x26efe4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x26EFE4u;
    {
        const bool branch_taken_0x26efe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26efe4) {
            ctx->pc = 0x26EFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EFE4u;
            // 0x26efe8: 0x8ca200bc  lw          $v0, 0xBC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F024u;
            goto label_26f024;
        }
    }
    ctx->pc = 0x26EFECu;
    // 0x26efec: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26EFECu;
    SET_GPR_U32(ctx, 31, 0x26EFF4u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26EFECu, 0x26EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFF4u;
label_26eff4:
    // 0x26eff4: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26eff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26eff8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26eff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26effc: 0x94a30380  lhu         $v1, 0x380($a1)
    ctx->pc = 0x26effcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x26f000: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x26f000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x26f004: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x26f004u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x26f008: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x26f008u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x26f00c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26f010: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x26f010u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x26f014: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f018: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x26F018u;
    {
        const bool branch_taken_0x26f018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f018) {
            ctx->pc = 0x26F01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F018u;
            // 0x26f01c: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F054u;
            goto label_26f054;
        }
    }
    ctx->pc = 0x26F020u;
    // 0x26f020: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x26f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
label_26f024:
    // 0x26f024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26f024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26f028: 0x2c420013  sltiu       $v0, $v0, 0x13
    ctx->pc = 0x26f028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x26f02c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F02Cu;
    {
        const bool branch_taken_0x26f02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f02c) {
            ctx->pc = 0x26F054u;
            goto label_26f054;
        }
    }
    ctx->pc = 0x26F034u;
    // 0x26f034: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F034u;
    SET_GPR_U32(ctx, 31, 0x26F03Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F034u, 0x26F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F03Cu;
label_26f03c:
    // 0x26f03c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f040: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f044: 0x84640380  lh          $a0, 0x380($v1)
    ctx->pc = 0x26f044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x26f048: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26f048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26f04c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26F04Cu;
    {
        const bool branch_taken_0x26f04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f04c) {
            ctx->pc = 0x26F050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F04Cu;
            // 0x26f050: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F054u;
            goto label_26f054;
        }
    }
    ctx->pc = 0x26F054u;
label_26f054:
    // 0x26f054: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F054u;
    SET_GPR_U32(ctx, 31, 0x26F05Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F054u, 0x26F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F05Cu;
label_26f05c:
    // 0x26f05c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26f05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f060: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f064: 0x84a30382  lh          $v1, 0x382($a1)
    ctx->pc = 0x26f064u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 898)));
    // 0x26f068: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f06c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26F06Cu;
    {
        const bool branch_taken_0x26f06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F06Cu;
        // 0x26f070: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f06c) {
            ctx->pc = 0x26F110u;
            goto label_26f110;
        }
    }
    ctx->pc = 0x26F074u;
    // 0x26f074: 0x90c201f9  lbu         $v0, 0x1F9($a2)
    ctx->pc = 0x26f074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 505)));
    // 0x26f078: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x26F078u;
    {
        const bool branch_taken_0x26f078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f078) {
            ctx->pc = 0x26F07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F078u;
            // 0x26f07c: 0x94a3032c  lhu         $v1, 0x32C($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F0B0u;
            goto label_26f0b0;
        }
    }
    ctx->pc = 0x26F080u;
    // 0x26f080: 0x90c30185  lbu         $v1, 0x185($a2)
    ctx->pc = 0x26f080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 389)));
    // 0x26f084: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x26f084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x26f088: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26F088u;
    {
        const bool branch_taken_0x26f088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F088u;
        // 0x26f08c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f088) {
            ctx->pc = 0x26F0ACu;
            goto label_26f0ac;
        }
    }
    ctx->pc = 0x26F090u;
    // 0x26f090: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F090u;
    {
        const bool branch_taken_0x26f090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f090) {
            ctx->pc = 0x26F094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F090u;
            // 0x26f094: 0x94a3032c  lhu         $v1, 0x32C($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F0B0u;
            goto label_26f0b0;
        }
    }
    ctx->pc = 0x26F098u;
    // 0x26f098: 0xc099c32  jal         func_2670C8
    ctx->pc = 0x26F098u;
    SET_GPR_U32(ctx, 31, 0x26F0A0u);
    ctx->pc = 0x2670C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2670C8u, 0x26F098u, 0x26F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F0A0u;
label_26f0a0:
    // 0x26f0a0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26F0A0u;
    {
        const bool branch_taken_0x26f0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0A0u;
        // 0x26f0a4: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0a0) {
            ctx->pc = 0x26F10Cu;
            goto label_26f10c;
        }
    }
    ctx->pc = 0x26F0A8u;
    // 0x26f0a8: 0x8f86aa80  lw          $a2, -0x5580($gp)
    ctx->pc = 0x26f0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_26f0ac:
    // 0x26f0ac: 0x94a3032c  lhu         $v1, 0x32C($a1)
    ctx->pc = 0x26f0acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 812)));
label_26f0b0:
    // 0x26f0b0: 0x24027402  addiu       $v0, $zero, 0x7402
    ctx->pc = 0x26f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29698));
    // 0x26f0b4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26F0B4u;
    {
        const bool branch_taken_0x26f0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f0b4) {
            ctx->pc = 0x26F110u;
            goto label_26f110;
        }
    }
    ctx->pc = 0x26F0BCu;
    // 0x26f0bc: 0x8cc400c4  lw          $a0, 0xC4($a2)
    ctx->pc = 0x26f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x26f0c0: 0x84c70096  lh          $a3, 0x96($a2)
    ctx->pc = 0x26f0c0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 150)));
    // 0x26f0c4: 0x94830026  lhu         $v1, 0x26($a0)
    ctx->pc = 0x26f0c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x26f0c8: 0x94840028  lhu         $a0, 0x28($a0)
    ctx->pc = 0x26f0c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x26f0cc: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x26f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f0d0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x26f0d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x26f0d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f0d8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x26f0d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f0dc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26F0DCu;
    {
        const bool branch_taken_0x26f0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0DCu;
        // 0x26f0e0: 0x87102a  slt         $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0dc) {
            ctx->pc = 0x26F110u;
            goto label_26f110;
        }
    }
    ctx->pc = 0x26F0E4u;
    // 0x26f0e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26F0E4u;
    {
        const bool branch_taken_0x26f0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0E4u;
        // 0x26f0e8: 0x8f83aa7c  lw          $v1, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0e4) {
            ctx->pc = 0x26F110u;
            goto label_26f110;
        }
    }
    ctx->pc = 0x26F0ECu;
    // 0x26f0ec: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x26f0ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x26f0f0: 0x28424001  slti        $v0, $v0, 0x4001
    ctx->pc = 0x26f0f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16385) ? 1 : 0);
    // 0x26f0f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F0F4u;
    {
        const bool branch_taken_0x26f0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0F4u;
        // 0x26f0f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0f4) {
            ctx->pc = 0x26F110u;
            goto label_26f110;
        }
    }
    ctx->pc = 0x26F0FCu;
    // 0x26f0fc: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x26f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x26f100: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F100u;
    {
        const bool branch_taken_0x26f100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F100u;
        // 0x26f104: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f100) {
            ctx->pc = 0x26F110u;
            goto label_26f110;
        }
    }
    ctx->pc = 0x26F108u;
    // 0x26f108: 0xaca2008c  sw          $v0, 0x8C($a1)
    ctx->pc = 0x26f108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 2));
label_26f10c:
    // 0x26f10c: 0x8f86aa80  lw          $a2, -0x5580($gp)
    ctx->pc = 0x26f10cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_26f110:
    // 0x26f110: 0xc099128  jal         func_2644A0
    ctx->pc = 0x26F110u;
    SET_GPR_U32(ctx, 31, 0x26F118u);
    ctx->pc = 0x26F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F110u;
    // 0x26f114: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2644A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644A0u, 0x26F110u, 0x26F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F118u;
label_26f118:
    // 0x26f118: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26F118u;
    {
        const bool branch_taken_0x26f118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F118u;
        // 0x26f11c: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f118) {
            ctx->pc = 0x26F15Cu;
            goto label_26f15c;
        }
    }
    ctx->pc = 0x26F120u;
    // 0x26f120: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x26f120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x26f124: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x26f124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26f128: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x26F128u;
    {
        const bool branch_taken_0x26f128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f128) {
            ctx->pc = 0x26F12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F128u;
            // 0x26f12c: 0x8ca2032c  lw          $v0, 0x32C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F164u;
            goto label_26f164;
        }
    }
    ctx->pc = 0x26F130u;
    // 0x26f130: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F130u;
    SET_GPR_U32(ctx, 31, 0x26F138u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F130u, 0x26F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F138u;
label_26f138:
    // 0x26f138: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26f138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f13c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f140: 0x84a3035a  lh          $v1, 0x35A($a1)
    ctx->pc = 0x26f140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 858)));
    // 0x26f144: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f148: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F148u;
    {
        const bool branch_taken_0x26f148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f148) {
            ctx->pc = 0x26F14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F148u;
            // 0x26f14c: 0x8ca2032c  lw          $v0, 0x32C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F164u;
            goto label_26f164;
        }
    }
    ctx->pc = 0x26F150u;
    // 0x26f150: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x26f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x26f154: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x26f154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x26f158: 0xaca2008c  sw          $v0, 0x8C($a1)
    ctx->pc = 0x26f158u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 2));
label_26f15c:
    // 0x26f15c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f160: 0x8ca2032c  lw          $v0, 0x32C($a1)
    ctx->pc = 0x26f160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 812)));
label_26f164:
    // 0x26f164: 0x30420605  andi        $v0, $v0, 0x605
    ctx->pc = 0x26f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1541);
    // 0x26f168: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26F168u;
    {
        const bool branch_taken_0x26f168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F168u;
        // 0x26f16c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f168) {
            ctx->pc = 0x26F1A0u;
            goto label_26f1a0;
        }
    }
    ctx->pc = 0x26F170u;
    // 0x26f170: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x26f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x26f174: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x26f174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x26f178: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26f178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26f17c: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x26f17cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x26f180: 0xdc4301f8  ld          $v1, 0x1F8($v0)
    ctx->pc = 0x26f180u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x26f184: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26f184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26f188: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F188u;
    {
        const bool branch_taken_0x26f188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f188) {
            ctx->pc = 0x26F18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F188u;
            // 0x26f18c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F1A4u;
            goto label_26f1a4;
        }
    }
    ctx->pc = 0x26F190u;
    // 0x26f190: 0x8ca20298  lw          $v0, 0x298($a1)
    ctx->pc = 0x26f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 664)));
    // 0x26f194: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x26f194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x26f198: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26F198u;
    {
        const bool branch_taken_0x26f198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f198) {
            ctx->pc = 0x26F1A4u;
            goto label_26f1a4;
        }
    }
    ctx->pc = 0x26F1A0u;
label_26f1a0:
    // 0x26f1a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26f1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f1a4:
    // 0x26f1a4: 0x50c00004  beql        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F1A4u;
    {
        const bool branch_taken_0x26f1a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f1a4) {
            ctx->pc = 0x26F1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F1A4u;
            // 0x26f1a8: 0x8ca20294  lw          $v0, 0x294($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F1B8u;
            goto label_26f1b8;
        }
    }
    ctx->pc = 0x26F1ACu;
    // 0x26f1ac: 0xaca000e4  sw          $zero, 0xE4($a1)
    ctx->pc = 0x26f1acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 228), GPR_U32(ctx, 0));
    // 0x26f1b0: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f1b4: 0x8ca20294  lw          $v0, 0x294($a1)
    ctx->pc = 0x26f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 660)));
label_26f1b8:
    // 0x26f1b8: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x26F1B8u;
    {
        const bool branch_taken_0x26f1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f1b8) {
            ctx->pc = 0x26F1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F1B8u;
            // 0x26f1bc: 0x94a3032c  lhu         $v1, 0x32C($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F308u;
            goto label_26f308;
        }
    }
    ctx->pc = 0x26F1C0u;
    // 0x26f1c0: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x26f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x26f1c4: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x26F1C4u;
    {
        const bool branch_taken_0x26f1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f1c4) {
            ctx->pc = 0x26F1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F1C4u;
            // 0x26f1c8: 0x94a3032c  lhu         $v1, 0x32C($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F308u;
            goto label_26f308;
        }
    }
    ctx->pc = 0x26F1CCu;
    // 0x26f1cc: 0x8ca20074  lw          $v0, 0x74($a1)
    ctx->pc = 0x26f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x26f1d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26f1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1d4: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x26F1D4u;
    {
        const bool branch_taken_0x26f1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1D4u;
        // 0x26f1d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1d4) {
            ctx->pc = 0x26F2F4u;
            goto label_26f2f4;
        }
    }
    ctx->pc = 0x26F1DCu;
    // 0x26f1dc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F1DCu;
    SET_GPR_U32(ctx, 31, 0x26F1E4u);
    ctx->pc = 0x26F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F1DCu;
    // 0x26f1e0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F1DCu, 0x26F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F1E4u;
label_26f1e4:
    // 0x26f1e4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f1e8: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x26f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26f1ec: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f1f0: 0x84640380  lh          $a0, 0x380($v1)
    ctx->pc = 0x26f1f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x26f1f4: 0x84a30080  lh          $v1, 0x80($a1)
    ctx->pc = 0x26f1f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x26f1f8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26f1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26f1fc: 0x28634001  slti        $v1, $v1, 0x4001
    ctx->pc = 0x26f1fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16385) ? 1 : 0);
    // 0x26f200: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26F200u;
    {
        const bool branch_taken_0x26f200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F200u;
        // 0x26f204: 0x242880b  movn        $s1, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f200) {
            ctx->pc = 0x26F234u;
            goto label_26f234;
        }
    }
    ctx->pc = 0x26F208u;
    // 0x26f208: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F208u;
    SET_GPR_U32(ctx, 31, 0x26F210u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F208u, 0x26F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F210u;
label_26f210:
    // 0x26f210: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x26f210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x26f214: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F214u;
    {
        const bool branch_taken_0x26f214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f214) {
            ctx->pc = 0x26F234u;
            goto label_26f234;
        }
    }
    ctx->pc = 0x26F21Cu;
    // 0x26f21c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f220: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26F220u;
    SET_GPR_U32(ctx, 31, 0x26F228u);
    ctx->pc = 0x26F224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F220u;
    // 0x26f224: 0x2484c7f0  addiu       $a0, $a0, -0x3810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26F220u, 0x26F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F228u;
label_26f228:
    // 0x26f228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f22c: 0x1e000031  bgtz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x26F22Cu;
    {
        const bool branch_taken_0x26f22c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x26F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F22Cu;
        // 0x26f230: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f22c) {
            ctx->pc = 0x26F2F4u;
            goto label_26f2f4;
        }
    }
    ctx->pc = 0x26F234u;
label_26f234:
    // 0x26f234: 0x621002f  bgez        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x26F234u;
    {
        const bool branch_taken_0x26f234 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x26F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F234u;
        // 0x26f238: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f234) {
            ctx->pc = 0x26F2F4u;
            goto label_26f2f4;
        }
    }
    ctx->pc = 0x26F23Cu;
    // 0x26f23c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F23Cu;
    SET_GPR_U32(ctx, 31, 0x26F244u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F23Cu, 0x26F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F244u;
label_26f244:
    // 0x26f244: 0x30440fff  andi        $a0, $v0, 0xFFF
    ctx->pc = 0x26f244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f248: 0x28820334  slti        $v0, $a0, 0x334
    ctx->pc = 0x26f248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)820) ? 1 : 0);
    // 0x26f24c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F24Cu;
    {
        const bool branch_taken_0x26f24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F24Cu;
        // 0x26f250: 0x288203af  slti        $v0, $a0, 0x3AF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)943) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f24c) {
            ctx->pc = 0x26F260u;
            goto label_26f260;
        }
    }
    ctx->pc = 0x26F254u;
    // 0x26f254: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f258: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26F258u;
    {
        const bool branch_taken_0x26f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F258u;
        // 0x26f25c: 0x2484c4d8  addiu       $a0, $a0, -0x3B28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f258) {
            ctx->pc = 0x26F2E4u;
            goto label_26f2e4;
        }
    }
    ctx->pc = 0x26F260u;
label_26f260:
    // 0x26f260: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F260u;
    {
        const bool branch_taken_0x26f260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F260u;
        // 0x26f264: 0x288206e2  slti        $v0, $a0, 0x6E2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1762) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f260) {
            ctx->pc = 0x26F280u;
            goto label_26f280;
        }
    }
    ctx->pc = 0x26F268u;
    // 0x26f268: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F268u;
    SET_GPR_U32(ctx, 31, 0x26F270u);
    ctx->pc = 0x26F26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F268u;
    // 0x26f26c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F268u, 0x26F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F270u;
label_26f270:
    // 0x26f270: 0xc09d14c  jal         func_274530
    ctx->pc = 0x26F270u;
    SET_GPR_U32(ctx, 31, 0x26F278u);
    ctx->pc = 0x26F274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F270u;
    // 0x26f274: 0x30440001  andi        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x274530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274530u, 0x26F270u, 0x26F278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F278u;
label_26f278:
    // 0x26f278: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26F278u;
    {
        const bool branch_taken_0x26f278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F278u;
        // 0x26f27c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f278) {
            ctx->pc = 0x26F2F4u;
            goto label_26f2f4;
        }
    }
    ctx->pc = 0x26F280u;
label_26f280:
    // 0x26f280: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F280u;
    {
        const bool branch_taken_0x26f280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F280u;
        // 0x26f284: 0x2882075d  slti        $v0, $a0, 0x75D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1885) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f280) {
            ctx->pc = 0x26F298u;
            goto label_26f298;
        }
    }
    ctx->pc = 0x26F288u;
    // 0x26f288: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f28c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26F28Cu;
    {
        const bool branch_taken_0x26f28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F28Cu;
        // 0x26f290: 0x2484c450  addiu       $a0, $a0, -0x3BB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f28c) {
            ctx->pc = 0x26F2E4u;
            goto label_26f2e4;
        }
    }
    ctx->pc = 0x26F294u;
    // 0x26f294: 0x0  nop
    ctx->pc = 0x26f294u;
    // NOP
label_26f298:
    // 0x26f298: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26F298u;
    {
        const bool branch_taken_0x26f298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F298u;
        // 0x26f29c: 0x28820829  slti        $v0, $a0, 0x829 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2089) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f298) {
            ctx->pc = 0x26F2C8u;
            goto label_26f2c8;
        }
    }
    ctx->pc = 0x26F2A0u;
    // 0x26f2a0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f2a4: 0x8c620320  lw          $v0, 0x320($v1)
    ctx->pc = 0x26f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x26f2a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26f2ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26f2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26f2b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F2B0u;
    {
        const bool branch_taken_0x26f2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2B0u;
        // 0x26f2b4: 0x28820829  slti        $v0, $a0, 0x829 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2089) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2b0) {
            ctx->pc = 0x26F2C8u;
            goto label_26f2c8;
        }
    }
    ctx->pc = 0x26F2B8u;
    // 0x26f2b8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f2bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26F2BCu;
    {
        const bool branch_taken_0x26f2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2BCu;
        // 0x26f2c0: 0x2484c760  addiu       $a0, $a0, -0x38A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2bc) {
            ctx->pc = 0x26F2E4u;
            goto label_26f2e4;
        }
    }
    ctx->pc = 0x26F2C4u;
    // 0x26f2c4: 0x0  nop
    ctx->pc = 0x26f2c4u;
    // NOP
label_26f2c8:
    // 0x26f2c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F2C8u;
    {
        const bool branch_taken_0x26f2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f2c8) {
            ctx->pc = 0x26F2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F2C8u;
            // 0x26f2cc: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F2E0u;
            goto label_26f2e0;
        }
    }
    ctx->pc = 0x26F2D0u;
    // 0x26f2d0: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f2d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F2D4u;
    {
        const bool branch_taken_0x26f2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2D4u;
        // 0x26f2d8: 0x2484c7d8  addiu       $a0, $a0, -0x3828 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2d4) {
            ctx->pc = 0x26F2E4u;
            goto label_26f2e4;
        }
    }
    ctx->pc = 0x26F2DCu;
    // 0x26f2dc: 0x0  nop
    ctx->pc = 0x26f2dcu;
    // NOP
label_26f2e0:
    // 0x26f2e0: 0x2484c490  addiu       $a0, $a0, -0x3B70
    ctx->pc = 0x26f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952080));
label_26f2e4:
    // 0x26f2e4: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26F2E4u;
    SET_GPR_U32(ctx, 31, 0x26F2ECu);
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26F2E4u, 0x26F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F2ECu;
label_26f2ec:
    // 0x26f2ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2f0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x26f2f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f2f4:
    // 0x26f2f4: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x26f2f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2f8: 0x6830200  bgezl       $s4, . + 4 + (0x200 << 2)
    ctx->pc = 0x26F2F8u;
    {
        const bool branch_taken_0x26f2f8 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x26f2f8) {
            ctx->pc = 0x26F2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F2F8u;
            // 0x26f2fc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FAFCu;
            goto label_26fafc;
        }
    }
    ctx->pc = 0x26F300u;
    // 0x26f300: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x26F300u;
    {
        const bool branch_taken_0x26f300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F300u;
        // 0x26f304: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f300) {
            ctx->pc = 0x26FAFCu;
            goto label_26fafc;
        }
    }
    ctx->pc = 0x26F308u;
label_26f308:
    // 0x26f308: 0x24027402  addiu       $v0, $zero, 0x7402
    ctx->pc = 0x26f308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29698));
    // 0x26f30c: 0x5462005c  bnel        $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x26F30Cu;
    {
        const bool branch_taken_0x26f30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f30c) {
            ctx->pc = 0x26F310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F30Cu;
            // 0x26f310: 0x8ca20060  lw          $v0, 0x60($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F480u;
            goto label_26f480;
        }
    }
    ctx->pc = 0x26F314u;
    // 0x26f314: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F314u;
    SET_GPR_U32(ctx, 31, 0x26F31Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F314u, 0x26F31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F31Cu;
label_26f31c:
    // 0x26f31c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26f31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f320: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f324: 0x84a30376  lh          $v1, 0x376($a1)
    ctx->pc = 0x26f324u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 886)));
    // 0x26f328: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f32c: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x26F32Cu;
    {
        const bool branch_taken_0x26f32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f32c) {
            ctx->pc = 0x26F330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F32Cu;
            // 0x26f330: 0x8ca20060  lw          $v0, 0x60($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F480u;
            goto label_26f480;
        }
    }
    ctx->pc = 0x26F334u;
    // 0x26f334: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x26f334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x26f338: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x26f338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26f33c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26F33Cu;
    {
        const bool branch_taken_0x26f33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F33Cu;
        // 0x26f340: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f33c) {
            ctx->pc = 0x26F3A0u;
            goto label_26f3a0;
        }
    }
    ctx->pc = 0x26F344u;
    // 0x26f344: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x26f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x26f348: 0x28420033  slti        $v0, $v0, 0x33
    ctx->pc = 0x26f348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x26f34c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26F34Cu;
    {
        const bool branch_taken_0x26f34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F34Cu;
        // 0x26f350: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f34c) {
            ctx->pc = 0x26F378u;
            goto label_26f378;
        }
    }
    ctx->pc = 0x26F354u;
    // 0x26f354: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F354u;
    SET_GPR_U32(ctx, 31, 0x26F35Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F354u, 0x26F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F35Cu;
label_26f35c:
    // 0x26f35c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x26f35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x26f360: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F360u;
    {
        const bool branch_taken_0x26f360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f360) {
            ctx->pc = 0x26F364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F360u;
            // 0x26f364: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F378u;
            goto label_26f378;
        }
    }
    ctx->pc = 0x26F368u;
    // 0x26f368: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f36c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26F36Cu;
    {
        const bool branch_taken_0x26f36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F36Cu;
        // 0x26f370: 0x2484c788  addiu       $a0, $a0, -0x3878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f36c) {
            ctx->pc = 0x26F3D0u;
            goto label_26f3d0;
        }
    }
    ctx->pc = 0x26F374u;
    // 0x26f374: 0x0  nop
    ctx->pc = 0x26f374u;
    // NOP
label_26f378:
    // 0x26f378: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26F378u;
    SET_GPR_U32(ctx, 31, 0x26F380u);
    ctx->pc = 0x26F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F378u;
    // 0x26f37c: 0x2484c7c0  addiu       $a0, $a0, -0x3840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26F378u, 0x26F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F380u;
label_26f380:
    // 0x26f380: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f384: 0x5a000016  blezl       $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26F384u;
    {
        const bool branch_taken_0x26f384 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x26f384) {
            ctx->pc = 0x26F388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F384u;
            // 0x26f388: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F3E0u;
            goto label_26f3e0;
        }
    }
    ctx->pc = 0x26F38Cu;
    // 0x26f38c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26f38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26f390: 0xc099356  jal         func_264D58
    ctx->pc = 0x26F390u;
    SET_GPR_U32(ctx, 31, 0x26F398u);
    ctx->pc = 0x26F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F390u;
    // 0x26f394: 0x240400fa  addiu       $a0, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D58u, 0x26F390u, 0x26F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F398u;
label_26f398:
    // 0x26f398: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26F398u;
    {
        const bool branch_taken_0x26f398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F398u;
        // 0x26f39c: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f398) {
            ctx->pc = 0x26F3E0u;
            goto label_26f3e0;
        }
    }
    ctx->pc = 0x26F3A0u;
label_26f3a0:
    // 0x26f3a0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x26f3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26f3a4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x26F3A4u;
    {
        const bool branch_taken_0x26f3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f3a4) {
            ctx->pc = 0x26F3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F3A4u;
            // 0x26f3a8: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F3E4u;
            goto label_26f3e4;
        }
    }
    ctx->pc = 0x26F3ACu;
    // 0x26f3ac: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F3ACu;
    SET_GPR_U32(ctx, 31, 0x26F3B4u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F3ACu, 0x26F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3B4u;
label_26f3b4:
    // 0x26f3b4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x26f3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x26f3b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F3B8u;
    {
        const bool branch_taken_0x26f3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3B8u;
        // 0x26f3bc: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3b8) {
            ctx->pc = 0x26F3C8u;
            goto label_26f3c8;
        }
    }
    ctx->pc = 0x26F3C0u;
    // 0x26f3c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F3C0u;
    {
        const bool branch_taken_0x26f3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3C0u;
        // 0x26f3c4: 0x2484c788  addiu       $a0, $a0, -0x3878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3c0) {
            ctx->pc = 0x26F3D0u;
            goto label_26f3d0;
        }
    }
    ctx->pc = 0x26F3C8u;
label_26f3c8:
    // 0x26f3c8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f3cc: 0x2484c7c0  addiu       $a0, $a0, -0x3840
    ctx->pc = 0x26f3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952896));
label_26f3d0:
    // 0x26f3d0: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26F3D0u;
    SET_GPR_U32(ctx, 31, 0x26F3D8u);
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26F3D0u, 0x26F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3D8u;
label_26f3d8:
    // 0x26f3d8: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26f3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f3dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f3e0:
    // 0x26f3e0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x26f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_26f3e4:
    // 0x26f3e4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x26f3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26f3e8: 0x104001c3  beqz        $v0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x26F3E8u;
    {
        const bool branch_taken_0x26f3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3E8u;
        // 0x26f3ec: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3e8) {
            ctx->pc = 0x26FAF8u;
            goto label_26faf8;
        }
    }
    ctx->pc = 0x26F3F0u;
    // 0x26f3f0: 0x8ca202bc  lw          $v0, 0x2BC($a1)
    ctx->pc = 0x26f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 700)));
    // 0x26f3f4: 0x144001c1  bnez        $v0, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x26F3F4u;
    {
        const bool branch_taken_0x26f3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3F4u;
        // 0x26f3f8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3f4) {
            ctx->pc = 0x26FAFCu;
            goto label_26fafc;
        }
    }
    ctx->pc = 0x26F3FCu;
    // 0x26f3fc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F3FCu;
    SET_GPR_U32(ctx, 31, 0x26F404u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F3FCu, 0x26F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F404u;
label_26f404:
    // 0x26f404: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26f404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f408: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f40c: 0x84830380  lh          $v1, 0x380($a0)
    ctx->pc = 0x26f40cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x26f410: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f414: 0x144001b8  bnez        $v0, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x26F414u;
    {
        const bool branch_taken_0x26f414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F414u;
        // 0x26f418: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f414) {
            ctx->pc = 0x26FAF8u;
            goto label_26faf8;
        }
    }
    ctx->pc = 0x26F41Cu;
    // 0x26f41c: 0xac82008c  sw          $v0, 0x8C($a0)
    ctx->pc = 0x26f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
    // 0x26f420: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x26f420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x26f424: 0x906201f9  lbu         $v0, 0x1F9($v1)
    ctx->pc = 0x26f424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 505)));
    // 0x26f428: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26F428u;
    {
        const bool branch_taken_0x26f428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F428u;
        // 0x26f42c: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f428) {
            ctx->pc = 0x26F468u;
            goto label_26f468;
        }
    }
    ctx->pc = 0x26F430u;
    // 0x26f430: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F430u;
    SET_GPR_U32(ctx, 31, 0x26F438u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F430u, 0x26F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F438u;
label_26f438:
    // 0x26f438: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26f438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x26f43c: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x26f43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x26f440: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F440u;
    {
        const bool branch_taken_0x26f440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F440u;
        // 0x26f444: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f440) {
            ctx->pc = 0x26F468u;
            goto label_26f468;
        }
    }
    ctx->pc = 0x26F448u;
    // 0x26f448: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f44c: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x26f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x26f450: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F450u;
    {
        const bool branch_taken_0x26f450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f450) {
            ctx->pc = 0x26F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F450u;
            // 0x26f454: 0x2484c180  addiu       $a0, $a0, -0x3E80 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951296));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F46Cu;
            goto label_26f46c;
        }
    }
    ctx->pc = 0x26F458u;
    // 0x26f458: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f45c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F45Cu;
    {
        const bool branch_taken_0x26f45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F45Cu;
        // 0x26f460: 0x2484c218  addiu       $a0, $a0, -0x3DE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f45c) {
            ctx->pc = 0x26F46Cu;
            goto label_26f46c;
        }
    }
    ctx->pc = 0x26F464u;
    // 0x26f464: 0x0  nop
    ctx->pc = 0x26f464u;
    // NOP
label_26f468:
    // 0x26f468: 0x2484c180  addiu       $a0, $a0, -0x3E80
    ctx->pc = 0x26f468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951296));
label_26f46c:
    // 0x26f46c: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26F46Cu;
    SET_GPR_U32(ctx, 31, 0x26F474u);
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26F46Cu, 0x26F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F474u;
label_26f474:
    // 0x26f474: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26f474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26f478: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x26F478u;
    {
        const bool branch_taken_0x26f478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F478u;
        // 0x26f47c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f478) {
            ctx->pc = 0x26FAF8u;
            goto label_26faf8;
        }
    }
    ctx->pc = 0x26F480u;
label_26f480:
    // 0x26f480: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26F480u;
    {
        const bool branch_taken_0x26f480 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F480u;
        // 0x26f484: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f480) {
            ctx->pc = 0x26F4B0u;
            goto label_26f4b0;
        }
    }
    ctx->pc = 0x26F488u;
    // 0x26f488: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26F488u;
    SET_GPR_U32(ctx, 31, 0x26F490u);
    ctx->pc = 0x26F48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F488u;
    // 0x26f48c: 0x2484c8c0  addiu       $a0, $a0, -0x3740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26F488u, 0x26F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F490u;
label_26f490:
    // 0x26f490: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26f490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f494: 0x1a800199  blez        $s4, . + 4 + (0x199 << 2)
    ctx->pc = 0x26F494u;
    {
        const bool branch_taken_0x26f494 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x26F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F494u;
        // 0x26f498: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f494) {
            ctx->pc = 0x26FAFCu;
            goto label_26fafc;
        }
    }
    ctx->pc = 0x26F49Cu;
    // 0x26f49c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f4a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f4a4: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x26F4A4u;
    {
        const bool branch_taken_0x26f4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4A4u;
        // 0x26f4a8: 0xac620060  sw          $v0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4a4) {
            ctx->pc = 0x26FAF8u;
            goto label_26faf8;
        }
    }
    ctx->pc = 0x26F4ACu;
    // 0x26f4ac: 0x0  nop
    ctx->pc = 0x26f4acu;
    // NOP
label_26f4b0:
    // 0x26f4b0: 0x8ca202a0  lw          $v0, 0x2A0($a1)
    ctx->pc = 0x26f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 672)));
    // 0x26f4b4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x26F4B4u;
    {
        const bool branch_taken_0x26f4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f4b4) {
            ctx->pc = 0x26F4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F4B4u;
            // 0x26f4b8: 0x8ca2029c  lw          $v0, 0x29C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 668)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F510u;
            goto label_26f510;
        }
    }
    ctx->pc = 0x26F4BCu;
    // 0x26f4bc: 0x8ca200dc  lw          $v0, 0xDC($a1)
    ctx->pc = 0x26f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x26f4c0: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x26F4C0u;
    {
        const bool branch_taken_0x26f4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f4c0) {
            ctx->pc = 0x26F55Cu;
            goto label_26f55c;
        }
    }
    ctx->pc = 0x26F4C8u;
    // 0x26f4c8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F4C8u;
    SET_GPR_U32(ctx, 31, 0x26F4D0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F4C8u, 0x26F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F4D0u;
label_26f4d0:
    // 0x26f4d0: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f4d4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f4d8: 0x8483035a  lh          $v1, 0x35A($a0)
    ctx->pc = 0x26f4d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 858)));
    // 0x26f4dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f4e0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x26F4E0u;
    {
        const bool branch_taken_0x26f4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f4e0) {
            ctx->pc = 0x26F55Cu;
            goto label_26f55c;
        }
    }
    ctx->pc = 0x26F4E8u;
    // 0x26f4e8: 0x1e400184  bgtz        $s2, . + 4 + (0x184 << 2)
    ctx->pc = 0x26F4E8u;
    {
        const bool branch_taken_0x26f4e8 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x26F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4E8u;
        // 0x26f4ec: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4e8) {
            ctx->pc = 0x26FAFCu;
            goto label_26fafc;
        }
    }
    ctx->pc = 0x26F4F0u;
    // 0x26f4f0: 0x8c82032c  lw          $v0, 0x32C($a0)
    ctx->pc = 0x26f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
    // 0x26f4f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26f4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26f4f8: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x26F4F8u;
    {
        const bool branch_taken_0x26f4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f4f8) {
            ctx->pc = 0x26F4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F4F8u;
            // 0x26f4fc: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F598u;
            goto label_26f598;
        }
    }
    ctx->pc = 0x26F500u;
    // 0x26f500: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f504: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x26F504u;
    {
        const bool branch_taken_0x26f504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F504u;
        // 0x26f508: 0x2484be18  addiu       $a0, $a0, -0x41E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f504) {
            ctx->pc = 0x26F848u;
            goto label_26f848;
        }
    }
    ctx->pc = 0x26F50Cu;
    // 0x26f50c: 0x0  nop
    ctx->pc = 0x26f50cu;
    // NOP
label_26f510:
    // 0x26f510: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F510u;
    {
        const bool branch_taken_0x26f510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f510) {
            ctx->pc = 0x26F514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F510u;
            // 0x26f514: 0x8ca200c0  lw          $v0, 0xC0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F528u;
            goto label_26f528;
        }
    }
    ctx->pc = 0x26F518u;
    // 0x26f518: 0x8ca202ac  lw          $v0, 0x2AC($a1)
    ctx->pc = 0x26f518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 684)));
    // 0x26f51c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26F51Cu;
    {
        const bool branch_taken_0x26f51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f51c) {
            ctx->pc = 0x26F5A8u;
            goto label_26f5a8;
        }
    }
    ctx->pc = 0x26F524u;
    // 0x26f524: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x26f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
label_26f528:
    // 0x26f528: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x26F528u;
    {
        const bool branch_taken_0x26f528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f528) {
            ctx->pc = 0x26F5A8u;
            goto label_26f5a8;
        }
    }
    ctx->pc = 0x26F530u;
    // 0x26f530: 0x8ca200dc  lw          $v0, 0xDC($a1)
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x26f534: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F534u;
    {
        const bool branch_taken_0x26f534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f534) {
            ctx->pc = 0x26F55Cu;
            goto label_26f55c;
        }
    }
    ctx->pc = 0x26F53Cu;
    // 0x26f53c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F53Cu;
    SET_GPR_U32(ctx, 31, 0x26F544u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F53Cu, 0x26F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F544u;
label_26f544:
    // 0x26f544: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26f544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f548: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f54c: 0x8483035a  lh          $v1, 0x35A($a0)
    ctx->pc = 0x26f54cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 858)));
    // 0x26f550: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f554: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F554u;
    {
        const bool branch_taken_0x26f554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f554) {
            ctx->pc = 0x26F570u;
            goto label_26f570;
        }
    }
    ctx->pc = 0x26F55Cu;
label_26f55c:
    // 0x26f55c: 0xc09b404  jal         func_26D010
    ctx->pc = 0x26F55Cu;
    SET_GPR_U32(ctx, 31, 0x26F564u);
    ctx->pc = 0x26D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D010u, 0x26F55Cu, 0x26F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F564u;
label_26f564:
    // 0x26f564: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x26F564u;
    {
        const bool branch_taken_0x26f564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F564u;
        // 0x26f568: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f564) {
            ctx->pc = 0x26FAF8u;
            goto label_26faf8;
        }
    }
    ctx->pc = 0x26F56Cu;
    // 0x26f56c: 0x0  nop
    ctx->pc = 0x26f56cu;
    // NOP
label_26f570:
    // 0x26f570: 0x1e400162  bgtz        $s2, . + 4 + (0x162 << 2)
    ctx->pc = 0x26F570u;
    {
        const bool branch_taken_0x26f570 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x26F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F570u;
        // 0x26f574: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f570) {
            ctx->pc = 0x26FAFCu;
            goto label_26fafc;
        }
    }
    ctx->pc = 0x26F578u;
    // 0x26f578: 0x8c82032c  lw          $v0, 0x32C($a0)
    ctx->pc = 0x26f578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
    // 0x26f57c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26f57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26f580: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F580u;
    {
        const bool branch_taken_0x26f580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f580) {
            ctx->pc = 0x26F584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F580u;
            // 0x26f584: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F598u;
            goto label_26f598;
        }
    }
    ctx->pc = 0x26F588u;
    // 0x26f588: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f58c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x26F58Cu;
    {
        const bool branch_taken_0x26f58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F58Cu;
        // 0x26f590: 0x2484be18  addiu       $a0, $a0, -0x41E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f58c) {
            ctx->pc = 0x26F848u;
            goto label_26f848;
        }
    }
    ctx->pc = 0x26F594u;
    // 0x26f594: 0x0  nop
    ctx->pc = 0x26f594u;
    // NOP
label_26f598:
    // 0x26f598: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26F598u;
    SET_GPR_U32(ctx, 31, 0x26F5A0u);
    ctx->pc = 0x26F59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F598u;
    // 0x26f59c: 0x2484bd68  addiu       $a0, $a0, -0x4298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26F598u, 0x26F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5A0u;
label_26f5a0:
    // 0x26f5a0: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x26F5A0u;
    {
        const bool branch_taken_0x26f5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5A0u;
        // 0x26f5a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5a0) {
            ctx->pc = 0x26FAF8u;
            goto label_26faf8;
        }
    }
    ctx->pc = 0x26F5A8u;
label_26f5a8:
    // 0x26f5a8: 0x5a400019  blezl       $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x26F5A8u;
    {
        const bool branch_taken_0x26f5a8 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x26f5a8) {
            ctx->pc = 0x26F5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F5A8u;
            // 0x26f5ac: 0x8ca2005c  lw          $v0, 0x5C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F610u;
            goto label_26f610;
        }
    }
    ctx->pc = 0x26F5B0u;
    // 0x26f5b0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x26f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x26f5b4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x26f5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26f5b8: 0x10400150  beqz        $v0, . + 4 + (0x150 << 2)
    ctx->pc = 0x26F5B8u;
    {
        const bool branch_taken_0x26f5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5B8u;
        // 0x26f5bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5b8) {
            ctx->pc = 0x26FAFCu;
            goto label_26fafc;
        }
    }
    ctx->pc = 0x26F5C0u;
    // 0x26f5c0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F5C0u;
    SET_GPR_U32(ctx, 31, 0x26F5C8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F5C0u, 0x26F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5C8u;
label_26f5c8:
    // 0x26f5c8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f5cc: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x26f5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26f5d0: 0x1040014a  beqz        $v0, . + 4 + (0x14A << 2)
    ctx->pc = 0x26F5D0u;
    {
        const bool branch_taken_0x26f5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5D0u;
        // 0x26f5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5d0) {
            ctx->pc = 0x26FAFCu;
            goto label_26fafc;
        }
    }
    ctx->pc = 0x26F5D8u;
    // 0x26f5d8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f5dc: 0x8c620320  lw          $v0, 0x320($v1)
    ctx->pc = 0x26f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x26f5e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26f5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26f5e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26f5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26f5e8: 0x50400144  beql        $v0, $zero, . + 4 + (0x144 << 2)
    ctx->pc = 0x26F5E8u;
    {
        const bool branch_taken_0x26f5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f5e8) {
            ctx->pc = 0x26F5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F5E8u;
            // 0x26f5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FAFCu;
            goto label_26fafc;
        }
    }
    ctx->pc = 0x26F5F0u;
    // 0x26f5f0: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f5f4: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26F5F4u;
    SET_GPR_U32(ctx, 31, 0x26F5FCu);
    ctx->pc = 0x26F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5F4u;
    // 0x26f5f8: 0x2484c760  addiu       $a0, $a0, -0x38A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26F5F4u, 0x26F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5FCu;
label_26f5fc:
    // 0x26f5fc: 0x1c400140  bgtz        $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x26F5FCu;
    {
        const bool branch_taken_0x26f5fc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x26F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5FCu;
        // 0x26f600: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5fc) {
            ctx->pc = 0x26FB00u;
            goto label_26fb00;
        }
    }
    ctx->pc = 0x26F604u;
    // 0x26f604: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x26F604u;
    {
        const bool branch_taken_0x26f604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F604u;
        // 0x26f608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f604) {
            ctx->pc = 0x26FB00u;
            goto label_26fb00;
        }
    }
    ctx->pc = 0x26F60Cu;
    // 0x26f60c: 0x0  nop
    ctx->pc = 0x26f60cu;
    // NOP
label_26f610:
    // 0x26f610: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F610u;
    {
        const bool branch_taken_0x26f610 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F610u;
        // 0x26f614: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f610) {
            ctx->pc = 0x26F638u;
            goto label_26f638;
        }
    }
    ctx->pc = 0x26F618u;
    // 0x26f618: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26F618u;
    SET_GPR_U32(ctx, 31, 0x26F620u);
    ctx->pc = 0x26F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F618u;
    // 0x26f61c: 0x2484c148  addiu       $a0, $a0, -0x3EB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26F618u, 0x26F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F620u;
label_26f620:
    // 0x26f620: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26f620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f624: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26f624u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f628: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f62c: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x26F62Cu;
    {
        const bool branch_taken_0x26f62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F62Cu;
        // 0x26f630: 0xac62005c  sw          $v0, 0x5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f62c) {
            ctx->pc = 0x26FAF8u;
            goto label_26faf8;
        }
    }
    ctx->pc = 0x26F634u;
    // 0x26f634: 0x0  nop
    ctx->pc = 0x26f634u;
    // NOP
label_26f638:
    // 0x26f638: 0x8ca200e4  lw          $v0, 0xE4($a1)
    ctx->pc = 0x26f638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x26f63c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F63Cu;
    {
        const bool branch_taken_0x26f63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f63c) {
            ctx->pc = 0x26F664u;
            goto label_26f664;
        }
    }
    ctx->pc = 0x26F644u;
    // 0x26f644: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F644u;
    SET_GPR_U32(ctx, 31, 0x26F64Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F644u, 0x26F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F64Cu;
label_26f64c:
    // 0x26f64c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f650: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f654: 0x84a30350  lh          $v1, 0x350($a1)
    ctx->pc = 0x26f654u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 848)));
    // 0x26f658: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f65c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26F65Cu;
    {
        const bool branch_taken_0x26f65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F65Cu;
        // 0x26f660: 0x8f86aa7c  lw          $a2, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f65c) {
            ctx->pc = 0x26F680u;
            goto label_26f680;
        }
    }
    ctx->pc = 0x26F664u;
label_26f664:
    // 0x26f664: 0xc09b3d6  jal         func_26CF58
    ctx->pc = 0x26F664u;
    SET_GPR_U32(ctx, 31, 0x26F66Cu);
    ctx->pc = 0x26CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CF58u, 0x26F664u, 0x26F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F66Cu;
label_26f66c:
    // 0x26f66c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26f66cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f670: 0x16800122  bnez        $s4, . + 4 + (0x122 << 2)
    ctx->pc = 0x26F670u;
    {
        const bool branch_taken_0x26f670 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F670u;
        // 0x26f674: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f670) {
            ctx->pc = 0x26FAFCu;
            goto label_26fafc;
        }
    }
    ctx->pc = 0x26F678u;
    // 0x26f678: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26f678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f67c: 0x8f86aa7c  lw          $a2, -0x5584($gp)
    ctx->pc = 0x26f67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
label_26f680:
    // 0x26f680: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x26f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x26f684: 0x84c2003e  lh          $v0, 0x3E($a2)
    ctx->pc = 0x26f684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 62)));
    // 0x26f688: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26f688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26f68c: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x26f68cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x26f690: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26f690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26f694: 0x8e1027bc  lw          $s0, 0x27BC($s0)
    ctx->pc = 0x26f694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10172)));
    // 0x26f698: 0x4610043  bgez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x26F698u;
    {
        const bool branch_taken_0x26f698 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x26F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F698u;
        // 0x26f69c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f698) {
            ctx->pc = 0x26F7A8u;
            goto label_26f7a8;
        }
    }
    ctx->pc = 0x26F6A0u;
    // 0x26f6a0: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x26F6A0u;
    {
        const bool branch_taken_0x26f6a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f6a0) {
            ctx->pc = 0x26F7A8u;
            goto label_26f7a8;
        }
    }
    ctx->pc = 0x26F6A8u;
    // 0x26f6a8: 0x8ca20074  lw          $v0, 0x74($a1)
    ctx->pc = 0x26f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x26f6ac: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x26F6ACu;
    {
        const bool branch_taken_0x26f6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f6ac) {
            ctx->pc = 0x26F7A8u;
            goto label_26f7a8;
        }
    }
    ctx->pc = 0x26F6B4u;
    // 0x26f6b4: 0x8ca20320  lw          $v0, 0x320($a1)
    ctx->pc = 0x26f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 800)));
    // 0x26f6b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26f6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26f6bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26f6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26f6c0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x26F6C0u;
    {
        const bool branch_taken_0x26f6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f6c0) {
            ctx->pc = 0x26F7A8u;
            goto label_26f7a8;
        }
    }
    ctx->pc = 0x26F6C8u;
    // 0x26f6c8: 0x8cc200c4  lw          $v0, 0xC4($a2)
    ctx->pc = 0x26f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x26f6cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f6d0: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x26f6d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26f6d4: 0x10640034  beq         $v1, $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x26F6D4u;
    {
        const bool branch_taken_0x26f6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x26f6d4) {
            ctx->pc = 0x26F7A8u;
            goto label_26f7a8;
        }
    }
    ctx->pc = 0x26F6DCu;
    // 0x26f6dc: 0x84c20080  lh          $v0, 0x80($a2)
    ctx->pc = 0x26f6dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x26f6e0: 0x28422001  slti        $v0, $v0, 0x2001
    ctx->pc = 0x26f6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x26f6e4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x26F6E4u;
    {
        const bool branch_taken_0x26f6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f6e4) {
            ctx->pc = 0x26F7A8u;
            goto label_26f7a8;
        }
    }
    ctx->pc = 0x26F6ECu;
    // 0x26f6ec: 0x90c201f9  lbu         $v0, 0x1F9($a2)
    ctx->pc = 0x26f6ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 505)));
    // 0x26f6f0: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x26F6F0u;
    {
        const bool branch_taken_0x26f6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f6f0) {
            ctx->pc = 0x26F7A8u;
            goto label_26f7a8;
        }
    }
    ctx->pc = 0x26F6F8u;
    // 0x26f6f8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x26f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x26f6fc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x26f6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26f700: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26F700u;
    {
        const bool branch_taken_0x26f700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f700) {
            ctx->pc = 0x26F7A8u;
            goto label_26f7a8;
        }
    }
    ctx->pc = 0x26F708u;
    // 0x26f708: 0x8ca20294  lw          $v0, 0x294($a1)
    ctx->pc = 0x26f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 660)));
    // 0x26f70c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x26F70Cu;
    {
        const bool branch_taken_0x26f70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f70c) {
            ctx->pc = 0x26F7A8u;
            goto label_26f7a8;
        }
    }
    ctx->pc = 0x26F714u;
    // 0x26f714: 0x0  nop
    ctx->pc = 0x26f714u;
    // NOP
label_26f718:
    // 0x26f718: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F718u;
    SET_GPR_U32(ctx, 31, 0x26F720u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F718u, 0x26F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F720u;
label_26f720:
    // 0x26f720: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26f720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f724: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f728: 0x8c8303c8  lw          $v1, 0x3C8($a0)
    ctx->pc = 0x26f728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 968)));
    // 0x26f72c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x26f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26f730: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x26f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x26f734: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x26f734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26f738: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x26f738u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f73c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26F73Cu;
    {
        const bool branch_taken_0x26f73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f73c) {
            ctx->pc = 0x26F760u;
            goto label_26f760;
        }
    }
    ctx->pc = 0x26F744u;
    // 0x26f744: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x26f744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x26f748: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x26f748u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26f74c: 0x441fff2  bgez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x26F74Cu;
    {
        const bool branch_taken_0x26f74c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F74Cu;
        // 0x26f750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f74c) {
            ctx->pc = 0x26F718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f718;
        }
    }
    ctx->pc = 0x26F754u;
    // 0x26f754: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26F754u;
    {
        const bool branch_taken_0x26f754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f754) {
            ctx->pc = 0x26F7A8u;
            goto label_26f7a8;
        }
    }
    ctx->pc = 0x26F75Cu;
    // 0x26f75c: 0x0  nop
    ctx->pc = 0x26f75cu;
    // NOP
label_26f760:
    // 0x26f760: 0xc09b728  jal         func_26DCA0
    ctx->pc = 0x26F760u;
    SET_GPR_U32(ctx, 31, 0x26F768u);
    ctx->pc = 0x26F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F760u;
    // 0x26f764: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DCA0u, 0x26F760u, 0x26F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F768u;
label_26f768:
    // 0x26f768: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x26F768u;
    {
        const bool branch_taken_0x26f768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f768) {
            ctx->pc = 0x26F76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F768u;
            // 0x26f76c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F7A8u;
            goto label_26f7a8;
        }
    }
    ctx->pc = 0x26F770u;
    // 0x26f770: 0xc0997d8  jal         func_265F60
    ctx->pc = 0x26F770u;
    SET_GPR_U32(ctx, 31, 0x26F778u);
    ctx->pc = 0x26F774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F770u;
    // 0x26f774: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F60u, 0x26F770u, 0x26F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F778u;
label_26f778:
    // 0x26f778: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f77c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f780: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F780u;
    SET_GPR_U32(ctx, 31, 0x26F788u);
    ctx->pc = 0x26F784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F780u;
    // 0x26f784: 0xac620144  sw          $v0, 0x144($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F780u, 0x26F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F788u;
label_26f788:
    // 0x26f788: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26f788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f78c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x26f78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x26f790: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x26f790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x26f794: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x26f794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x26f798: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f79c: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x26f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    // 0x26f7a0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f7a4: 0xa4440012  sh          $a0, 0x12($v0)
    ctx->pc = 0x26f7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 4));
label_26f7a8:
    // 0x26f7a8: 0x14e000d4  bnez        $a3, . + 4 + (0xD4 << 2)
    ctx->pc = 0x26F7A8u;
    {
        const bool branch_taken_0x26f7a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7A8u;
        // 0x26f7ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7a8) {
            ctx->pc = 0x26FAFCu;
            goto label_26fafc;
        }
    }
    ctx->pc = 0x26F7B0u;
    // 0x26f7b0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f7b4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x26f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x26f7b8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x26f7b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26f7bc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26F7BCu;
    {
        const bool branch_taken_0x26f7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f7bc) {
            ctx->pc = 0x26F808u;
            goto label_26f808;
        }
    }
    ctx->pc = 0x26F7C4u;
    // 0x26f7c4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F7C4u;
    SET_GPR_U32(ctx, 31, 0x26F7CCu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F7C4u, 0x26F7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7CCu;
label_26f7cc:
    // 0x26f7cc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26f7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x26f7d0: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x26f7d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x26f7d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26F7D4u;
    {
        const bool branch_taken_0x26f7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7D4u;
        // 0x26f7d8: 0x8f82aa7c  lw          $v0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7d4) {
            ctx->pc = 0x26F808u;
            goto label_26f808;
        }
    }
    ctx->pc = 0x26F7DCu;
    // 0x26f7dc: 0x904301f9  lbu         $v1, 0x1F9($v0)
    ctx->pc = 0x26f7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 505)));
    // 0x26f7e0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F7E0u;
    {
        const bool branch_taken_0x26f7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7E0u;
        // 0x26f7e4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7e0) {
            ctx->pc = 0x26F808u;
            goto label_26f808;
        }
    }
    ctx->pc = 0x26F7E8u;
    // 0x26f7e8: 0x8c620320  lw          $v0, 0x320($v1)
    ctx->pc = 0x26f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x26f7ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26f7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26f7f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26f7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26f7f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F7F4u;
    {
        const bool branch_taken_0x26f7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7F4u;
        // 0x26f7f8: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7f4) {
            ctx->pc = 0x26F808u;
            goto label_26f808;
        }
    }
    ctx->pc = 0x26F7FCu;
    // 0x26f7fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26F7FCu;
    {
        const bool branch_taken_0x26f7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7FCu;
        // 0x26f800: 0x2484c760  addiu       $a0, $a0, -0x38A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7fc) {
            ctx->pc = 0x26F848u;
            goto label_26f848;
        }
    }
    ctx->pc = 0x26F804u;
    // 0x26f804: 0x0  nop
    ctx->pc = 0x26f804u;
    // NOP
label_26f808:
    // 0x26f808: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F808u;
    SET_GPR_U32(ctx, 31, 0x26F810u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F808u, 0x26F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F810u;
label_26f810:
    // 0x26f810: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26f810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x26f814: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x26f814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x26f818: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26F818u;
    {
        const bool branch_taken_0x26f818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F818u;
        // 0x26f81c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f818) {
            ctx->pc = 0x26F858u;
            goto label_26f858;
        }
    }
    ctx->pc = 0x26F820u;
    // 0x26f820: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F820u;
    SET_GPR_U32(ctx, 31, 0x26F828u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F820u, 0x26F828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F828u;
label_26f828:
    // 0x26f828: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26f828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26f82c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F82Cu;
    {
        const bool branch_taken_0x26f82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F82Cu;
        // 0x26f830: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f82c) {
            ctx->pc = 0x26F840u;
            goto label_26f840;
        }
    }
    ctx->pc = 0x26F834u;
    // 0x26f834: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26F834u;
    {
        const bool branch_taken_0x26f834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F834u;
        // 0x26f838: 0x2484c380  addiu       $a0, $a0, -0x3C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f834) {
            ctx->pc = 0x26F848u;
            goto label_26f848;
        }
    }
    ctx->pc = 0x26F83Cu;
    // 0x26f83c: 0x0  nop
    ctx->pc = 0x26f83cu;
    // NOP
label_26f840:
    // 0x26f840: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f844: 0x2484c180  addiu       $a0, $a0, -0x3E80
    ctx->pc = 0x26f844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951296));
label_26f848:
    // 0x26f848: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26F848u;
    SET_GPR_U32(ctx, 31, 0x26F850u);
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26F848u, 0x26F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F850u;
label_26f850:
    // 0x26f850: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x26F850u;
    {
        const bool branch_taken_0x26f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F850u;
        // 0x26f854: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f850) {
            ctx->pc = 0x26FAF8u;
            goto label_26faf8;
        }
    }
    ctx->pc = 0x26F858u;
label_26f858:
    // 0x26f858: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x26f858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x26f85c: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x26F85Cu;
    {
        const bool branch_taken_0x26f85c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26f85c) {
            ctx->pc = 0x26F8E0u;
            goto label_26f8e0;
        }
    }
    ctx->pc = 0x26F864u;
    // 0x26f864: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x26f864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x26f868: 0x441001d  bgez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26F868u;
    {
        const bool branch_taken_0x26f868 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26f868) {
            ctx->pc = 0x26F8E0u;
            goto label_26f8e0;
        }
    }
    ctx->pc = 0x26F870u;
    // 0x26f870: 0x8c620320  lw          $v0, 0x320($v1)
    ctx->pc = 0x26f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x26f874: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26f874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26f878: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26f878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26f87c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26F87Cu;
    {
        const bool branch_taken_0x26f87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F87Cu;
        // 0x26f880: 0x8f82aa7c  lw          $v0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f87c) {
            ctx->pc = 0x26F8E0u;
            goto label_26f8e0;
        }
    }
    ctx->pc = 0x26F884u;
    // 0x26f884: 0x904301f9  lbu         $v1, 0x1F9($v0)
    ctx->pc = 0x26f884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 505)));
    // 0x26f888: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x26F888u;
    {
        const bool branch_taken_0x26f888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f888) {
            ctx->pc = 0x26F8E0u;
            goto label_26f8e0;
        }
    }
    ctx->pc = 0x26F890u;
    // 0x26f890: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F890u;
    SET_GPR_U32(ctx, 31, 0x26F898u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F890u, 0x26F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F898u;
label_26f898:
    // 0x26f898: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f89c: 0x28420198  slti        $v0, $v0, 0x198
    ctx->pc = 0x26f89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)408) ? 1 : 0);
    // 0x26f8a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26F8A0u;
    {
        const bool branch_taken_0x26f8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8A0u;
        // 0x26f8a4: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8a0) {
            ctx->pc = 0x26F8E0u;
            goto label_26f8e0;
        }
    }
    ctx->pc = 0x26F8A8u;
    // 0x26f8a8: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26F8A8u;
    SET_GPR_U32(ctx, 31, 0x26F8B0u);
    ctx->pc = 0x26F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F8A8u;
    // 0x26f8ac: 0x2484c760  addiu       $a0, $a0, -0x38A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26F8A8u, 0x26F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8B0u;
label_26f8b0:
    // 0x26f8b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26f8b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f8b4: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x26F8B4u;
    {
        const bool branch_taken_0x26f8b4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x26F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8B4u;
        // 0x26f8b8: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8b4) {
            ctx->pc = 0x26F8E0u;
            goto label_26f8e0;
        }
    }
    ctx->pc = 0x26F8BCu;
    // 0x26f8bc: 0x8c6203c8  lw          $v0, 0x3C8($v1)
    ctx->pc = 0x26f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x26f8c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F8C0u;
    {
        const bool branch_taken_0x26f8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8C0u;
        // 0x26f8c4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8c0) {
            ctx->pc = 0x26F8E0u;
            goto label_26f8e0;
        }
    }
    ctx->pc = 0x26F8C8u;
    // 0x26f8c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x26f8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f8cc: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x26f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x26f8d0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f8d4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x26F8D4u;
    {
        const bool branch_taken_0x26f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8D4u;
        // 0x26f8d8: 0xac64008c  sw          $a0, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8d4) {
            ctx->pc = 0x26FAF8u;
            goto label_26faf8;
        }
    }
    ctx->pc = 0x26F8DCu;
    // 0x26f8dc: 0x0  nop
    ctx->pc = 0x26f8dcu;
    // NOP
label_26f8e0:
    // 0x26f8e0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F8E0u;
    SET_GPR_U32(ctx, 31, 0x26F8E8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F8E0u, 0x26F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8E8u;
label_26f8e8:
    // 0x26f8e8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f8ec: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f8f0: 0x84640352  lh          $a0, 0x352($v1)
    ctx->pc = 0x26f8f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 850)));
    // 0x26f8f4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26f8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26f8f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F8F8u;
    {
        const bool branch_taken_0x26f8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8F8u;
        // 0x26f8fc: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8f8) {
            ctx->pc = 0x26F908u;
            goto label_26f908;
        }
    }
    ctx->pc = 0x26F900u;
    // 0x26f900: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x26F900u;
    {
        const bool branch_taken_0x26f900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F900u;
        // 0x26f904: 0x2484c008  addiu       $a0, $a0, -0x3FF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f900) {
            ctx->pc = 0x26FAC4u;
            goto label_26fac4;
        }
    }
    ctx->pc = 0x26F908u;
label_26f908:
    // 0x26f908: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F908u;
    SET_GPR_U32(ctx, 31, 0x26F910u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F908u, 0x26F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F910u;
label_26f910:
    // 0x26f910: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26f910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f914: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f918: 0x84830354  lh          $v1, 0x354($a0)
    ctx->pc = 0x26f918u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 852)));
    // 0x26f91c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f920: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F920u;
    {
        const bool branch_taken_0x26f920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f920) {
            ctx->pc = 0x26F924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F920u;
            // 0x26f924: 0x8c82032c  lw          $v0, 0x32C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F938u;
            goto label_26f938;
        }
    }
    ctx->pc = 0x26F928u;
    // 0x26f928: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f92c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x26F92Cu;
    {
        const bool branch_taken_0x26f92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F92Cu;
        // 0x26f930: 0x2484bf20  addiu       $a0, $a0, -0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f92c) {
            ctx->pc = 0x26FAC4u;
            goto label_26fac4;
        }
    }
    ctx->pc = 0x26F934u;
    // 0x26f934: 0x0  nop
    ctx->pc = 0x26f934u;
    // NOP
label_26f938:
    // 0x26f938: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26f938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26f93c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26F93Cu;
    {
        const bool branch_taken_0x26f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f93c) {
            ctx->pc = 0x26F970u;
            goto label_26f970;
        }
    }
    ctx->pc = 0x26F944u;
    // 0x26f944: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F944u;
    SET_GPR_U32(ctx, 31, 0x26F94Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F944u, 0x26F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F94Cu;
label_26f94c:
    // 0x26f94c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f950: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26f950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26f954: 0x84640380  lh          $a0, 0x380($v1)
    ctx->pc = 0x26f954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x26f958: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26f958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26f95c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F95Cu;
    {
        const bool branch_taken_0x26f95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F95Cu;
        // 0x26f960: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f95c) {
            ctx->pc = 0x26F970u;
            goto label_26f970;
        }
    }
    ctx->pc = 0x26F964u;
    // 0x26f964: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x26F964u;
    {
        const bool branch_taken_0x26f964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F964u;
        // 0x26f968: 0x2484be18  addiu       $a0, $a0, -0x41E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f964) {
            ctx->pc = 0x26FAC4u;
            goto label_26fac4;
        }
    }
    ctx->pc = 0x26F96Cu;
    // 0x26f96c: 0x0  nop
    ctx->pc = 0x26f96cu;
    // NOP
label_26f970:
    // 0x26f970: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F970u;
    SET_GPR_U32(ctx, 31, 0x26F978u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F970u, 0x26F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F978u;
label_26f978:
    // 0x26f978: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26f978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x26f97c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x26f97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x26f980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F980u;
    {
        const bool branch_taken_0x26f980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F980u;
        // 0x26f984: 0x8f82aa7c  lw          $v0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f980) {
            ctx->pc = 0x26F998u;
            goto label_26f998;
        }
    }
    ctx->pc = 0x26F988u;
    // 0x26f988: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f98c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x26F98Cu;
    {
        const bool branch_taken_0x26f98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F98Cu;
        // 0x26f990: 0x2484c2b8  addiu       $a0, $a0, -0x3D48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f98c) {
            ctx->pc = 0x26FAC4u;
            goto label_26fac4;
        }
    }
    ctx->pc = 0x26F994u;
    // 0x26f994: 0x0  nop
    ctx->pc = 0x26f994u;
    // NOP
label_26f998:
    // 0x26f998: 0x904301f9  lbu         $v1, 0x1F9($v0)
    ctx->pc = 0x26f998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 505)));
    // 0x26f99c: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x26F99Cu;
    {
        const bool branch_taken_0x26f99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F99Cu;
        // 0x26f9a0: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f99c) {
            ctx->pc = 0x26FA88u;
            goto label_26fa88;
        }
    }
    ctx->pc = 0x26F9A4u;
    // 0x26f9a4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26f9a8: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x26f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x26f9ac: 0x4610036  bgez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x26F9ACu;
    {
        const bool branch_taken_0x26f9ac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26f9ac) {
            ctx->pc = 0x26FA88u;
            goto label_26fa88;
        }
    }
    ctx->pc = 0x26F9B4u;
    // 0x26f9b4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26F9B4u;
    SET_GPR_U32(ctx, 31, 0x26F9BCu);
    ctx->pc = 0x26F9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F9B4u;
    // 0x26f9b8: 0x26138858  addiu       $s3, $s0, -0x77A8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26F9B4u, 0x26F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F9BCu;
label_26f9bc:
    // 0x26f9bc: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x26f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x26f9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f9c4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x26f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26f9c8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26f9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26f9cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x26f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f9d0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x26f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x26f9d4: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x26f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x26f9d8: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x26f9d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x26f9dc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x26F9DCu;
    {
        const bool branch_taken_0x26f9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9DCu;
        // 0x26f9e0: 0xae640064  sw          $a0, 0x64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9dc) {
            ctx->pc = 0x26FA88u;
            goto label_26fa88;
        }
    }
    ctx->pc = 0x26F9E4u;
    // 0x26f9e4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26f9e8: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26F9E8u;
    SET_GPR_U32(ctx, 31, 0x26F9F0u);
    ctx->pc = 0x26F9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F9E8u;
    // 0x26f9ec: 0x2484c870  addiu       $a0, $a0, -0x3790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26F9E8u, 0x26F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F9F0u;
label_26f9f0:
    // 0x26f9f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26f9f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f9f4: 0x1a800024  blez        $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x26F9F4u;
    {
        const bool branch_taken_0x26f9f4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x26F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9F4u;
        // 0x26f9f8: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9f4) {
            ctx->pc = 0x26FA88u;
            goto label_26fa88;
        }
    }
    ctx->pc = 0x26F9FCu;
    // 0x26f9fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26fa00: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x26fa00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x26fa04: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26FA04u;
    SET_GPR_U32(ctx, 31, 0x26FA0Cu);
    ctx->pc = 0x26FA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA04u;
    // 0x26fa08: 0x8f92aa78  lw          $s2, -0x5588($gp) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26FA04u, 0x26FA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA0Cu;
label_26fa0c:
    // 0x26fa0c: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x26fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x26fa10: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x26fa10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26fa14: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x26fa14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26fa18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x26fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26fa1c: 0x32317fff  andi        $s1, $s1, 0x7FFF
    ctx->pc = 0x26fa1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32767);
    // 0x26fa20: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x26fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x26fa24: 0x118b42  srl         $s1, $s1, 13
    ctx->pc = 0x26fa24u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 13));
    // 0x26fa28: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26FA28u;
    SET_GPR_U32(ctx, 31, 0x26FA30u);
    ctx->pc = 0x26FA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA28u;
    // 0x26fa2c: 0xae640064  sw          $a0, 0x64($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26FA28u, 0x26FA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA30u;
label_26fa30:
    // 0x26fa30: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x26fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x26fa34: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x26fa34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26fa38: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x26fa38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26fa3c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x26fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26fa40: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x26fa40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
    // 0x26fa44: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x26fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x26fa48: 0x108342  srl         $s0, $s0, 13
    ctx->pc = 0x26fa48u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 13));
    // 0x26fa4c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26FA4Cu;
    SET_GPR_U32(ctx, 31, 0x26FA54u);
    ctx->pc = 0x26FA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA4Cu;
    // 0x26fa50: 0xae640064  sw          $a0, 0x64($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26FA4Cu, 0x26FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA54u;
label_26fa54:
    // 0x26fa54: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x26fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x26fa58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26fa5c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x26fa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26fa60: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26fa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26fa64: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x26fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26fa68: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x26fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x26fa6c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x26fa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x26fa70: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26fa70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26fa74: 0xae640064  sw          $a0, 0x64($s3)
    ctx->pc = 0x26fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 4));
    // 0x26fa78: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x26fa78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x26fa7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26fa7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26fa80: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26FA80u;
    {
        const bool branch_taken_0x26fa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA80u;
        // 0x26fa84: 0xae510060  sw          $s1, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa80) {
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26FA88u;
label_26fa88:
    // 0x26fa88: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26FA88u;
    SET_GPR_U32(ctx, 31, 0x26FA90u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26FA88u, 0x26FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA90u;
label_26fa90:
    // 0x26fa90: 0x26058858  addiu       $a1, $s0, -0x77A8
    ctx->pc = 0x26fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x26fa94: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x26fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x26fa98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26fa9c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x26fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26faa0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26faa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26faa4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x26faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26faa8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x26faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x26faac: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x26faacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x26fab0: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x26fab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x26fab4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26FAB4u;
    {
        const bool branch_taken_0x26fab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAB4u;
        // 0x26fab8: 0xaca40064  sw          $a0, 0x64($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fab4) {
            ctx->pc = 0x26FAD8u;
            goto label_26fad8;
        }
    }
    ctx->pc = 0x26FABCu;
    // 0x26fabc: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26fac0: 0x2484c818  addiu       $a0, $a0, -0x37E8
    ctx->pc = 0x26fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952984));
label_26fac4:
    // 0x26fac4: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26FAC4u;
    SET_GPR_U32(ctx, 31, 0x26FACCu);
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26FAC4u, 0x26FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FACCu;
label_26facc:
    // 0x26facc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26FACCu;
    {
        const bool branch_taken_0x26facc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FACCu;
        // 0x26fad0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26facc) {
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26FAD4u;
    // 0x26fad4: 0x0  nop
    ctx->pc = 0x26fad4u;
    // NOP
label_26fad8:
    // 0x26fad8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26fadc: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26FADCu;
    SET_GPR_U32(ctx, 31, 0x26FAE4u);
    ctx->pc = 0x26FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FADCu;
    // 0x26fae0: 0x2484bd68  addiu       $a0, $a0, -0x4298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26FADCu, 0x26FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAE4u;
label_26fae4:
    // 0x26fae4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26fae4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fae8:
    // 0x26fae8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26fae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26faec: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26FAECu;
    SET_GPR_U32(ctx, 31, 0x26FAF4u);
    ctx->pc = 0x26FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAECu;
    // 0x26faf0: 0x2484c380  addiu       $a0, $a0, -0x3C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26FAECu, 0x26FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAF4u;
label_26faf4:
    // 0x26faf4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x26faf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_26faf8:
    // 0x26faf8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x26faf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26fafc:
    // 0x26fafc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26fafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26fb00:
    // 0x26fb00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26fb00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26fb04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26fb04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26fb08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26fb0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26fb0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fb10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x26fb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fb14: 0x3e00008  jr          $ra
    ctx->pc = 0x26FB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB14u;
        // 0x26fb18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FB1Cu;
    // 0x26fb1c: 0x0  nop
    ctx->pc = 0x26fb1cu;
    // NOP
    ctx->pc = 0x26fb20u;
}
