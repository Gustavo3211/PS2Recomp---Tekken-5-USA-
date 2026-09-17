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

// Function: sub_0036F918
// Address: 0x36f918 - 0x36f990
void sub_0036F918_0x36f918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F918_0x36f918");
#endif

    switch (ctx->pc) {
        case 0x36f94cu: goto label_36f94c;
        default: break;
    }

    ctx->pc = 0x36f918u;

    // 0x36f918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36f91c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36f920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36f924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f928: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36f928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36f92c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36f92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36f930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36f934: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36f934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36f938: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36f938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36f93c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36f93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f940: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36f940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f944: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36F944u;
    SET_GPR_U32(ctx, 31, 0x36F94Cu);
    ctx->pc = 0x36F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F944u;
    // 0x36f948: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36F944u, 0x36F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F94Cu;
label_36f94c:
    // 0x36f94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f950: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36f950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36f954: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36f954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36f958: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36F958u;
    {
        const bool branch_taken_0x36f958 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F958u;
        // 0x36f95c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f958) {
            ctx->pc = 0x36F978u;
            goto label_36f978;
        }
    }
    ctx->pc = 0x36F960u;
    // 0x36f960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36f960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36f964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f96c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36F96Cu;
    ctx->pc = 0x36F970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F96Cu;
    // 0x36f970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36F974u;
    // 0x36f974: 0x0  nop
    ctx->pc = 0x36f974u;
    // NOP
label_36f978:
    // 0x36f978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36f978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f97c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36f97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f984: 0x3e00008  jr          $ra
    ctx->pc = 0x36F984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F984u;
        // 0x36f988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F98Cu;
    // 0x36f98c: 0x0  nop
    ctx->pc = 0x36f98cu;
    // NOP
    ctx->pc = 0x36f990u;
}
