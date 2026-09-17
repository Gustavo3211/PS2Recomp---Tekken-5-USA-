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

// Function: sub_00514EB0
// Address: 0x514eb0 - 0x514fa8
void sub_00514EB0_0x514eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00514EB0_0x514eb0");
#endif

    switch (ctx->pc) {
        case 0x514eb0u: goto label_514eb0;
        case 0x514eb4u: goto label_514eb4;
        case 0x514eb8u: goto label_514eb8;
        case 0x514ebcu: goto label_514ebc;
        case 0x514ec0u: goto label_514ec0;
        case 0x514ec4u: goto label_514ec4;
        case 0x514ec8u: goto label_514ec8;
        case 0x514eccu: goto label_514ecc;
        case 0x514ed0u: goto label_514ed0;
        case 0x514ed4u: goto label_514ed4;
        case 0x514ed8u: goto label_514ed8;
        case 0x514edcu: goto label_514edc;
        case 0x514ee0u: goto label_514ee0;
        case 0x514ee4u: goto label_514ee4;
        case 0x514ee8u: goto label_514ee8;
        case 0x514eecu: goto label_514eec;
        case 0x514ef0u: goto label_514ef0;
        case 0x514ef4u: goto label_514ef4;
        case 0x514ef8u: goto label_514ef8;
        case 0x514efcu: goto label_514efc;
        case 0x514f00u: goto label_514f00;
        case 0x514f04u: goto label_514f04;
        case 0x514f08u: goto label_514f08;
        case 0x514f0cu: goto label_514f0c;
        case 0x514f10u: goto label_514f10;
        case 0x514f14u: goto label_514f14;
        case 0x514f18u: goto label_514f18;
        case 0x514f1cu: goto label_514f1c;
        case 0x514f20u: goto label_514f20;
        case 0x514f24u: goto label_514f24;
        case 0x514f28u: goto label_514f28;
        case 0x514f2cu: goto label_514f2c;
        case 0x514f30u: goto label_514f30;
        case 0x514f34u: goto label_514f34;
        case 0x514f38u: goto label_514f38;
        case 0x514f3cu: goto label_514f3c;
        case 0x514f40u: goto label_514f40;
        case 0x514f44u: goto label_514f44;
        case 0x514f48u: goto label_514f48;
        case 0x514f4cu: goto label_514f4c;
        case 0x514f50u: goto label_514f50;
        case 0x514f54u: goto label_514f54;
        case 0x514f58u: goto label_514f58;
        case 0x514f5cu: goto label_514f5c;
        case 0x514f60u: goto label_514f60;
        case 0x514f64u: goto label_514f64;
        case 0x514f68u: goto label_514f68;
        case 0x514f6cu: goto label_514f6c;
        case 0x514f70u: goto label_514f70;
        case 0x514f74u: goto label_514f74;
        case 0x514f78u: goto label_514f78;
        case 0x514f7cu: goto label_514f7c;
        case 0x514f80u: goto label_514f80;
        case 0x514f84u: goto label_514f84;
        case 0x514f88u: goto label_514f88;
        case 0x514f8cu: goto label_514f8c;
        case 0x514f90u: goto label_514f90;
        case 0x514f94u: goto label_514f94;
        case 0x514f98u: goto label_514f98;
        case 0x514f9cu: goto label_514f9c;
        case 0x514fa0u: goto label_514fa0;
        case 0x514fa4u: goto label_514fa4;
        default: break;
    }

    ctx->pc = 0x514eb0u;

label_514eb0:
    // 0x514eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x514eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_514eb4:
    // 0x514eb4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x514eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_514eb8:
    // 0x514eb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x514eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_514ebc:
    // 0x514ebc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x514ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_514ec0:
    // 0x514ec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x514ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_514ec4:
    // 0x514ec4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x514ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_514ec8:
    // 0x514ec8: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x514ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_514ecc:
    // 0x514ecc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_514ed0:
    if (ctx->pc == 0x514ED0u) {
        ctx->pc = 0x514ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514ECCu;
        // 0x514ed0: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x514ED4u;
        goto label_514ed4;
    }
    ctx->pc = 0x514ECCu;
    {
        const bool branch_taken_0x514ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x514ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514ECCu;
        // 0x514ed0: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514ecc) {
            ctx->pc = 0x514F0Cu;
            goto label_514f0c;
        }
    }
    ctx->pc = 0x514ED4u;
label_514ed4:
    // 0x514ed4: 0x8ca29b18  lw          $v0, -0x64E8($a1)
    ctx->pc = 0x514ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941464)));
label_514ed8:
    // 0x514ed8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_514edc:
    if (ctx->pc == 0x514EDCu) {
        ctx->pc = 0x514EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514ED8u;
        // 0x514edc: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x514EE0u;
        goto label_514ee0;
    }
    ctx->pc = 0x514ED8u;
    {
        const bool branch_taken_0x514ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x514EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514ED8u;
        // 0x514edc: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514ed8) {
            ctx->pc = 0x514F0Cu;
            goto label_514f0c;
        }
    }
    ctx->pc = 0x514EE0u;
label_514ee0:
    // 0x514ee0: 0x8c439b30  lw          $v1, -0x64D0($v0)
    ctx->pc = 0x514ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941488)));
label_514ee4:
    // 0x514ee4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x514ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_514ee8:
    // 0x514ee8: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x514ee8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_514eec:
    // 0x514eec: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x514eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_514ef0:
    // 0x514ef0: 0x8ca29b18  lw          $v0, -0x64E8($a1)
    ctx->pc = 0x514ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941464)));
label_514ef4:
    // 0x514ef4: 0x8c859b24  lw          $a1, -0x64DC($a0)
    ctx->pc = 0x514ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941476)));
label_514ef8:
    // 0x514ef8: 0x40f809  jalr        $v0
label_514efc:
    if (ctx->pc == 0x514EFCu) {
        ctx->pc = 0x514EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514EF8u;
        // 0x514efc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x514F00u;
        goto label_514f00;
    }
    ctx->pc = 0x514EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x514F00u);
        ctx->pc = 0x514EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514EF8u;
        // 0x514efc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514EF8u, 0x514F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x514F00u;
label_514f00:
    // 0x514f00: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x514f00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_514f04:
    // 0x514f04: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x514f04u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_514f08:
    // 0x514f08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x514f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_514f0c:
    // 0x514f0c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x514f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_514f10:
    // 0x514f10: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_514f14:
    if (ctx->pc == 0x514F14u) {
        ctx->pc = 0x514F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514F10u;
        // 0x514f14: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x514F18u;
        goto label_514f18;
    }
    ctx->pc = 0x514F10u;
    {
        const bool branch_taken_0x514f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x514F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514F10u;
        // 0x514f14: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514f10) {
            ctx->pc = 0x514F50u;
            goto label_514f50;
        }
    }
    ctx->pc = 0x514F18u;
label_514f18:
    // 0x514f18: 0x8ca29b1c  lw          $v0, -0x64E4($a1)
    ctx->pc = 0x514f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941468)));
label_514f1c:
    // 0x514f1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_514f20:
    if (ctx->pc == 0x514F20u) {
        ctx->pc = 0x514F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514F1Cu;
        // 0x514f20: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x514F24u;
        goto label_514f24;
    }
    ctx->pc = 0x514F1Cu;
    {
        const bool branch_taken_0x514f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x514F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514F1Cu;
        // 0x514f20: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514f1c) {
            ctx->pc = 0x514F50u;
            goto label_514f50;
        }
    }
    ctx->pc = 0x514F24u;
label_514f24:
    // 0x514f24: 0x8c439b34  lw          $v1, -0x64CC($v0)
    ctx->pc = 0x514f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941492)));
label_514f28:
    // 0x514f28: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x514f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_514f2c:
    // 0x514f2c: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x514f2cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_514f30:
    // 0x514f30: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x514f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_514f34:
    // 0x514f34: 0x8ca29b1c  lw          $v0, -0x64E4($a1)
    ctx->pc = 0x514f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941468)));
label_514f38:
    // 0x514f38: 0x8c859b28  lw          $a1, -0x64D8($a0)
    ctx->pc = 0x514f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941480)));
label_514f3c:
    // 0x514f3c: 0x40f809  jalr        $v0
label_514f40:
    if (ctx->pc == 0x514F40u) {
        ctx->pc = 0x514F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514F3Cu;
        // 0x514f40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x514F44u;
        goto label_514f44;
    }
    ctx->pc = 0x514F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x514F44u);
        ctx->pc = 0x514F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514F3Cu;
        // 0x514f40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514F3Cu, 0x514F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x514F44u;
label_514f44:
    // 0x514f44: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x514f44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_514f48:
    // 0x514f48: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x514f48u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_514f4c:
    // 0x514f4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x514f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_514f50:
    // 0x514f50: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x514f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_514f54:
    // 0x514f54: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_514f58:
    if (ctx->pc == 0x514F58u) {
        ctx->pc = 0x514F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514F54u;
        // 0x514f58: 0x3c040073  lui         $a0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x514F5Cu;
        goto label_514f5c;
    }
    ctx->pc = 0x514F54u;
    {
        const bool branch_taken_0x514f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x514F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514F54u;
        // 0x514f58: 0x3c040073  lui         $a0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514f54) {
            ctx->pc = 0x514F90u;
            goto label_514f90;
        }
    }
    ctx->pc = 0x514F5Cu;
label_514f5c:
    // 0x514f5c: 0x8c829b20  lw          $v0, -0x64E0($a0)
    ctx->pc = 0x514f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941472)));
label_514f60:
    // 0x514f60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_514f64:
    if (ctx->pc == 0x514F64u) {
        ctx->pc = 0x514F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514F60u;
        // 0x514f64: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x514F68u;
        goto label_514f68;
    }
    ctx->pc = 0x514F60u;
    {
        const bool branch_taken_0x514f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x514F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514F60u;
        // 0x514f64: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514f60) {
            ctx->pc = 0x514F90u;
            goto label_514f90;
        }
    }
    ctx->pc = 0x514F68u;
label_514f68:
    // 0x514f68: 0x8c439b38  lw          $v1, -0x64C8($v0)
    ctx->pc = 0x514f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941496)));
label_514f6c:
    // 0x514f6c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x514f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_514f70:
    // 0x514f70: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x514f70u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_514f74:
    // 0x514f74: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x514f74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
label_514f78:
    // 0x514f78: 0x8c829b20  lw          $v0, -0x64E0($a0)
    ctx->pc = 0x514f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941472)));
label_514f7c:
    // 0x514f7c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x514f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_514f80:
    // 0x514f80: 0x40f809  jalr        $v0
label_514f84:
    if (ctx->pc == 0x514F84u) {
        ctx->pc = 0x514F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514F80u;
        // 0x514f84: 0x8cc59b2c  lw          $a1, -0x64D4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294941484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x514F88u;
        goto label_514f88;
    }
    ctx->pc = 0x514F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x514F88u);
        ctx->pc = 0x514F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514F80u;
        // 0x514f84: 0x8cc59b2c  lw          $a1, -0x64D4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294941484)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514F80u, 0x514F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x514F88u;
label_514f88:
    // 0x514f88: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x514f88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_514f8c:
    // 0x514f8c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x514f8cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_514f90:
    // 0x514f90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x514f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_514f94:
    // 0x514f94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x514f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_514f98:
    // 0x514f98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x514f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_514f9c:
    // 0x514f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x514f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_514fa0:
    // 0x514fa0: 0x3e00008  jr          $ra
label_514fa4:
    if (ctx->pc == 0x514FA4u) {
        ctx->pc = 0x514FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514FA0u;
        // 0x514fa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x514FA8u;
        goto label_fallthrough_0x514fa0;
    }
    ctx->pc = 0x514FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x514FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514FA0u;
        // 0x514fa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x514fa0:
    ctx->pc = 0x514FA8u;
}
