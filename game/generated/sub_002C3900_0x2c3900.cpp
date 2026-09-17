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

// Function: sub_002C3900
// Address: 0x2c3900 - 0x2c3998
void sub_002C3900_0x2c3900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3900_0x2c3900");
#endif

    switch (ctx->pc) {
        case 0x2c3928u: goto label_2c3928;
        default: break;
    }

    ctx->pc = 0x2c3900u;

    // 0x2c3900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c3904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3908: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c3908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c390c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c390cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c3910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c3910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c3914: 0x8c910898  lw          $s1, 0x898($a0)
    ctx->pc = 0x2c3914u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x2c3918: 0xa630006e  sh          $s0, 0x6E($s1)
    ctx->pc = 0x2c3918u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 110), (uint16_t)GPR_U32(ctx, 16));
    // 0x2c391c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x2c391cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2c3920: 0xc08eb0a  jal         func_23AC28
    ctx->pc = 0x2C3920u;
    SET_GPR_U32(ctx, 31, 0x2C3928u);
    ctx->pc = 0x2C3924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3920u;
    // 0x2c3924: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC28u, 0x2C3920u, 0x2C3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3928u;
label_2c3928:
    // 0x2c3928: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x2c3928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2c392c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C392Cu;
    {
        const bool branch_taken_0x2c392c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C392Cu;
        // 0x2c3930: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c392c) {
            ctx->pc = 0x2C3940u;
            goto label_2c3940;
        }
    }
    ctx->pc = 0x2C3934u;
    // 0x2c3934: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3934u;
    {
        const bool branch_taken_0x2c3934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3934u;
        // 0x2c3938: 0xae30008c  sw          $s0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3934) {
            ctx->pc = 0x2C3948u;
            goto label_2c3948;
        }
    }
    ctx->pc = 0x2C393Cu;
    // 0x2c393c: 0x0  nop
    ctx->pc = 0x2c393cu;
    // NOP
label_2c3940:
    // 0x2c3940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3944: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x2c3944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_2c3948:
    // 0x2c3948: 0x9623006c  lhu         $v1, 0x6C($s1)
    ctx->pc = 0x2c3948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2c394c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C394Cu;
    {
        const bool branch_taken_0x2c394c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C394Cu;
        // 0x2c3950: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c394c) {
            ctx->pc = 0x2C3988u;
            goto label_2c3988;
        }
    }
    ctx->pc = 0x2C3954u;
    // 0x2c3954: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3954u;
    {
        const bool branch_taken_0x2c3954 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2C3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3954u;
        // 0x2c3958: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3954) {
            ctx->pc = 0x2C3974u;
            goto label_2c3974;
        }
    }
    ctx->pc = 0x2C395Cu;
    // 0x2c395c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C395Cu;
    {
        const bool branch_taken_0x2c395c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C395Cu;
        // 0x2c3960: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c395c) {
            ctx->pc = 0x2C3978u;
            goto label_2c3978;
        }
    }
    ctx->pc = 0x2C3964u;
    // 0x2c3964: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2c3964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c3968: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3968u;
    {
        const bool branch_taken_0x2c3968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3968u;
        // 0x2c396c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3968) {
            ctx->pc = 0x2C3990u;
            goto label_2c3990;
        }
    }
    ctx->pc = 0x2C3970u;
    // 0x2c3970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3974:
    // 0x2c3974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c3974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c3978:
    // 0x2c3978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c3978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c397c: 0x808b87a  j           func_22E1E8
    ctx->pc = 0x2C397Cu;
    ctx->pc = 0x2C3980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C397Cu;
    // 0x2c3980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E1E8u;
    sub_0022E1E8_0x22e1e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2C3984u;
    // 0x2c3984: 0x0  nop
    ctx->pc = 0x2c3984u;
    // NOP
label_2c3988:
    // 0x2c3988: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c3988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c398c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c398cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3990:
    // 0x2c3990: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3990u;
        // 0x2c3994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3998u;
}
